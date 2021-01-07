#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "tools.h"
#include "racional.h"




int main(int argc, char *argv[]){

  if(argv[1] == NULL){                                             
    std::cout << "Modo de uso: " << argv[0] << " fichero_entrada.txt fichero_salida.txt " << std::endl;
    std::cout << "Pruebe: " << argv[0] << " --help para más información " << std::endl;
    exit(EXIT_SUCCESS);
  }
  
  Usage (argc, argv);
  
  std::string name_archive_read{argv[1]};
  std::ifstream archive_read;
  archive_read.open(name_archive_read, std::ios::in);
  if(archive_read.fail()){
    std::cout << "No se pudo abrir el archivo de entrada o no está creado" << std::endl;
    exit(EXIT_SUCCESS);
  }

  std::string name_archive_write {argv[2]};
  std::ofstream archive_write;
  archive_write.open(name_archive_write, std::ios::out);
  if(archive_write.fail()){
    std::cout << "Error al crear el archivo" << std::endl;
    exit(EXIT_SUCCESS);
  }

  int numerator_1{};
  int numerator_2{};
  int denominator_1{};
  int denominator_2{};
  int counter{}, negative_counter{};
  std::string negative {"-"};
  std::string in_numbers;
  std::string current_number;

  while (std::getline(archive_read, in_numbers)){     // aquí hacemos que el in_numbers contenga la información de una línea distinta en cada iteración
    counter = 0;
    for(int i{0}; i < in_numbers.length(); i++){
      if(in_numbers[i] > 47 && in_numbers[i] < 58){
        counter++;
        negative_counter++;
        current_number = in_numbers[i];
        switch(counter){
          case 1:
          numerator_1 = std::stoi(current_number);
          case 2: 
          denominator_1 = std::stoi(current_number);
            if(denominator_1 == 0){
              std::cout << "No puede haber denominador 0" << std::endl; 
            }
          case 3:
          numerator_2 = std::stoi(current_number);
          case 4:
          denominator_2 = std::stoi(current_number);
            if(denominator_2 == 0){
              std::cout << "No puede haber denominador 0" << std::endl; 
            }
        }
      }
    }  
 
    Rationals result(numerator_1, numerator_2, denominator_1, denominator_2);

    result.Add(archive_write);
    result.Sub(archive_write);
    result.Mult(archive_write);
    result.Div(archive_write);
    result.Compare(archive_write);
  }
  archive_write.close();
}