#ifndef NEURONA_H
#define NEURONA_H
#include <iostream>
using namespace std;

class Neurona
{
private:
        int id;
        float voltaje;
        int posicion_x;
        int posicion_y;
        int red;
        int green;
        int blue;

public:
    Neurona();
    void setId(const int _Id);
    void setVoltaje(const float _Voltaje);
    void setPosicion_x(const int _posicion_x);
    void setPosicion_y(const int _posicion_y);
    void setRed(const int _Red);
    void setGreen(const int _Green);
    void setBlue(const int _Blue);
    int getId() const;
    float getVoltaje() const;
    int getPosicion_x() const;
    int getPosicion_y() const;
    int getRed() const;
    int getGreen() const;
    int getBlue()const;
};

#endif // NEURONA_H
