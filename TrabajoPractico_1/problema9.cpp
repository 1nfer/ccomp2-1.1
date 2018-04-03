#include <iostream>

using namespace std;

int main(){
    int year;
    cin >>year;
    int p=year%4;
    int q=year%100;
    int r=400;

    if(!p&&(q||!r)){
        cout <<year<<" es bisiesto";
    }
    else{
        cout <<year<<" no es bisiesto";
    }
    return 0;
}
