#include <iostream>
using namespace std;

bool substring(char *s,char *t){
    while(*s!=*t){
        s++;
    }
    while(*t!='\0'){
        if(*s!=*t){
            return false;
        }
        t++,s++;
    }
    return true;
}

int main(){
    char s[]="alohjuan";
    char t[]="ohju";
    char num[]="123";
    cout<<convertir_entero(num)<<endl;
    return 0;
}
