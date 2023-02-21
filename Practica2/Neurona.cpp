#include "Neurona.h"

Neurona::Neurona()
{
    //ctor
}

void Neurona::setId(const int _Id)
{
    id=_Id;
}

void Neurona::setVoltaje(const float _Voltaje)
{
    voltaje =_Voltaje;
}

void Neurona::setPosicion_x(const int _posicion_x)
{
    posicion_x = _posicion_x;
}

void Neurona::setPosicion_y(const int _posicion_y)
{
    posicion_y = _posicion_y;
}

void Neurona::setRed(const int _Red)
{
    red = _Red;
}

void Neurona::setGreen(const int _Green)
{
    green = _Green;
}

void Neurona::setBlue(const int _Blue)
{
    blue = _Blue;
}

int Neurona::getId() const
{
    return id;
}

float Neurona::getVoltaje() const
{
    return voltaje;
}

int Neurona::getPosicion_x() const
{
    return posicion_x;
}

int Neurona::getPosicion_y() const
{
    return posicion_y;
}

int Neurona::getRed() const
{
    return red;
}

int Neurona::getGreen() const
{
    return green;
}

int Neurona::getBlue() const
{
    return blue;
}
