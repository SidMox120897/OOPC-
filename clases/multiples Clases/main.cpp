#include <iostream>
#include <cstdlib>
#include <string>

#include "persona.cpp"

using namespace std;

#define MAX 150

persona P[MAX];

int Cont=0;


void Agregar(string Nombre,string Direccion, string Telefono, int Edad, string NroComprado){
    P[Cont]=persona(Nombre, Direccion, Telefono, Edad, NroComprado);
    Cont++;
}

void Agregar(persona M){
    P[Cont]=M;
    Cont++;
}

void Imprimr(){
    for (int i = 0; i < Cont; i++)
    {
        P[i].Imprimir();
        cout << "******************"<< endl;    
    }
}

void Ganadores(string NroGanador){
    for (int i = 0; i < Cont+1; i++)
    {
        if(P[i].get_NroComprado() == NroGanador){
            P[i].Imprimir();
        }
    }
}


void CuatroCifras(){

}


int main(){

    string NroGanador="232548";
    persona A= persona("Luis David","Av. Baja","983536306",10,"123456");

    A.Imprimir();
    cout << "******************"<< endl;

    Agregar(A);
    Agregar("Raul Mox","Av. Baja","987456321",10,"456123");
    Agregar(persona("Stuard Little","Av. Baja","987456321",10,"456123"));
    //Imprimr();

    Ganadores("123456");
    return 0;
}


/*BIBLIOGRAFIA*/
/*
    http://www.lcc.uma.es/~eat/services/poo_c/fra2.html


*/
