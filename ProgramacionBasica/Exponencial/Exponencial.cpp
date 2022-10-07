#include<iostream>

using namespace std;



int main() {
    
    int x;
    int n;
    float resultado = 0;
    
    cout << "Escriba el número del cual se calculará la exponencia: " ;
    cin >> x;
    
    
    cout << "Escriba de terminos: " ;
    cin >> n;
    
    
    float numerador = 0;
    float denominador = 1;
    
    
    
    for (int i = 0; i < n+1; i++) {
        
        
        
        
        
        
        
        
        
        
        cout << i << ": ";
//        numerador = 0;
//        denominador = 1;
        numerador = 1;
        for (int j = 2; j < i+1; j++) {
            numerador = numerador * x;
        }
        cout << "num: " << numerador;
//        
        // factorial
        denominador = 1;
        for (int j = 1; j < i + 1; j++) {
            denominador =  denominador * j;
        }
        cout << " n! : " << denominador << endl;
        resultado = resultado +  numerador/denominador;
//                
//                
//                
//                
//        
//        
//        
//        cout << endl;
//    }
    }
    
    cout << resultado << endl;

    return 0;
}

