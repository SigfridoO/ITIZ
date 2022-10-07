#include <iostream>

using namespace std;


int main () {

    int numeroInicial;
    int numeroFinal;
    cout << "Evaluación de la función y = 3*x*x+6x-2" << endl;
    
    cout << "Introduce el valor inicial: ";
    cin >> numeroInicial;
    
    cout << "Introduce el valor final: ";
    cin >> numeroFinal;  
   
    
    for (int x = numeroInicial;  x <= numeroFinal; x++) {
        cout << "f(" << x <<"): " << 3*x*x + 6*x -2  << "\n";
    }
    
    return 0;
}

