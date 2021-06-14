#include "cubo.h"

Cubo::Cubo()
{
    lado = 1;
    computarVertices();
    computarFaces();
}

float Cubo::getLado()
{
    return lado;
}

void Cubo::setLado(float lado)
{
    this->lado = lado;
    computarVertices();
}

void Cubo::desenha()
{
    glBegin(GL_QUADS);
        for(int i=0;i<6;i++){
            glColor3f(corFace[i].redF(), corFace[i].greenF(), corFace[i].blueF());
            for(int j=0;j<4;j++){
                qDebug() << 'i' << i << 'j' << j << "face" << faces[i][j] << "vertice" << vertices[faces[i][j]].getX() << vertices[faces[j][i]].getY() << vertices[faces[j][i]].getZ();
               glVertex3fv(vertices[faces[i][j]].getCoord());
            }
        }
    glEnd();

    glColor3f(0,0,0);
    glLineWidth(4);
    for(int j=0;j<6;j++){
        glBegin(GL_LINE_LOOP);
        for(int i=0;i<4;i++){
           glVertex3fv(vertices[faces[j][i]].getCoord());
        }
        glEnd();
    }
    glLineWidth(1);
}

void Cubo::computarFaces()
{
    setFace(0,0,3,2,1); corFace[0].setRgb(255,0,0);
    setFace(1,0,4,7,3); corFace[1].setRgb(255,127,0);
    setFace(2,4,5,6,7); corFace[2].setRgb(191,255,0);
    setFace(3,5,1,2,6); corFace[3].setRgb(0,255,0);
    setFace(4,2,3,7,6); corFace[4].setRgb(0,255,255);
    setFace(5,0,1,5,4); corFace[5].setRgb(0,0,255);
}

void Cubo::setFace(int face, int v1, int v2, int v3, int v4)
{
    faces[face][0] = v1;
    faces[face][1] = v2;
    faces[face][2] = v3;
    faces[face][3] = v4;
}

void Cubo::computarVertices()
{
    vertices[0].setCoordenada(-lado, -lado, -lado);
    vertices[1].setCoordenada( lado, -lado, -lado);
    vertices[2].setCoordenada( lado,  lado, -lado);
    vertices[3].setCoordenada(-lado,  lado, -lado);
    vertices[4].setCoordenada(-lado, -lado,  lado);
    vertices[5].setCoordenada( lado, -lado,  lado);
    vertices[6].setCoordenada( lado,  lado,  lado);
    vertices[7].setCoordenada(-lado,  lado,  lado);
}
