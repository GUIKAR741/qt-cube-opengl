#include "ponto.h"

Ponto::Ponto()
{

}

float Ponto::getX()
{
    return x;
}

float Ponto::getY()
{
    return y;
}

float Ponto::getZ()
{
    return z;
}

float* Ponto::getCoord()
{
    return coord;
}

void Ponto::setX(float x)
{
    coord[0] = x;
    this->x = x;
}

void Ponto::setY(float y)
{
    coord[1] = y;
    this->y = y;
}

void Ponto::setZ(float z)
{
    coord[2] = z;
    this->z = z;
}

void Ponto::setCoordenada(float x, float y, float z)
{
    setX(x);
    setY(y);
    setZ(z);
}
