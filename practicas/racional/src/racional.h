#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#ifndef RACIONAL_H
#define RACIONAL_H

class Rationals{
 private:
  int numerator_1_{};
  int numerator_2_{};
  int denominator_1_{};
  int denominator_2_{};
  int result_denominator_{};
  int result_numerator_{};

 public:
  Rationals(int, int, int, int);
  void Add(std::ofstream& archive_write);
  void Sub(std::ofstream& archive_write);
  void Mult(std::ofstream& archive_write);
  void Div(std::ofstream& archive_write);
  void Compare(std::ofstream& archive_write);
  void Print(std::ofstream& archive_write);

};
Rationals::Rationals(int numerator_1, int numerator_2,int denominator_1, int denominator_2){
  numerator_1_ = numerator_1;
  numerator_2_ = numerator_2;
  denominator_1_ = denominator_1;
  denominator_2_ = denominator_2;
};
void Rationals::Add(std::ofstream& archive_write){
  result_denominator_ = denominator_1_ * denominator_2_;
  result_numerator_ = (denominator_1_ * numerator_2_) + (denominator_2_ * numerator_1_);

  archive_write << "Suma: " << numerator_1_ << "/" << denominator_1_ << " + " << numerator_2_ << "/" << denominator_2_
  << " = " << result_numerator_ << "/" << result_denominator_ <<  std::endl;
};
void Rationals::Sub(std::ofstream& archive_write){
  result_denominator_ = denominator_1_ * denominator_2_;
  result_numerator_ = (denominator_2_ * numerator_1_) - (denominator_1_ * numerator_2_);
  archive_write << "Resta: " << numerator_1_ << "/" << denominator_1_ << " - " << numerator_2_ << "/" << denominator_2_
  << " = " << result_numerator_ << "/" << result_denominator_ <<  std::endl;
};
void Rationals::Mult(std::ofstream& archive_write){
  result_numerator_ = numerator_1_ * numerator_2_ ;
  result_denominator_ = denominator_1_ * denominator_2_ ;
  archive_write << "Multiplicación: " << numerator_1_ << "/" << denominator_1_ << " * " << numerator_2_ << "/" << denominator_2_
  << " = " << result_numerator_ << "/" << result_denominator_ <<  std::endl;
};
void Rationals::Div(std::ofstream& archive_write){       //Aquí se aplica la regla del caramelo en las funciones
  result_numerator_ = numerator_1_ * denominator_2_ ;
  result_denominator_ = denominator_1_ * numerator_2_ ;
  archive_write << "División: " << numerator_1_ << "/" << denominator_1_ << " : " << numerator_2_ << "/" << denominator_2_
  << " = " << result_numerator_ << "/" << result_denominator_ <<  std::endl;
};
void Rationals::Compare(std::ofstream& archive_write){
  if(numerator_1_ / denominator_1_ > numerator_2_ / denominator_2_){
    archive_write << "Comparación: " << numerator_1_ << "/" << denominator_1_ << " > " << numerator_2_ << "/" << denominator_2_ << std::endl << std::endl;
  }
  else{
    archive_write <<  "Comparación: " << numerator_1_ << "/" << denominator_1_ << " < " << numerator_2_ << "/" << denominator_2_ << std::endl << std::endl;
  }
};


void Usage (int argc, char *argv[]);

#endif