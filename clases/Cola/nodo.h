#include <iostream>
#include <cstdlib>
#include <string>
#include "persona.h"

using namespace std;

class nodo
{
private:
    persona P;
    nodo* next;
public:
    nodo(persona P);
    ~nodo();
    bool isEmpty();
};