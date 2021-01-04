#include <iostream>
#include <cstring>
#include <fstream>
#include "fechas.h"
#include "tools.h"
using namespace std;


int main(int argc, char* argv[]){
    ofstream archivo; //la palabra que vamos a usar para el documento de texto
    int day_, month_, year_, repeat_;
    usage (argc, argv);
    if (argc <= 5){
        cout << "fecha: falta algun dato para que el programa se ejecute. Pruebe 'fecha --help' para más información." <<endl;
    }
    else {
        archivo.open(argv[5],ios::out);//crea el archivo txt
        if(archivo.fail()){
            cout<<"error al crear el archivo";
            exit (EXIT_SUCCESS);;
        }
        int day_ = atoi(argv[1]);
        int month_ = atoi(argv[2]);
        int year_ = atoi(argv[3]);
        int repeat_ = atoi(argv[4]);
        fecha hoy(day_,month_,year_,repeat_);
        hoy.decir(archivo);
        hoy.bisiesto(archivo);
        hoy.siguientes(archivo);
        archivo.close();//cierra el txt
        
    return 0;
    }
    
    
}