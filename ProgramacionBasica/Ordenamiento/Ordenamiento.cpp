#include<iostream>

using namespace std;

void imprimirArreglo (int[], int);
void ordenarArreglo (int[], int);


int main () {
    int tamanioArreglo = 10;
    
    int arreglo [] ={34, 78, 1, 23, 74, 9, 5, 2, 67, 123};
 
    imprimirArreglo(arreglo, tamanioArreglo);
    
    ordenarArreglo(arreglo, tamanioArreglo);
    
    imprimirArreglo(arreglo, tamanioArreglo);
    
    return 0;
}

void imprimirArreglo (int arreglo[], int tamanio) {
    cout << "Imprimiendo el arreglo\n" << endl;
    for (int i = 0; i < tamanio; i++) {
        cout << arreglo[i] << ", ";
    }
}

void ordenarArreglo (int arreglo [], int tamanio) {
    for (int i = 0; i < tamanio-1; i++) {
        for (int j = 0; j < tamanio - 1- i; j++) {
            int aux;
            // comparar un elemento del arreglo si es menor lo deja, si es mayor lo intercambia
            if (arreglo[j] > arreglo [j+1]) {
                aux = arreglo [j];
                // intercambiar los elmentos
                arreglo[j] = arreglo[j+1];
                arreglo[j + 1] = aux;
            }
        }
    }
}