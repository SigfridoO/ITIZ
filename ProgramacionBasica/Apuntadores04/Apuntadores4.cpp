#include <iostream>

using namespace std;

void funcionConArreglo (int[], int);
void funcionConApuntadores ( int * , int);

void imprimirNombre(char []);

void imprimirNombre2(char *);

int main () {
    
    int arreglo []={1, 2, 3};
    
    funcionConArreglo(arreglo, 3);
    funcionConApuntadores(arreglo, 3);
    
    
    
    char persona[]= "juan";
    imprimirNombre(persona);
    imprimirNombre2(persona);
    
    return 0;
}

void funcionConArreglo(int arreglo[], int tamanio){
    cout << "Dentro de la FunciónConArreglo"<< endl;
    for (int i = 0; i < tamanio; i++) {
        cout << arreglo[i] << " ," ;
    }
    cout << endl;
}


void funcionConApuntadores ( int *arr , int tamanio){
    cout << "Dentro de la FunciónConApuntadores"<< endl; 
    
    for (int i = 0; i < tamanio; i++) {
        cout <<  *(arr+i) << " ," ;
    }
    cout << endl;
}

void imprimirNombre (char nombre[]) {
    int i = 0;
    
    while (nombre[i] != '\0') {
        cout << nombre[i];
        i++;
    }
}

void imprimirNombre2 (char *nombre) {
    int i = 0;
    
    while (*(nombre + i) != '\0') {
        cout << *(nombre +i );
        i++;
    }
}