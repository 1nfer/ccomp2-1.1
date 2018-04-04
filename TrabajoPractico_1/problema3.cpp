#include <iostream>

using namespace std;

int main(){
    int a,b,c,prom;
    cin>>a>>b>>c;

    (a>b&&a>c)?cout<<a<<endl:(b>c)?cout<<b<<endl:cout<<c<<endl;
    (a<b&&a<c)?cout<<a<<endl:(b<c)?cout<<b<<endl:cout<<c<<endl;

    prom=(a+b+c)/3;

    cout<<prom;

    return 0;
}
