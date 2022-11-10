#include<iostream>

using namespace std;


int main () {
    
    cout << "Serie de fibonacci\n";
    cout << "La serie de Fibonacci empieza con los terminos 0 y 1 \nel siguiente termino es la suma de los dos anteriores\n";
    
    int tamanio = 50;     
    
    //tamanio = 20;
    long arreglo[tamanio];
    
    arreglo[0] = 0;
    arreglo[1] = 1;
    
    
//    cout << "===== Imprimiendo el contenido del arreglo ===\n";
    
//    for (int i = 0; i< tamanio; i++) {
//        cout << arreglo[i] << ", ";
//    }
    
    
    for (int i = 2; i < tamanio; i++) {
        
        arreglo[i] = arreglo[i-1] + arreglo[i-2];
    }
    
    
        cout << "===== Imprimiendo el contenido del arreglo ===\n";
    
    for (int i = 0; i< tamanio; i++) {
        cout << arreglo[i] << ", ";
    }
    
    return 0;
}

