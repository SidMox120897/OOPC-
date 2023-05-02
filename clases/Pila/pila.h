#include "nodo.h"
#include "nodo.cpp"

class pila
{
private:
    nodo* tope;
public:
    pila();
    ~pila();

    void push(int valor);
    int pop();
};


