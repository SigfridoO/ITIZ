#include<iostream>

using namespace std;

void nuevoTema (char tema[]) {
    //std::cout << "========== nuevo tema ==========" << std::endl;
    cout << "========== " << tema <<" ==========" << endl;
}



int main() {
    
    int tamanioArreglo = 6;
    int numeros[tamanioArreglo];
    
    float numerosDecimales [3];
    
    char nombre[] = "juan";
    
    numeros[0] = 20;
    numeros[1] = 12;
    numeros[2] = 67;
    numeros[3] = 234;
    numeros[4] = 89;
    numeros[5] = 56;
    
    cout << numeros[5] << endl;
    
    
    numerosDecimales[0]= 45.7;
    numerosDecimales[1]= 98.347;
    numerosDecimales[2]= 234.67;
    
    //cout << numerosDecimales[1] << endl;
    
    
    //cout << nombre<< endl;
    
    
    nuevoTema("inicialización de un arreglo");
    

    for (int i = 0; i < tamanioArreglo; i++) {
        numeros[i] = 0;
    }
   
    cout << numeros[3] << endl;
    
    cout << numeros[5] << endl;
    
    for (int i = 0; i < tamanioArreglo; i++) {
        cout << "numeros["<< i <<"]: " << numeros[i]<< endl;;
    }
   
    
    
    return 0;
}