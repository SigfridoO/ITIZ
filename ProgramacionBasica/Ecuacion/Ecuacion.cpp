#include <iostream>

using namespace std;

int main () {
    
    int inicial;
    int final;
    
    cout << "Evaluación de la función y = 3*x^2 + 6*x - 2" << endl;
    cout << "Introduce el valor inicial: " ;
    cin >> inicial;    
    cout << "Introduce el valor final: " ;
    cin >> final;    
    
    for (int x = inicial; x <= final; x++) {
        cout << "f(" << x << ") = "<< 3*x*x+2*x-2 << endl;
    }
    
    
    return 0;
}