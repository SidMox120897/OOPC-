#include "pila.h"


pila::pila(/* args */)
{
    tope = NULL;
}

pila::~pila()
{
    nodo *aux;
    while(tope!=NULL) {
        aux = tope;
        tope = (*tope).get_next();
        delete aux;
    }
}


void pila::push(int v){
    /* Crear un nodo nuevo */
    nodo *n = new nodo(v, tope);
    /* el comienzo de la pila es el nuevo nodo */
    tope = n;
}

int pila::pop(){
    int v; /*variable aux para retorno*/
    /*Si la pila está vacía,regresar 0*/
    if(tope == NULL) return 0;
    nodo *n = tope; /* nodo apunta al
    primer elemento de la pila */
    tope = (*n).get_next(); /* el nuevo
    tope es el siguiente del tope
    actual.Con esto nos lo saltamos*/
    v = (*n).getValor(); /* Guardamos el
    valor de retorno que es el
    contenido del antiguo tope */
    delete n; /* Borrar el nodo */
    return v;
}