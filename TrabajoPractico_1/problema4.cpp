#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    (a%2)?cout<<a<<" no multiplo de 2"<<endl:cout<<a<<" multiplo de 2"<<endl;

    (b%2)?cout<<b<<" no multiplo de 2"<<endl:cout<<b<<" multiplo de 2"<<endl;

    (a%b)?cout<<a<<" no multiplo de "<<b<<endl:cout<<a<<" multiplo de "<<b<<endl;

    (b==a*a)?cout<<a<<" al cuadrado es "<<b<<endl:cout<<a<<" al cuadrado no es "<<b<<endl;

    return 0;
}
