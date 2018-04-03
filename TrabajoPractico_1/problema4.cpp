#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a;

    if(a%2){
        cout<<"a no es multiplo de 2"<<endl;
    }
    else{
        cout<<"a es multiplo de 2"<<endl;
    }

    cin>>b;

    if(b%2){
        cout<<"a no es multiplo de 2"<<endl;
    }
    else{
        cout<<"b es multiplo de 2"<<endl;
    }

    if(a%b){
        cout<<"a no es multiplo de b"<<endl;
    }
    else{
        cout<<"a es multiplo de b"<<endl;
    }

    if(b==a*a){
        cout<<"a al cuadro es b"<<endl;
    }
    else{
        cout<<"a al cuadrado no es b"<<endl;
    }
    return 0;
}
