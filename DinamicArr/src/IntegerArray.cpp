#include <iostream>
#include "IntegerArray.h"
using namespace std;

IntegerArray::IntegerArray(int size, int arr[]){
    this->size=size;
    this->data=new int[size];
    for(int i=0;i<size;i++){
        data[i]=arr[i];
    }
    //ctor
}

IntegerArray::~IntegerArray(){
    //dtor
}

void IntegerArray::insertarAtras(int e){
    int *nuevo=new int[size++];
    for(int i=0;i<size;i++){
        nuevo[i]=data[i];
    }
    nuevo[size-1]=e;
    delete[] data;
    data=nuevo;
}

void IntegerArray::mostrar(){
    for(int i=0;i<size;i++){
        cout<<data[i]<<" ";
    }
}
