#include <iostream>

using namespace std;

bool edad(int edad ){
    return(edad>=18);
}

void sucesion(int n ){
    int i=1;
    for(;i!=n;i++){
        cout <<i<<",";
    }
    cout <<i;
}

void mayMenProm(int a, int b, int c, int &mayor, int &menor, float &prom){
    (a>b&&a>c)?mayor=a:(b>c)?mayor=b:mayor=c;
    (a<b&&a<c)?menor=a:(b<c)?menor=b:menor=c;
    prom=(a+b+c)/3.0;
}

void multiplos(int a,int b){
    cout<<(!(a%2))<<","<<(!(b%2))<<","<<(!(a%b))<<","<<(a*a==b);
}


bool primo(int n){
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
        if(primo(x)){
            cout<<x<<" ";
            i++;
        }
        x++;
    }
}

void tab(int n){
    
}

bool bisiesto(int n){
    int p=n%4;
    int q=n%100;
    int r=400;

    return (!p&&(q||!r));
}

int fibonacci(int n){
    if(n<2){
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}

int factorial(int n){
    if(n==0){
        n=1;
        return n;
    }
    n*=factorial(n-1);
}

int main(){
    cout<<edad(18)<<endl;
    sucesion(15);
    cout<<"\n";
    int may, men;
    float prom;
    mayMenProm(5,6,4,may,men,prom);
    cout<<may<<","<<men<<","<<prom<<endl;
    multiplos(6,36);
    cout<<"\n";
    cout<<primo(2);
    cout<<"\n";
    secuenciaPrimos(5);
    cout<<"\n";
    cout<<bisiesto(1904);
    cout<<"\n";
    cout<<"Fibonacci: "<<fibonacci(6)<<endl;
    cout<<"Factorial: "<<factorial(5);
    return 0;
}
