#ifndef PONTO_H
#define PONTO_H


class Ponto
{
public:
    Ponto();
    float getX();
    float getY();
    float getZ();
    float *getCoord();
    void setX(float x);
    void setY(float y);
    void setZ(float z);
    void setCoordenada(float x, float y, float z);
private:
    float x,y,z;
    float coord[3];
};

#endif // PONTO_H
