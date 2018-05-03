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

char *invertir(char *s,int i=0, int tam=7){
    if(tam==4){
        return s;
    }
    int aux=s[i];
    s[i]=s[tam];
    s[tam]=aux;
    return invertir(s,++i,--tam);
}

int main(){
    char s[]="alohjuan";
    char t[]="ohju";
    cout<<substring(s,t)<<endl;
    invertir(s);
    cout<<s;
    return 0;
}
