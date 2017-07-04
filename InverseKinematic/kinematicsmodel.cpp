#include "kinematicsmodel.h"
#include <QtMath>

KinematicsModel::KinematicsModel(QOpenGLShaderProgram &program)
    : selectedLinkageIndex(0),
      program(program),
      linkages(QList<Linkage>({
                                  {4, 0},
                                  {3, static_cast<float>(-M_PI / 5)},
                                  {6, static_cast<float>(-M_PI / 3)},
                                  {4, static_cast<float>(-M_PI / 2)},
                                  {2, static_cast<float>(M_PI / 2)}
                              })),
      startPoint(0.f, 0.f)
{
}

Linkage &KinematicsModel::currentLinkage(){
    return linkages[selectedLinkageIndex];
}

void KinematicsModel::inverseKinematics(QVector2D &pos){
    for(int i = linkages.length() - 1; i >= 0; i--){
        auto positions = getPositions();
        QVector2D old = positions.last() - positions[i];
        QVector2D target = pos - positions[i];
        linkages[i].angle += static_cast<float>(qAtan2(static_cast<qreal>(old.x() * target.y() - target.x() * old.y()),
                                                       static_cast<qreal>(QVector2D::dotProduct(old, target))));
    }
}

void KinematicsModel::nextLinkage(){
    selectedLinkageIndex = (selectedLinkageIndex + 1) % linkages.length();
}

void KinematicsModel::init(){
    initializeOpenGLFunctions();
}

QVector3D const KinematicsModel::NormalColor = QVector3D(0, 0, 0);
QVector3D  const KinematicsModel::SelectedColor = QVector3D(1, 0, 0);

QList<QVector2D> KinematicsModel::getPositions(){
    QList<QVector2D> list;
    list.append(startPoint);
    qreal sumAngle = 0;
    for (auto it = linkages.begin(); it != linkages.end(); it++){
         sumAngle += static_cast<qreal>(it->angle);
         list.append(list.last() + it->len * QVector2D(static_cast<float>(qCos(sumAngle)), static_cast<float>(qSin(sumAngle))));
    }
    return list;
}

void KinematicsModel::doPaint(){
    //enable attributes
    int vertexLocation = program.attributeLocation("a_position");
    program.enableAttributeArray(vertexLocation);
    int colorLocation = program.attributeLocation("a_color");
    program.enableAttributeArray(colorLocation);

    QVector<QVector2D> points;
    QVector<QVector3D> colors;
    QList<QVector2D> positions = getPositions();

    //draw points
    for(int i = 0; i < positions.length(); i++){
        points.append(positions[i]);
        colors.append(i == selectedLinkageIndex ? SelectedColor : NormalColor);
    }
    program.setAttributeArray(vertexLocation, points.data(), 0);
    program.setAttributeArray(colorLocation, colors.data(), 0);

    Q_ASSERT(points.length() == colors.length());
    glDrawArrays(GL_POINTS, 0, colors.length());

    //draw lines
    points.clear(); colors.clear();
    Q_ASSERT(positions.length() > 0);
    points.append(positions[0]);
    colors.append(NormalColor);
    for(int i = 0; i < positions.length() - 1; i++){
        if (i == selectedLinkageIndex){
            points.append(positions[i]);
            colors.append(SelectedColor);

            points.append(positions[i + 1]);
            colors.append(SelectedColor);
        }
        points.append(positions[i + 1]);
        colors.append(NormalColor);

    }
    program.setAttributeArray(vertexLocation, points.data(), 0);
    program.setAttributeArray(colorLocation, colors.data(), 0);

    Q_ASSERT(points.length() == colors.length());
    glDrawArrays(GL_LINE_STRIP, 0, colors.length());
}
