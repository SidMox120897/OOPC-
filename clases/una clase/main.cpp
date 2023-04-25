#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class persona
{
private:
    string DNI;
    string Nombre;
    bool Sexo;
    int Edad;
public:
    persona(string DNI, string Nombre, bool Sexo,int Edad);
    ~persona();
    void Imprimir();
};

persona::persona(string DNI, string Nombre, bool Sexo,int Edad)
{
    this->DNI =DNI;
    this->Nombre=Nombre;
    this->Sexo=Sexo;
    this->Edad =Edad;
}

persona::~persona()
{
}

void persona::Imprimir(){
    cout << this->DNI << endl;
    cout << this->Nombre << endl;
    cout << this->Sexo << endl;
    cout << this->Edad << endl;
}


void main(){

    persona A= persona("12345678","Mox Teodor",1,10);
    persona* B = new persona("75757575","John Lennon",1,45);

    A.Imprimir();
    cout << "******************"<< endl;
    B->Imprimir();
}