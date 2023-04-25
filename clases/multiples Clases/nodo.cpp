#include "nodo.h"
#include "persona.h"

nodo::nodo(persona P)
{
    this->P=P;
    this->next=NULL;    
}

nodo::~nodo()
{
}

bool nodo::isEmpty()
{
    return P.isEmpty() && next==NULL;
}