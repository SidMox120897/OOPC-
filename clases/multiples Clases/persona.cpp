#include <iostream>
#include <cstdlib>
#include <string>
#include "persona.h"

using namespace std;

persona::persona(){
    this->Nombre = "";
    this->Direccion = "";
    this->Telefono = "";
    this->Edad = 0;
    this->NroComprado = "";
};

persona::persona(string Nombre,string Direccion, string Telefono, int Edad, string NroComprado)
{
    this->Nombre = Nombre;
    this->Direccion = Direccion;
    this->Telefono = Telefono;
    this->Edad = Edad;
    this->NroComprado = NroComprado;
}

bool persona::isEmpty(){
    return this->Nombre == "" 
        && this->Direccion == "" 
        && this->Telefono == ""
        && this->Edad == 0
        && this->NroComprado == "";
}

persona::~persona()
{
}
string persona::get_NroComprado(){
    return this->NroComprado;
}

void persona::Imprimir(){
    cout << this->Nombre << endl;
    cout << this->Direccion << endl;
    cout << this->Telefono << endl;
    cout << this->Edad << endl;
    cout << this->NroComprado << endl;
}