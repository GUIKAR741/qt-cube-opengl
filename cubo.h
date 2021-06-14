#ifndef CUBO_H
#define CUBO_H

#include "ponto.h"
#include <QColor>
#include <QDebug>
#include <GL/gl.h>

class Cubo
{
public:
    Cubo();
    float getLado();
    void setLado(float lado);
    void desenha();
private:
    float lado;
    Ponto vertices[8];
    int faces[6][4];
    QColor corFace[6];

    void computarFaces();
    void setFace(int face, int v1, int v2, int v3, int v4);
    void computarVertices();
};

#endif // CUBO_H
