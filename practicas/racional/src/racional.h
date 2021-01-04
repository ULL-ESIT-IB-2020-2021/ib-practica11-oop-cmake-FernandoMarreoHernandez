#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;




class racional{
    private:
        int nume1;
        int deno1;
        int nume2;
        int deno2;
        int sumrestdeno;
        int sumnume;
        int restnume;
        int mulnume;
        int muldeno;
        int divnume;
        int divdeno;
    public:
        racional(int,int,int,int);
        void mostrarfraccion(ofstream& archivo);
        void suma(ofstream& archivo);
        void resta(ofstream& archivo);
        void multi(ofstream& archivo);
        void div(ofstream& archivo);
};
racional::racional(int nume1_,int deno1_,int nume2_,int deno2_){
    nume1 = nume1_;
    deno1 = deno1_;
    nume2 = nume2_;
    deno2 = deno2_;
    sumrestdeno = deno1_ * deno2_;
}
void racional::mostrarfraccion(ofstream& archivo){
    archivo<<nume1<<"/"<<deno1<<" "<<nume2<<"/"<<deno2<<endl;
}
void racional::suma(ofstream& archivo){
    sumnume = deno2 * nume1 + deno1 * nume2;
    archivo<<nume1<<"/"<<deno1<<" + "<<nume2<<"/"<<deno2<<" = "<<sumnume<<"/"<<sumrestdeno<<endl;
}
void racional::resta(ofstream& archivo){
    restnume = deno2 * nume1 - deno1 * nume2;
    archivo<<nume1<<"/"<<deno1<<" - "<<nume2<<"/"<<deno2<<" = "<<restnume<<"/"<<sumrestdeno<<endl;
}
void racional::multi(ofstream& archivo){
    mulnume = nume1 * nume2;
    muldeno = deno1 * deno2;
    archivo<<nume1<<"/"<<deno1<<" * "<<nume2<<"/"<<deno2<<" = "<<mulnume<<"/"<<muldeno<<endl;
}
void racional::div(ofstream& archivo){
    divnume = nume1 * deno2;
    divdeno = deno1 * nume2;
    archivo<<nume1<<"/"<<deno1<<" / "<<nume2<<"/"<<deno2<<" = "<<divnume<<"/"<<divdeno<<endl;
}
