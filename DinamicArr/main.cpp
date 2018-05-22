#include <iostream>
#include "IntegerArray.h"
using namespace std;

int main(){
    int arr[]={1,2};
    IntegerArray a(2,arr);
    a.insertarAtras(5);
    a.mostrar();
    return 0;
}
