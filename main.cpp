#include <iostream>
using namespace std;

char dividir(char *p, char *n){
    for(;*p!='\0';p++){
        *n=*p; n++;
        if(*p=='a' || *p=='e' || *p=='i' || *p=='o' || *p=='u'){
            ///separar consonantes seguidas Ej: conviccion, nose si habra otra :v
            if(*(p+1)==*(p+2)){
                if(*(p+1)=='r'){
                    *n++ = '-'; *n++ = *(p+1); *n++ = *(p+2); p+=2;
                    }
                else{
                *n++ = *(p+1);  p++; *n++ = '-';
                }
            }
            ///esos dos son prefijos
            /*else if(*(p+1)== 's' && *(p+2)=='t'){
                *n++ = *(p+1); *n++ = *(p+2);  *n++ = '-'; p+=2;
            }
            else if((*(p+1)== 'n' || *(p+1)== 'r') && *(p+2)=='s'){
                *n++ = *(p+1); *n++ = *(p+2);  *n++ = '-'; p+=2;
            }*/
            ///separar consonantes
            else if((*(p+1)== 'm' || *(p+1)== 'r' || *(p+1)== 'n' || *(p+1)== 'l' || *(p+1)== 's' || *(p+1)== 'b'|| *(p+1)== 'p') &&
                    (*(p+2)=='b' || *(p+2)== 'c' || *(p+2)== 't' || *(p+2)== 'n' || *(p+2)== 'v'  || *(p+2)== 'g' ||  *(p+2)== 'r'|| *(p+2)== 's'|| *(p+2)== 'd')){
                *n++ = *(p+1);  p++; *n++ = '-';
            }
            ///diptongo vocal debil con fuerte
            else if((*p== 'i' || *p== 'u') && (*(p+1)=='a' || *(p+1)== 'e' || *(p+1)== 'o' )){
                *n++ = *(p+1);
                if((*(p+2)== 'm' || *(p+2)== 'r' || *(p+2)== 'n' || *(p+2)== 'l') &&
                   (*(p+3)=='b' || *(p+3)== 'c' || *(p+3)== 't')){
                    *n++ = *(p+2);  p+=2; *n++ = '-';
                }
                else if(*(p+2)== 'n'){
                    *n++ = *(p+2); p+=2; *n++ = '-';
                }

                else{
                    p++; *n++ = '-';
                }

            }
            ///diptongo vocal fuerte con debil
            else if((*p=='a' || *p== 'e' || *p== 'o' ) && (*(p+1)== 'i' || *(p+1)== 'u')){
                *n++ = *(p+1);
                if((*(p+2)== 'm' || *(p+2)== 'r' || *(p+2)== 'n' || *(p+2)== 'l') &&
                   (*(p+3)=='b' || *(p+3)== 'c' || *(p+3)== 't')){
                    *n++ = *(p+2);  p+=2; *n++ = '-';
                }
                if(*(p+2)== 'n'){
                    *n++ = *(p+2); p+=2; *n++ = '-';
                }
                else{
                    p++; *n++ = '-';
                }
            }
            ///si la palabra termina con una de esas consonantes
            else if((*(p+1)=='n' || *(p+1)=='s' || *(p+1)=='d' || *(p+1)=='r'  || *(p+1)=='z') && *(p+2)== 0){
                *n++ = *(p+1);
            }
            else
                *n++ = '-';
        }

    }
    *(--n)='\0';
}

void print(char* n){
    for(;*n!='\0';n++){
        cout<<*n;
    }
}

int main(){
    char palabra[20], nuevo[20];
    cin>>palabra;
    dividir(palabra,nuevo);
    print(nuevo);
    return 0;
}
