#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class persona
{
private:
    std::string Nombre;
    std::string Direccion;
    std::string Telefono;
    int Edad;
    std::string NroComprado;
public:
    persona();
    persona(string Nombre,string Direccion, string Telefono, int Edad, string NroCOmprado);
    ~persona();
    void Imprimir();
    bool isEmpty();
    string get_NroComprado();
};
