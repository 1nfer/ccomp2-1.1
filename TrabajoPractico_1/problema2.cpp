#include <iostream>

using namespace std;

int main(){
    int numero;
    cin >>numero;
    int i=1;

    for(;i!=numero;i=i+1){
        cout <<i<<",";
    }
    cout <<i;
    return 0;
}
