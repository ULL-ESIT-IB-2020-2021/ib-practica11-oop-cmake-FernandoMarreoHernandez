#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#ifndef RACIONAL_H
#define RACIONAL_H
using namespace std;

class Rationals
{
private:
  int numerator_1_{};
  int numerator_2_{};
  int denominator_1_{};
  int denominator_2_{};
  int result_denominator_{};
  int result_numerator_{};

public:
  Rationals(int, int, int, int);
  void Add(ofstream &archive_write);
  void Sub(ofstream &archive_write);
  void Mult(ofstream &archive_write);
  void Div(ofstream &archive_write);
  void Compare(ofstream &archive_write);
  void Print(ofstream &archive_write);
  void MediaNum(ofstream &archive_write);
  void MediaDen(ofstream &archive_write);
  void MediaRac(ofstream &archive_write);
};
Rationals::Rationals(int numerator_1, int numerator_2, int denominator_1, int denominator_2)
{
  numerator_1_ = numerator_1;
  numerator_2_ = numerator_2;
  denominator_1_ = denominator_1;
  denominator_2_ = denominator_2;
};
void Rationals::Add(ofstream &archive_write)
{
  result_denominator_ = denominator_1_ * denominator_2_;
  result_numerator_ = (denominator_1_ * numerator_2_) + (denominator_2_ * numerator_1_);

  archive_write << "Suma: " << numerator_1_ << "/" << denominator_1_ << " + " << numerator_2_ << "/" << denominator_2_
                << " = " << result_numerator_ << "/" << result_denominator_ << endl;
};
void Rationals::Sub(ofstream &archive_write)
{
  result_denominator_ = denominator_1_ * denominator_2_;
  result_numerator_ = (denominator_2_ * numerator_1_) - (denominator_1_ * numerator_2_);
  archive_write << "Resta: " << numerator_1_ << "/" << denominator_1_ << " - " << numerator_2_ << "/" << denominator_2_
                << " = " << result_numerator_ << "/" << result_denominator_ << endl;
};
void Rationals::Mult(ofstream &archive_write)
{
  result_numerator_ = numerator_1_ * numerator_2_;
  result_denominator_ = denominator_1_ * denominator_2_;
  archive_write << "Multiplicación: " << numerator_1_ << "/" << denominator_1_ << " * " << numerator_2_ << "/" << denominator_2_
                << " = " << result_numerator_ << "/" << result_denominator_ << endl;
};
void Rationals::Div(ofstream &archive_write)
{ //Aquí se aplica la regla del caramelo en las funciones
  result_numerator_ = numerator_1_ * denominator_2_;
  result_denominator_ = denominator_1_ * numerator_2_;
  archive_write << "División: " << numerator_1_ << "/" << denominator_1_ << " : " << numerator_2_ << "/" << denominator_2_
                << " = " << result_numerator_ << "/" << result_denominator_ << endl;
};
void Rationals::Compare(ofstream &archive_write)
{
  if (numerator_1_ / denominator_1_ > numerator_2_ / denominator_2_)
  {
    archive_write << "Comparación: " << numerator_1_ << "/" << denominator_1_ << " > " << numerator_2_ << "/" << denominator_2_ << endl
                  << endl;
  }
  else
  {
    archive_write << "Comparación: " << numerator_1_ << "/" << denominator_1_ << " < " << numerator_2_ << "/" << denominator_2_ << endl
                  << endl;
  }
};
void Rationals::MediaNum(ofstream &archive_write)
{
  result_numerator_ = (numerator_1_ + numerator_2_) / 2;
  archive_write << "Media Numerador aproximada en enteros: " << result_numerator_ << endl;
};
void Rationals::MediaDen(ofstream &archive_write)
{
  result_denominator_ = (denominator_1_ + denominator_2_) / 2;
  archive_write << "Media Denominador aproximada en enteros: " << result_denominator_ << endl;
};
void Rationals::MediaRac(ofstream &archive_write)
{
  result_denominator_ = denominator_1_ * denominator_2_ * 2; //en este caso multiplicas por 2 el denominador porque son 2 fracciones para hacer la media
  result_numerator_ = (denominator_1_ * numerator_2_) + (denominator_2_ * numerator_1_);
  archive_write << "Media de las fracciones: " << result_numerator_ << "/" << result_denominator_ << endl;
}
#endif