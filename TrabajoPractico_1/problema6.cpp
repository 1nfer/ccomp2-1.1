#include <iostream>

using namespace std;

int main(){
    int primo;
    cin >>primo;
    int numero=1;
    int i=2;
    int b=1;

    while(numero!=primo){
        if(numero==1){
            cout<<"";
            b=0;
        }

        while(b==1 && i!=numero){
            if(numero%i==0){
                b=0;
                i=i+1;
            }
            i=i+1;
        }
        if(b==0){
            cout <<"";
        }
        if(b==1){
            cout <<numero<<" ";
        }
        b=1;
        i=2;
        numero=numero+1;
    }
    return 0;
}
