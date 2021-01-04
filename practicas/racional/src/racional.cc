#include <iostream>
#include <cstring>
#include <fstream>
#include "racional.h"
#include "tools.h"
using namespace std;

int main(int argc, char* argv[]){
    ofstream archivo;
    int nume1_, deno1_, nume2_, deno2_;
    usage (argc, argv);
    if (argc <= 5){
        cout << "fecha: falta algun dato para que el programa se ejecute. Pruebe 'racional --help' para más información." <<endl;
    }
    else {
        archivo.open(argv[5],ios::out);
        if(archivo.fail()){
            cout<<"error al crear el archivo (ponga nombre"<<endl;
            exit (EXIT_SUCCESS);;
        }
        int nume1_ = atoi(argv[1]);
        int deno1_ = atoi(argv[2]);
        int nume2_ = atoi(argv[3]);
        int deno2_ = atoi(argv[4]);
        if (deno1_ == 0){
            cout<< "usted puso un denominador 0. eso no es posible de operar, por favor ponga otro numero."<<endl;
            exit (EXIT_SUCCESS); 
        }
        if (deno2_ == 0){
            cout<< "usted puso un denominador 0. eso no es posible de operar, por favor ponga otro numero."<<endl;
            exit (EXIT_SUCCESS); 
        }
        racional fracciones(nume1_, deno1_, nume2_, deno2_);
        
        fracciones.mostrarfraccion(archivo);
        fracciones.suma(archivo);
        fracciones.resta(archivo);
        fracciones.multi(archivo);
        fracciones.div(archivo);
        archivo.close();
        return 0;
    }
}