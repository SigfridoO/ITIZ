#include <iostream>

using namespace std;
int main () {
    long enteroLargo; 
    int tamanio = 8;
    double numeros[tamanio];
    
    int *apuntadorEntero;
    double *apuntadorDouble;
    
    apuntadorEntero = &tamanio;
    
    apuntadorDouble = numeros;
    
    cout << "El numero de bytes de enterolargo es: "<< sizeof(enteroLargo) << endl;

    cout << "El valor de apuntadorEmtero es: " << apuntadorEntero << endl;
    



    
    cout << "El numero de bytes de numeros es: " << sizeof(numeros) << endl;
    cout << "El numero de bytes del contenido de apuntadorDouble es: " << sizeof(*apuntadorDouble) << endl;

    cout << "La dirección de memoria de numeros[0]: " << &numeros[0] <<endl;
    cout << "El valor de apuntadorDouble es : " << apuntadorDouble << endl;
    return 0;
}