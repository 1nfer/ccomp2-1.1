#include <iostream>

using namespace std;

bool esPerfecto(int n){
    int suma=0;
    for(int i=1;i<n;i++){
        if(!(n%i)){
            suma+=i;
        }
    }
    if(suma==n){
        return true;
    }
    return false;
}

void secuenciaPerfectos(int n){
    for(int i=5;i<n;i++){
        if(esPerfecto(i)){
            for(int j=1;j<i;j++){
                    if(!(i%j))
                        cout<<j<<" ";
            }
            cout<<"= "<<i<<endl;
        }
    }
}

bool esPrimo(int n){
    if(n<1){
        return false;
        }
    for(int i=2;i<n;i++){
        if(!(n%i)){
            return false;
        }
    }
    return true;
}

void secuenciaPrimos(int n){
    int i=0;
    int x=2;
    while(i<n){
        if(esPrimo(x)){
            cout<<x<<" ";
            i++;
        }
        x++;
    }
}

int potencia(int base,int exponente){
    if(exponente==1){
        return base;
    }
    return base*potencia(base,exponente-=1);
}

void intercambio(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;

    cout<<"x: "<<a<<endl;
    cout<<"y: "<<b<<endl;
}

void intercambioBit(int a, int b){
    a^=b;
    b^=a;
    a^=b;

    cout<<"x: "<<a<<endl;
    cout<<"y: "<<b<<endl;
}

int main(){
    secuenciaPerfectos(1000);
    cout<<"\n";
    secuenciaPrimos(15);
    cout<<"\n\n";
    cout<<potencia(7,4);
    cout<<"\n\n";
    int x=18;
    int y=12;
    intercambio(x,y);
    cout<<"\n\n";
    intercambioBit(x,y);
    return 0;

}
