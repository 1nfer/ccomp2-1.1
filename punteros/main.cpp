#include <iostream>

using namespace std;

int sumaIte(int *arr, int len){
    int sum=0;
    for(int *i=arr;i<=(arr+len-1);i++){
        sum+=*i;
    }
    return sum;
}

int sumaRec(int *arr, int len){
    if(len==1){
        return *arr;
    }
    return *arr+sumaRec(++arr,--len);
}

void invertir(int *arr,int len){
    int *ptr=(arr+len-1);
    for(;arr<=ptr;arr++,ptr--){
       int aux=*arr;
       *arr=*ptr;
       *ptr=aux;
    }
}

int len(char *s){
    int len=0;
    for(;*s!='\0';s++){
        len+=1;
    }
    return len;
}

int cpy(char *s, char *t){
    for(;*t!='\0';t++,s++){
        *s=*t;
    }
}

int add(char *s, char *t){
    while(*s!='\0'){
        s++;
    }
    for(;*t!='\0';t++,s++){
        *s=*t;
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
    cout<<len(s)<<endl;
    cpy(s,t);
    cout<<s<<endl;
    add(s,t);
    cout<<s;

    return 0;
}
