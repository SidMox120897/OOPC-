#include <vector>
#include <cstdlib>
#include <iostream>
#include <string>

#include "candidato.cpp"
#include "vacante.cpp"


using namespace std;

std::vector<candidato> candidatos;
std::vector<vacante> vacantes;

void candidatos_en_1Vacante(){
    for (auto C: candidatos)
    {
        int Contador=0;
        vacante Aux=vacante();
        for(auto V: vacantes){
            if(Contador>1){
                if(V.buscarCandidato(C)){ 
                    Contador++;
                    Aux=V;
                }
            }else{
                break;
            }
        }
        if(Contador==1){
            C.Imprimir();
            Aux.ImprimirSoloVacante();
        }
    }
}

void vacantes_con_1Candidato(){
    for(auto V : vacantes){
        if(V.getCandidatos().size()!=1){
            V.Imprimir();
        }
    }
}

int main(){
    candidato P1=candidato("12345678","Lucas Martines","Compositor","5");
    candidato P2=candidato("81234567","Marco Peralta","Ing. Sistemas","20");
    candidato P3=candidato("23145678","Alejandro Mercado","Ing. Civil","5");
    candidato P4=candidato("34125678","Luis Spinetta","Administrador","5");
    candidato P5=candidato("34561278","Charlie Garcia","Contador","5");
    candidato P6=candidato("45612378","Mateo Lagos","Contador","5");
    candidato P7=candidato("15678234","Mia Capoba","Ing. Sistemas","5");
    candidato P8=candidato("78123456","Marta Mar","Psicologa","5");

    vacante V1=vacante("1","Composicion de musica","Se desea preparar composiciones profesionales","Compositor-Musico-Ejecutor");
    vacante V2=vacante("2","Proyecto Obra de Construccion","Se desea Ingenieros y administradores","Ing. Civil-Ing. Sistemas-Administrador");
    vacante V3=vacante("3","Desarrollo de Pagina Web y Administracion","Se necesita desarrolladores o ingenieros de sistemas","Ing. Sistemas-Ing. Software");
    vacante V4=vacante("4","Control de Impuestos","Con urgencia Contadores o Administradores","Administrador-Contador");
    vacante V5=vacante("5","Hospital Mental","Hospital Mental necesita psicologos","Psicolo-Administrador");

    V1.set_Candidatos(P1);
    
    V2.set_Candidatos(P2);
    V2.set_Candidatos(P3);
    V2.set_Candidatos(P4);
    V2.set_Candidatos(P7);
    V2.set_Candidatos(P6);
    
    V3.set_Candidatos(P2);
    V3.set_Candidatos(P4);
    
    V4.set_Candidatos(P4);
    V4.set_Candidatos(P5);
    V4.set_Candidatos(P6);
    
    V5.set_Candidatos(P8);



    vacantes.push_back(vacante());
    return 0;
}
