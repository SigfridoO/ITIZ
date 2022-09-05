#include <iostream>

using namespace std;

const char separador[] = "1234";


void nuevoTema(char tema[]) {
    
    cout << separador << " ";
    cout << tema;
    cout << " " << separador;
    cout << endl;
}


int main() {

    
    int edad;
    unsigned int numeroSinSigno;
    long numeroEnteroLargo;
    float numeroReal;
    
    double numeroRealDoble;
    bool genero;
    char caracter;
    
    
    
    nuevoTema("Variables");
    edad = 23;
    numeroSinSigno = 0;
    
//    cout << "Número entero-- edad: " << edad << endl;
    
    cout << "23 < 45 : " << (23 > 45) << endl;
    cout << "23 == 34 : " << (23 == 34) << endl;

    numeroSinSigno = numeroSinSigno - 1;
    cout << numeroSinSigno << endl;
    
    cout << sizeof(edad) << endl;
    cout << sizeof(separador) << endl;
    
    caracter = 'A';
    
    cout << caracter << endl;
    cout << separador[4] << endl;
    
    cout << sizeof(numeroEnteroLargo) << endl;
    cout << sizeof(numeroReal) << endl;
    cout << sizeof(numeroRealDoble) << endl;
    cout << sizeof(genero) << endl;
    
    return 0;
    
}

