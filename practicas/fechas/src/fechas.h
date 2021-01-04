#include <iostream>
#include <cstring>
#include <fstream>
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
        void biciesto(ofstream& archivo);
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
void fecha::biciesto(ofstream& archivo){
    if(anio % 4 == 0){
        archivo << "el año es biciesto"<<endl;
    }
    else{
        archivo << "el año no es biciesto"<<endl;
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