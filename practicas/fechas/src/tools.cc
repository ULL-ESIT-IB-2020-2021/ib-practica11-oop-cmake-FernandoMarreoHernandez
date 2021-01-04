#include <iostream>
#include <cstring>
#include <fstream>
#include "tools.h"
using namespace std;

void usage(int argc, char *argv[]) {
    if (argc == 2 && strcmp(argv[1], "--help") == 0){
        cout << "Este programa para ser ejecutado necesita que le introduzca por linea de comando en este orden y separados por un espacio: un dia, un mes y un año (en números). Seguido ponga tambien cuantos dias posteriores desea y por ultimo el nombre del archivo.txt" <<endl;
        cout << "Puebe con './fechas 06 04 2002 10 FechasPrueba'"<<endl;
        exit (EXIT_SUCCESS);
    }
}