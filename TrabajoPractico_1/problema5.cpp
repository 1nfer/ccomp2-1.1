#include <iostream>

using namespace std;

int main(){
    int numero;
    cin >>numero;
    int i=2;
    int b=1;

    if(numero==1){
        b=0;
    }

    while(b==1 && i!=numero){
        if(numero%i==0){
            b=0;
            i++;
        }
        i++;
    }
    if(b==0){
        cout <<numero<<" no es primo";
    }
    if(b==1){
        cout <<numero<<" es primo";
    }
    return 0;
}
