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

void Ecuacion::establecerValoresD(double valorA, double valorB, double valorC) {
    aa = valorA;
    bb = valorB;
    cc = valorC;
}

void Ecuacion::imprimir() {
    cout << a << ", " << b << ", " << c << endl;
    cout << aa << ", " << bb << ", " << cc << endl;
}

void Ecuacion::calcular() {
    
    float d;
    float r1;
    float r2;
    
    double dd;
    double rr1;
    double rr2;
    
    cout << "=========================" << endl;
    cout << "Calculando las raices de la ecuación (float)" << endl;
    d = sqrt(b*b - 4*a*c);
    r1 = (-b + d) / (2*a);
    r2 = (-b - d) / (2*a);
    
    cout << "Imprimiendo las raices " << endl;
    cout << "r1= " << r1 << endl;
    cout << "r2= " << r2 << endl;
    
    
    cout << "=========================" << endl;
    cout << "Calculando las raices de la ecuación (double)" << endl;
    dd = sqrt(bb*bb - 4*aa*cc);
    rr1 = (-bb + dd) / (2*aa);
    rr2 = (-bb - dd) / (2*aa);
            
    cout << "Imprimiendo las raices " << endl;
    cout << "r1= " << rr1 << endl;
    cout << "r2= " << rr2 << endl;
            
}