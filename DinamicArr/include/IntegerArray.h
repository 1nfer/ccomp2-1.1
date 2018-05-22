#ifndef INTEGERARRAY_H
#define INTEGERARRAY_H


class IntegerArray{
    int size;
    int *data;
    public:
        IntegerArray(int size,int arr[]);
        ~IntegerArray();
        void insertarAtras(int);
        void mostrar();
};

#endif // INTEGERARRAY_H
