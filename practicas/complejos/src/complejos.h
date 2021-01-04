#include <iostream>

using namespace std;

class complejo{
    private:
        int real1;
        int imaginaria1;
        int real2;
        int imaginaria2;
        int sumareal;
        int sumaimaginaria;
        int restareal;
        int restaimaginaria;
    public:
        complejo(int,int,int,int);
        void mostrarnumeros();
        void suma();
        void resta();
};
complejo::complejo(int real1_, int imaginaria1_,int real2_,int imaginaria2_){
    real1 = real1_;
    imaginaria1 = imaginaria1_;
    real2 = real2_;
    imaginaria2 = imaginaria2_;

}
void complejo::mostrarnumeros(){
    cout<<"su primero numero complejo es: "<<real1<<"+"<<imaginaria1<<"i"<<endl;
    cout<<"su segundo numero complejo es: "<<real2<<"+"<<imaginaria2<<"i"<<endl;
}
void complejo::suma(){
    sumareal = real1 + real2;
    sumaimaginaria = imaginaria1 + imaginaria2;
    cout << "la suma de operar los numeos complejos es: " << sumareal<< "+"<<sumaimaginaria<<"i"<<endl;
}
void complejo::resta(){
    restareal = real1 -  real2;
    restaimaginaria = imaginaria1 - imaginaria2;
    cout << "la resta de operar sus numeros complejos es: " << restareal<< "+"<<restaimaginaria<<"i"<<endl;
}