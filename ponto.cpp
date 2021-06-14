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

void Ponto::setX(float x)
{
    this->x = x;
}

void Ponto::setY(float y)
{
    this->y = y;
}

void Ponto::setZ(float z)
{
    this->z = z;
}

void Ponto::setCoordenada(float x, float y, float z)
{
    setX(x);
    setY(y);
    setZ(z);
}
