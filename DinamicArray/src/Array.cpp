#include "Array.h"
#include <iostream>
using namespace std;

bool esPrimo(int e){
    if(e<1){
        return false;
    }
    for(int i=2;i<e;i++){
        if(!(e%i)){
            return false;
        }
    }
    return true;
}

Array::Array(int size, int arr[]){
    this->size= size;
    this->data= new int[size];
    for(int i=0;i<size;i++){
        data[i]= arr[i];
    }
}

Array::~Array(){
    delete[] data;
}

void Array::mostrar(){
    for(int i=0;i<size;i++){
        cout<<data[i]<<" ";
    }
}

void Array::insertar(int e){
    int *nuevo= new int[size++];
    for(int i=0;i<size-1;i++){
        nuevo[i]=data[i];
    }
    nuevo[size-1]=e;
    delete[] data;
    data=nuevo;
}

void Array::borrar(int e){
    int *borra= new int[size];
    for(int i=0;i<size;i++){
        if(i<e)
            borra[i]= data[i];
        if(i>e)
            borra[i-1]= data[i];
    }
    size--;
    delete[] data;
    data=borra;
}

void Array::vaciar(){
    size=0;
    delete[] data;
}

int Array::menor(){
    int mini=data[0];
    for(int i=0;i<size;i++){
        data[i]>mini?mini=mini:mini=data[i];
    }
    return mini;
}

int Array::mayor(){
    int maxi=data[0];
    for(int i=0;i<size;i++){
        data[i]<maxi?maxi=maxi:maxi=data[i];
    }
    return maxi;
}

int Array::suma(){
    int total=0;
    for(int i=0;i<size;i++){
        total+=data[i];
    }
    return total;
}

int Array::promedio(){
    return suma()/size;
}

void Array::ordenar(){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(data[i]<data[j]){
                int aux=data[i];
                data[i]=data[j];
                data[j]=aux;
            }
        }
    }
}

void Array::invertir(){
    int j=size-1;
    for(int i=0;i<=j;i++,j--){
        int aux=data[i];
        data[i]=data[j];
        data[j]=aux;
    }
}

int Array::mayorPrimo(){
    int maxi=0;
    for(int i=0;i<size;i++){
        if(esPrimo(data[i])){
            data[i]<maxi?maxi=maxi:maxi=data[i];
        }
    }
    return maxi;
}

int Array::menorPrimo(){
    int mini=data[0];
    for(int i=0;i<size;i++){
        if(esPrimo(data[i])){
            data[i]>mini?mini=mini:mini=data[i];
        }
    }
    return mini;
}
