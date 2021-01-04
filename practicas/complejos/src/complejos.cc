#include <iostream>
#include "complejos.h"

using namespace std;

int main(){
    int real1_,real2_, imaginaria1_, imaginaria2_;
    cout << "introduzca la parte real del primer número complejo"<<endl;
    cin >> real1_;
    cout << "introduzca la parte imaginaria del primer número complejo"<<endl;
    cin >> real2_;
    cout << "introduzca la parte real del segundo número complejo"<<endl;
    cin >> imaginaria1_;
    cout << "introduzca la parte imaginaria del segundo número complejo"<<endl;
    cin >> imaginaria2_;
    complejo operaciones(real1_,real2_,imaginaria1_,imaginaria2_);
    operaciones.mostrarnumeros();
    operaciones.suma();
    operaciones.resta();
    return 0;

}
