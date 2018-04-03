#include <iostream>

using namespace std;

int main(){
    int numero;
    cin >>numero;

    int a=0;
    int b=1;
    int c;
    for(int i=0;i!=numero;i=i+1){
        c=b+a;
        a=b;
        b=c;
        cout <<a<<" ";
    }
    return 0;
    }
