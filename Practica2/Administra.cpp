#include "Administra.h"
#include <iostream>
#include "string"
using namespace std;

Administra::Administra()
{
    primero = NULL;
    contador = 0;
}

void Administra::agregarInicio(Neurona &value)
{
    Nodo *nuevo;
    nuevo = new Nodo();
    nuevo->dato = value;
    nuevo->siguiente = primero;
    primero = nuevo;
}

void Administra::agregarFinal(Neurona &value)
{
    Nodo *tmp;
    Nodo *aux;
    aux = new Nodo();
    aux->dato = value;
    tmp = primero;
    if(!vacia()){
        while(tmp->siguiente!=NULL){
            tmp = tmp->siguiente;
        }
        tmp->siguiente = aux;
    }else{
        primero = aux;
    }
    contador++;
}

void Administra::mostrar(const int &i, Nodo *auxiliar)
{
    cout << "Neurona no: " << i << endl;
    cout << "ID: " << auxiliar->getDato().getId() << endl;
    cout << "Voltaje: " << auxiliar->getDato().getVoltaje() << endl;
    cout << "Posicion x: " << auxiliar->getDato().getPosicion_x() << endl;
    cout << "Posicion y: " << auxiliar->getDato().getPosicion_y() << endl;
    cout << "Red: " << auxiliar->getDato().getRed() << endl << endl;
    cout << "Green: " << auxiliar->getDato().getGreen() << endl << endl;
    cout << "Blue: " << auxiliar->getDato().getBlue() << endl << endl;

}

void Administra::mostrarTodo()
{
    Nodo *aux = primero;
        int i=0;
        while (aux!=NULL) {
            mostrar(i+1,aux);
            aux = aux->siguiente;
            i++;
        }
        system("pause");
}

bool Administra::vacia()
{
    if(primero==NULL)
            return true;
        else
            return false;
}

Nodo::Nodo()
{
    //ctor
}

Neurona Nodo::getDato()
{
    return this->dato;
}
