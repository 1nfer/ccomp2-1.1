#include <iostream>

using namespace std;

int main(){
    int numero,a,b,c,d,e;
    cin >>numero;

    a= numero%10;
    b= numero%100/10;
    c= numero%1000/100;
    d= numero%10000/1000;
    e= numero%100000/10000;

    if(a==e && b==d){
        cout <<numero<<" es palindrome";
    }
    else{
        cout <<numero<<" no es palindrome";
    }
    return 0;
}
