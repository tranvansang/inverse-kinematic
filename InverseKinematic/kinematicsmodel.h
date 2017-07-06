#ifndef KINEMATICSMODEL_H
#define KINEMATICSMODEL_H

#include <QObject>
#include <QOpenGLFunctions>
#include <QOpenGLShaderProgram>
#include <QOpenGLBuffer>
#include <QVector>
#include <QList>
#include <QTimer>
#include <QOpenGLBuffer>
#include <QOpenGLVertexArrayObject>

typedef struct {
    float len;
    float angle;
    float speed; //angle per min
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
    void nextAnimation(int);
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
