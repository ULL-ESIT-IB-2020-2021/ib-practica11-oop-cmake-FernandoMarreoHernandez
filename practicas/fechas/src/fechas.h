#include <iostream>
#include <cstring>
#include <fstream>
#pragma once
#ifndef CLASSES_FUNCTIONS_COMPLEX_H
#define CLASSES_FUNCTIONS_COMPLEX_H
using namespace std;

class fecha{
    private:
        int dia;
        int mes;
        int anio;
        int repetir;
        int i=1;
    public:
        fecha(int, int, int, int);
        void decir(ofstream& archivo);
        void bisiesto(ofstream& archivo);
        void siguientes(ofstream& archivo);


};
fecha::fecha(int day, int month, int year, int repeat){
    dia = day;
    mes = month;
    anio = year;
    repetir = repeat;
}
void fecha::decir(ofstream& archivo){
    archivo<< "hoy es: " << dia << "/" << mes << "/" << anio <<endl;
}
void fecha::bisiesto(ofstream& archivo){
    if(anio % 4 == 0){
        archivo << "el año es bisiesto"<<endl;
    }
    else{
        archivo << "el año no es bisiesto"<<endl;
    }

}
void fecha::siguientes(ofstream& archivo){
    archivo<< "los proximos "<< repetir<<" días son: "<<endl;
    for(int i{0} ; i<repetir ; i++){
        dia = dia + 1;
        if(dia>30){
            dia = 1;
            mes = mes + 1; 
        }
        if(mes>12){
            mes = 1;
            anio = anio + 1;
        }
        archivo << dia<< "/"<< mes<<"/" << anio <<endl;
    }
    
}
#endif