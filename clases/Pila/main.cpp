#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

#include "pila.cpp"

using namespace std;

#define MAX 150


int main()
{
    pila Pila;
    Pila.push(20);
    cout << "push(20)" << endl;
    Pila.push(10);
    cout << "push(10)" << endl;
    cout << "pop() = " << Pila.pop() << endl;
    Pila.push(40);
    cout << "push(40)" << endl;
    Pila.push(30);
    cout << "push(30)" << endl;
    cout << "pop() = " << Pila.pop() << endl;
    cout << "pop() = " << Pila.pop() << endl;
    Pila.push(90);
    cout << "push(90)" << endl;
    cout << "pop() = " << Pila.pop() << endl;
    cout << "pop() = " << Pila.pop() << endl;
    cin.get();
    return 0;
}