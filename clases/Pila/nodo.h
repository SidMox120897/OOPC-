#include <iostream>
#include <cstdlib>
#include <string>


using namespace std;

#ifndef Nodo_H
#define Nodo_H
class nodo
{
private:
    int valor;
    nodo* next;
public:
    nodo(int valor, nodo* next);
    ~nodo();
    int getValor();
    nodo* get_next();
};

#endif