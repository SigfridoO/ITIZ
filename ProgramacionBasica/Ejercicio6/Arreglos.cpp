#include<iostream>
using namespace std;


float multiplicar(float numeroA, float numeroB){
    float resultado;
    resultado = numeroA * numeroB;
    
    return resultado;
}


int main() {
    
    int tamanio = 5;
    float numeros [tamanio];
    float alfa = 3.5;
  
    // limpia el  arreglo de números
    for (int i = 0; i < tamanio; i++){
        numeros[i] = 0;
    }
    
    
    // muestra el arreglo de numeros
    for (int i = 0; i < tamanio; i++){
        cout << i << ": " << numeros[i] << "\n";
    }
    
    numeros[0] =  1;
    numeros[1] =  2;
    numeros[2] =  3;
    numeros[3] =  4;
    numeros[4] =  5;
    
    cout << "====Después de limpiar el arreglo ======" << endl;
    
    // muestra el arreglo de numeros
    for (int i = 0; i < tamanio; i++){
        cout << i << ": " << numeros[i] << "\n";
    }
    
    
    // Multiplica
    cout << "====Después de multiplicar el arreglo ======" << endl;
    for (int i = 0; i < tamanio; i++) {
        cout << i << ", : " << numeros[i] << " = " << multiplicar(numeros[i], alfa) << endl;
    }



    
    return 0;
}