#include<iostream>
#include<cmath>

#include "Ecuacion.h"

using namespace std;

Ecuacion::Ecuacion():a(0),b(0),c(0){
    
}



void Ecuacion::establecerValores(float valorA, float valorB, float valorC) {
    a = valorA;
    b = valorB;
    c = valorC;
}

void Ecuacion::imprimir() {
    cout << a << ", " << b << ", " << c << endl;
}

void Ecuacion::calcular() {
    
    float d;
    float r1;
    float r2;
    
    cout << "Calculando las raices de la ecuación" << endl;
    d = sqrt(b*b - 4*a*c);
    r1 = (-b + d) / (2*a);
    r2 = (-b - d) / (2*a);
            
    cout << "Imprimiendo las races " << endl;
    cout << "r1= " << r1 << endl;
    cout << "r2= " << r2 << endl;
            
}