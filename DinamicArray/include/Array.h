#ifndef ARRAY_H
#define ARRAY_H


class Array{
    int size;
    int *data;
    public:
        Array(int size, int arr[]);
        ~Array();
        void mostrar();
        void insertar(int);
        void borrar(int);
        void vaciar();
        int menor();
        int mayor();
        int suma();
        int promedio();
        void ordenar();
        void invertir();
        int mayorPrimo();
        int menorPrimo();
};

#endif // ARRAY_H
