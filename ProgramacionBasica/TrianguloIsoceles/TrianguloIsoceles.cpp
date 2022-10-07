#include <iostream>

using namespace std;

int main() {

    int filas;
    cout<< "Escribe las filas";
    
    cin >> filas;
    
    cout <<  "El valor introducido fue: " << filas << endl;
    
    for (int i = 0; i < filas; i++) {
        
        
        cout << i;
        for (int k = 0; k < filas  -i -1 ; k++){
            cout << ' ';
        }
        
        for (int columnas = 0; columnas < i * 2 +1 ; columnas++){
            cout << '*';
        }
        cout << endl;        
    }
    
    
    
    
    

return 0;    
}