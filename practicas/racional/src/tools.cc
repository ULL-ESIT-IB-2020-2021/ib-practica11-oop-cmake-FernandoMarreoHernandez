#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

void Usage (int argc, char *argv[]){

  std::string parameter{argv[1]};

  if ( parameter == "--help" ) {
    std::cout << "Modo de uso: " << argv[0] << " fichero_entrada.txt fichero_salida.txt " << std::endl << std::endl;
    std::cout << "fichero_entrada: fichero de texto conteniendo líneas con un par de número racionales: a/b c/d separados por un espacio" << std::endl;
    std::cout << "fichero_salida: fichero de texto que contendrá líneas con las operaciones realizadas" << std::endl << std::endl;

    exit(EXIT_SUCCESS);
  }

}