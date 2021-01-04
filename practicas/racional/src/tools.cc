#include <iostream>
#include <cstring>
#include <fstream>
#include "tools.h"
using namespace std;

void usage(int argc, char *argv[]) {
    if (argc == 2 && strcmp(argv[1], "--help") == 0){
        cout << "Este programa para ser ejecutado necesita que le introduzca por linea de comando en este y separados por espacios el numerador y el denominador de 2 fracciones. ponga tras esto el nombre del archivo que guardara los datos (.txt)" <<endl;
        cout << "Puebe con './racional 6 4 2 3 Fechas.txt'"<<endl;
        exit (EXIT_SUCCESS);
    }
}