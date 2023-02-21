#include "mainwindow.h"
#include "Neurona.h"
#include "Administra.h"
#include <iostream>
using namespace std;

#include <QApplication>
int menu();
bool menu2();

int main(int argc, char *argv[])
{
    QApplication b(argc, argv);
    MainWindow w;
    Neurona n;
    Administra a;

    w.show();
    while(true){
            switch(menu())
            {
                case 1:
                    {
                        system("cls");
                        int id;
                        float voltaje;
                        int posicion_x;
                        int posicion_y;
                        int red;
                        int green;
                        int blue;
                        cout << "Agregar neurona\n" << endl;

                        cout << "Ingresa el ID de la neurona: ";
                        cin >> id;
                        n.setId(id);
                        getchar();

                        cout << "Agrega voltaje: ";
                        cin >> voltaje;
                        n.setVoltaje(voltaje);
                        getchar();

                        cout << "Agrega posicion x: ";
                        cin >> posicion_x;
                        n.setPosicion_y(posicion_x);
                        getchar();

                        cout << "Agrega posicion y: ";
                        cin >> posicion_y;
                        n.setPosicion_y(posicion_y);
                        getchar();

                        cout << "Ingresa red: ";
                        cin >> red;
                        n.setRed(red);
                        getchar();

                        cout << "Ingresa green: ";
                        cin >> green;
                        n.setGreen(green);
                        getchar();

                        cout << "Ingresa blue: ";
                        cin >> blue;
                        n.setBlue(blue);
                        getchar();


                        if(menu2())
                            a.agregarInicio(n);
                        else
                            a.agregarFinal(n);


                        cout <<"\nEl Dato ha sido ingresado exitosamente!!" << endl;
                        system("pause");
                    }
                break;
                case 2:
                    {
                        if(a.vacia())
                            cout << "La paqueteria esta vacia :(" << endl;
                        else
                            a.mostrarTodo();
                        getchar();
                    }
                break;
                case 3:
                    {
                        return 0;
                    }
                break;
                default:
                    {

                        cout << "Opcion no correcta intenta de nuevo :D" << endl;
                    }
                break;

            }
    }
    return b.exec();
}

int menu(){
    system("cls");
        int opcion;
        cout << "(1). Agregar paquete" << endl;
        cout << "(2). Mostrar todo" << endl;
        cout << "(3). Salir" << endl;
        cout << "Elige una opcion: ";
        cin >> opcion;
        getchar();
        return opcion;
}

bool menu2(){
    system("cls");
        int opcion;
        cout << "(1). Agregar Inicio" << endl;
        cout << "(2). Agregar Final" << endl;
        cin >> opcion;
        getchar();
        if(opcion==1)
            return true;
        else
            return false;
}
