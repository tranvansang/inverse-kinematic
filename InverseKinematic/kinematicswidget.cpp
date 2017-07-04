#include "kinematicswidget.h"
#include <QtMath>

KinematicsWidget::KinematicsWidget(QWidget *parent)
    : QOpenGLWidget (parent),
      kinematicModel(program)
{
}

void KinematicsWidget::initializeGL(){
    initializeOpenGLFunctions();
    kinematicModel.init();
    glClearColor(1, 1, 1, 1);

    makeCurrent();
    //init shaders
    if (!program.addShaderFromSourceFile(QOpenGLShader::Vertex, ":/vshader.vert")) close();
    if (!program.addShaderFromSourceFile(QOpenGLShader::Fragment, ":/fshader.frag")) close();
    if (!program.link()) close();
    if (!program.bind()) close();

    // gl setup
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LINE_SMOOTH);
    glDepthFunc(GL_LEQUAL);
    glPointSize(5);
    glLineWidth(1);
}

void KinematicsWidget::mouseReleaseEvent(QMouseEvent *event){
    QVector2D mouse = widgetToGL(event->pos());
    kinematicModel.inverseKinematics(mouse);
    update();
}


QVector2D KinematicsWidget::widgetToGL(QPoint pos){
    float x = 2.f * pos.x() / width() - 1.f,
            y = 1.f - 2.f * pos.y() / height();
    QVector4D glPos = pmMatrix.inverted() * QVector4D(x, y, 0, 1);
    return QVector2D(glPos[0], glPos[1]) / (glPos[3] == 0.f ? 1 : glPos[3]);
}

void KinematicsWidget::resizeGL(int w, int h){
    glViewport(0, 0, w, h);

    //setup mvp

    float aspect = static_cast<float>(w) / (h ? h : 1);
    QMatrix4x4 projection;
    projection.setToIdentity();
    const float fov = 45., zNear = 20.f, zFar = 50., camZ = 30.;
    projection.perspective(fov, aspect, zNear, zFar);

    QMatrix4x4 model;
    model.translate(0, 0, -camZ);

    pmMatrix = projection * model;
    program.setUniformValue("mvp_matrix", pmMatrix);
}

void KinematicsWidget::paintGL(){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    kinematicModel.doPaint();
}

