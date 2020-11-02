#include <iostream>
#include "arregloDinamico.h"
#include "computadora.h"

using namespace std;

int main () {
    ArregloDinamico <Computadora> computadoras;

    Computadora c01("Windows 10","Intel i5",8,512);
    Computadora c02("MacOs","Intel i3",6,1024);
    Computadora c03("MacOs","AMD 5",4,256);
    Computadora c04("Unix","AMD 3",3,512);
    Computadora c05("MacOs","Intel i7",8,2048);
    Computadora c06("Ubuntu","Intel i3",4,512);
    Computadora c07("MacOs","Intel i5",6,512);

    computadoras << c01 << c02 << c03 << c04 << c05;

    Computadora *b1 = computadoras.buscar(c01);
    if (b1 != nullptr){
        cout << *b1 << endl;
    }
    else{
        cout << "No hay coincidencias" << endl;
    }
    
    b1 = computadoras.buscar(c06);
    if (b1 != nullptr){
        cout << *b1 << endl;
    }
    else{
        cout << "No hay coincidencias" << endl;
    }

    ArregloDinamico <Computadora*> ptrs = computadoras.buscar_todos(c07);
    
    if (ptrs.size() > 0){
        for (size_t i = 0; i < ptrs.size(); i++)
        {
            Computadora *c = ptrs[i];
            cout << *c << endl;
        }
        
    }
    else{
        cout << "No existen coincidencias" << endl;
    }
    
    return 0;
}