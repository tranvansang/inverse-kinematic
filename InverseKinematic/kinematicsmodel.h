#ifndef KINEMATICSMODEL_H
#define KINEMATICSMODEL_H

#include <QObject>
#include <QOpenGLFunctions>
#include <QOpenGLShaderProgram>
#include <QOpenGLBuffer>
#include <QVector>
#include <QList>

typedef struct {
    float len;
    float angle;
} Linkage;

class KinematicsModel : protected QOpenGLFunctions
{
public:
    KinematicsModel(QOpenGLShaderProgram &program);
    void init();
    void doPaint();
    void nextLinkage();
    Linkage & currentLinkage();
    void inverseKinematics(QVector2D &);
private:
    int selectedLinkageIndex;
    QOpenGLShaderProgram &program;
    QList<Linkage> linkages;
    QList<QVector2D> getPositions();

    const static QVector3D NormalColor;
    const static QVector3D SelectedColor;
    QVector2D startPoint;
};

#endif // KINEMATICSMODEL_H
