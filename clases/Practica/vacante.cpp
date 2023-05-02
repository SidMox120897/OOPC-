#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

#include "candidato.cpp"

using namespace std;

#ifndef VACANTE_H
#define VACANTE_H
#endif

class vacante
{
private:
    std::string ID;
    std::string Nombre;
    std::string Descripcion;
    std::string Habilidades;
    std::vector<candidato> candidatos;

public:
    vacante();
    vacante(std::string ID, std::string Nombre, std::string Descripcion, std::string Habilidades);
    ~vacante();
    auto getCandidatos();
    void set_Candidatos(candidato C);
    void Imprimir();
    void ImprimirSoloVacante();
    bool buscarCandidato(candidato C);
};

vacante::vacante()
{
}

vacante::vacante(std::string ID,
                std::string Nombre,
                std::string Descripcion,
                std::string Habilidades)
{
    this->ID=ID;
    this->Nombre=Nombre;
    this->Descripcion=Descripcion;
    this->Habilidades=Habilidades;
    this->candidatos=candidatos;
}

vacante::~vacante()
{
}

void vacante::set_Candidatos(candidato C){
    this->candidatos.push_back(C);
}


void vacante::ImprimirSoloVacante(){
    cout << this->Nombre << endl;
    cout << this->Descripcion << endl;
    cout << this->Habilidades << endl;
}


void vacante::Imprimir(){
    cout << this->Nombre << endl;
    cout << this->Descripcion << endl;
    cout << this->Habilidades << endl;
    for(auto Candidate : this->candidatos){
        Candidate.Imprimir();
    }
}

auto vacante::getCandidatos(){
    return this->candidatos;
}


bool vacante::buscarCandidato(candidato C){
    for(auto Candidate : this->candidatos){
        if(Candidate.getDNI()==C.getDNI()){
            return 1;
        }
    }
    return 0;
}
