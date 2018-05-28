#include <iostream>
#include "Array.h"
using namespace std;

int main(){
    int arr[]={123,53,4,8};
    Array a(4,arr);
    a.insertar(2);
    a.ordenar();
    a.invertir();
    a.mostrar();
    cout<<"\n"<<a.menorPrimo();

    return 0;
}
