#include <iostream>

using namespace std;

int main(){
    int numero;
    cin >>numero;

    int mayor=numero;
    int menor=numero;
    int prom=numero;

    for(int i=1;i!=3;i=i+1){
        cin >>numero;

        if(numero>mayor){
            mayor=numero;
        }
        if(numero<menor){
            menor=numero;
        }
        prom=prom+numero;
    }
    cout<<"i"<<":"<<menor<<endl;
    cout<<"ii"<<":"<<mayor<<endl;
    cout<<"iii"<<":"<<prom/3.0;
    return 0;
}
