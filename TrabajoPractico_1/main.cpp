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

void mayMenProm(int a, int b, int c, int &mayor, int &menor, float &prom){
    (a>b&&a>c)?mayor=a:(b>c)?mayor=b:mayor=c;
    (a<b&&a<c)?menor=a:(b<c)?menor=b:menor=c;
    prom=(a+b+c)/3.0;
}

void multiplos(int a,int b){
    cout<<(!(a%2))<<","<<(!(b%2));
}

int main(){
    cout<<edad(18)<<endl;
    sucesion(15);
    cout<<"\n";
    int may, men;
    float prom;
    mayMenProm(5,6,4,may,men,prom);
    cout<<may<<","<<men<<","<<prom<<endl;
    multiplos(36,6);
    cout<<"Fibonacci: "<<fibonacci(6)<<endl;
    cout<<"Factorial: "<<factorial(5);
    return 0;
}
