#ifndef ADMINISTRA_H
#define ADMINISTRA_H
#include "Neurona.h"

class Nodo{
private:
    Neurona dato;
    Nodo *siguiente;
     friend class Administra;
public:
    Nodo();
    Neurona getDato();
};

class Administra
{
private:
    Nodo *primero;
    Nodo *auxiliar;
    int contador;
public:
    Administra();
    void agregarInicio(Neurona& value);
    void agregarFinal(Neurona &value);
    void mostrar(const int& i, Nodo* auxiliar);
    void mostrarTodo();
    bool vacia();
};

#endif // ADMINISTRA_H
