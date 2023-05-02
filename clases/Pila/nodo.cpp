#include "nodo.h"

nodo::nodo(int valor, nodo* next)
{
    this->valor=valor;
    this->next=next;    
}

nodo * nodo::get_next(){
    return this->next;
}

int nodo::getValor(){
    return this->valor;
}
nodo::~nodo()
{
}
