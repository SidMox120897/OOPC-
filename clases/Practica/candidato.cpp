#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

#ifndef CANDIDATO_H
#define CANDIDATO_H
#endif
class candidato
{
private:
    std::string DNI;
    std::string Nombre;
    std::string Habilidad;
    std::string Experiencia;
public:
    candidato();
    candidato(std::string DNI,std::string Nombre, std::string Habilidad, std::string Experiencia);
    ~candidato();
    void Imprimir();
    string getDNI();
};

candidato::candidato()
{
}

candidato::candidato(std::string DNI, std::string Nombre, std::string Habilidad, std::string Experiencia)
{
    this->DNI=DNI;
    this->Nombre=Nombre;
    this->Habilidad=Habilidad;
    this->Experiencia=Experiencia;
}

candidato::~candidato()
{
}

void candidato::Imprimir(){
    cout << this->Nombre << endl;
    cout << this->Habilidad << endl;
    cout << this->Experiencia << endl;

}

string candidato::getDNI(){
    return this->DNI;
}
