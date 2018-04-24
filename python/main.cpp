#include <iostream>

using namespace std;

int sumaIte(const int a[], int tam){
    int sum=0;
    for(int i=0;i<tam;sum+=a[i++]);
    return sum;
}

int sumaRec(const int a[], int tam){
    if(tam==1){
        return a[0];
    }
    return a[tam]+sumaRec(a,--tam);
}

void invertir(int a[],int length){
    int izq=0;
    int der=length-1;
    while(izq<=der){
        int aux=a[izq];
        a[izq]=a[der];
        a[der]=aux;
        der--;
        izq++;
    }
}

int size(char s[]){
    int tam=0;
    for(;s[tam]!='\0';tam++);
    return tam;
}

int cpy(char s[], char t[]){
    for(int i=0;t[i]!='\0';i++){
        s[i]=t[i];
    }
}
int add(char s[], char t[]){
    int tam=0;
    while(s[tam]!='\0'){
        tam++;
    }
    for(int i=0;t[i]!='\0';i++){
        s[tam]=t[i];
        tam++;
    }
}

int main(){
    int a[]={1,5,6,4};
    cout<<sumaIte(a,4)<<endl;
    cout<<sumaRec(a,4)<<endl;
    invertir(a,4);
    char s[]="hay ocho";
    char t[]="no hay";
    for(int i=0; i<4; i++)
        cout<<a[i];
    cout<<endl;
    cout<<size(s)<<endl;
    cpy(s,t);
    cout<<s<<endl;
    add(s,t);
    cout<<s;

    return 0;
}
