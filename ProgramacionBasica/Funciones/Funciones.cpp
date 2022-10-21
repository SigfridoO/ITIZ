#include <iostream>

using namespace std;
int mostrarMenuArea();
int mostrarMenuGeneral();
void cuadradoArea();
void cuadradoPerimetro();


int main () {
    
    int opcion = mostrarMenuGeneral();    
    
    int opcion2;
    
    if (opcion == 1) {
        cout << "Usted ha elegido CUADRADO"<< endl;
        opcion2 = mostrarMenuArea();
        if (opcion2 == 1) {
            cuadradoArea();
        }
        if (opcion2 == 2) {
            cuadradoPerimetro();
        }
    }
    
    if (opcion == 2) {
        cout << "Usted ha elegido RECTANGULO"<< endl;
        opcion2 = mostrarMenuArea();
    }

    if (opcion == 3) {
        cout << "Usted ha elegido CIRCULO"<< endl;
        opcion2 = mostrarMenuArea();
    }
    
    return 0;
}

int mostrarMenuGeneral() {
    int opcion;
    cout << "Seleccione una figura" << endl;
    cout << "1. Cuadrado" << endl;
    cout << "2. Rectangulo" << endl;
    cout << "3. Circulo" << endl;
    cout << "\nopcion: ";
    cin >> opcion;
    return opcion;
    
}

int mostrarMenuArea() {
    int opcion;
    cout << "\n¿Qué dese hacer?" << endl;
    cout << "1. Calcular Area" << endl;
    cout << "2. Calcular Perimetro" << endl;
    cin >> opcion;
    /*
    if (opcion > 0  && opcion <=2) {
        return opcion;
    } else {
        r
    }*/
    return opcion;
}

void cuadradoArea() {
    int lado;
    cout << "\nIngrese el lado del cuadrado";
    cin >> lado;
    cout << "El resultado es: " << lado*lado;
}

void cuadradoPerimetro() {
    int lado;
    cout << "\nIngrese el lado del cuadrado: ";
    cin >> lado;
    cout << "El resultado es: " << lado*4;
}