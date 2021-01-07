#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

void Usage (int argc, char *argv[]){

  string parameter{argv[1]};

  if ( parameter == "--help" ) {
    cout << "Modo de uso: " << argv[0] << " fichero_entrada.txt fichero_salida.txt " << endl << endl;
    cout << "fichero_entrada: fichero de texto conteniendo líneas con un par de número racionales: a/b c/d separados por un espacio" << endl;
    cout << "fichero_salida: fichero de texto que contendrá líneas con las operaciones realizadas" << endl << endl;

    exit(EXIT_SUCCESS);
  }

}