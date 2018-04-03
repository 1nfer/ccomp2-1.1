#include <iostream>

using namespace std;

int main(){
    int numero;
    cin >>numero;
    int fac=1;

    for(int i=numero;i!=0;i=i-1){
        fac=fac*i;
    }
    cout <<fac;
    return 0;
}
