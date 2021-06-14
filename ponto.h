#ifndef PONTO_H
#define PONTO_H


class Ponto
{
public:
    Ponto();
    float getX();
    float getY();
    float getZ();
    void setX(float x);
    void setY(float y);
    void setZ(float z);
    void setCoordenada(float x, float y, float z);
private:
    float x,y,z;
};

#endif // PONTO_H
