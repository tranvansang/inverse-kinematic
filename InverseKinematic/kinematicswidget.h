#ifndef KinematicsWidget_H
#define KinematicsWidget_H

#include <QObject>
#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include <QOpenGLFunctions>
#include <QOpenGLShaderProgram>
#include "kinematicsmodel.h"

class KinematicsWidget : public QOpenGLWidget, protected QOpenGLFunctions
{
public:
    explicit KinematicsWidget(QWidget *parent);
    KinematicsModel kinematicModel;

protected:
    void initializeGL() Q_DECL_OVERRIDE;
    void paintGL() Q_DECL_OVERRIDE;
    void resizeGL(int, int) Q_DECL_OVERRIDE;
    void mouseReleaseEvent(QMouseEvent *) Q_DECL_OVERRIDE;

private:
    void makePerspective(qreal, qreal, qreal, qreal);
    QOpenGLShaderProgram program;
    QVector2D widgetToGL(QPoint);
    QMatrix4x4 pmMatrix;
};

#endif // KinematicsWidget_H
