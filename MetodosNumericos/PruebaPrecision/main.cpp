#include<iostream>
#include"Ecuacion.h"

using namespace std;

int main() {
    Ecuacion ecuacion; 
    ecuacion.establecerValores(1, 3000.001, 3);
    ecuacion.establecerValoresD(1, 3000.001, 3);
    ecuacion.calcular();
    //ecuacion.imprimir();

    return 0;
}

