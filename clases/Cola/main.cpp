#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

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
    cout << "*****Ganadores*****"<< endl;
    for (int i = 0; i < Cont+1; i++)
    {
        if(P[i].get_NroComprado() == NroGanador){
            P[i].Imprimir();
            cout << "******************"<< endl;
        }
    }
}


std::vector<int> ObtenerOrdenados(string NroGanador, string NroParticipante){
    vector<int> Resul;
    if(NroParticipante!=NroGanador){
        for (size_t j = 0; j < NroGanador.length(); j++)
        {
            int m = NroParticipante.find(NroGanador[j]);
            if(m >= 0){
                Resul.push_back(m);
            }
        }
    }
    return Resul;
}


bool buscarOrden(vector<int> V,int Nro_de_Ordenados){
    int c=1;
    for (size_t x = 0; x < V.size()-1; x++)
    {
        if(c!=3){
            if(V[x]<V[x+1]){
                c++;
            }else{
                c=1;
            }
        }else{
            break;
        }
    }   
    return c==3?true:false;
}


void CuatroCifras(string NroGanador){
    cout << "*****CuatroCifras*****"<< endl;
    for (int i = 0; i < Cont+1; i++)
    {
        string str=P[i].get_NroComprado();
        vector<int> Ordenados=ObtenerOrdenados(NroGanador, str);
        if(Ordenados.size()>3){
            if(buscarOrden(Ordenados,4)){
                P[i].Imprimir();
                cout << "******************"<< endl;
            }
        }
    }
    
}


int main(){
    string NroGanador="232548";
    persona A= persona("Luis David","Av. Baja","983536306",10,"123456");

    //A.Imprimir();
    cout << "******************"<< endl;

    Agregar(A);
    Agregar("Raul Mox","Av. Baja","987456321",10,"456123");
    Agregar(persona("Stuard Little","Av. Baja","987456321",10,"345623"));
    //Imprimr();

    Ganadores("123456");

    CuatroCifras("123456");
    return 0;
}


/*BIBLIOGRAFIA*/
/*
    http://www.lcc.uma.es/~eat/services/poo_c/fra2.html


*/
