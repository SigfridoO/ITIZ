#include <iostream>

using namespace std;

const string margen = "=============";

void nuevoTema(string tema) {
    cout << margen << " ";
    cout << tema;
    cout << " " << margen;
    cout << endl;
}


int main() {

    int edad;
    long numeroEnteroLargo;
    float numeroReal;
    
    double numeroRealDoble;
    bool genero;
    char caracter;
    
    
    nuevoTema("Variables");
    edad = 23;
    cout << "edad: " << edad << endl;
    

    
    return 0;
    
}

