#include <iostream>

using namespace std;

int main() {
    
    
    int filas;
    int columnas;
    
    int respuesta = 0;
    
    do{   
        cout << "Ingrese el número de filas: " ;
        cin >> filas;

        cout << "Ingrese el número de columnas: " ;
        cin >> columnas;


        for (int i = 0 ; i < filas ; i++){
            for (int j = 0; j < columnas; j++ ) {
                cout << "*";
            }
            cout << endl;
        }

        cout<< "¿Quierés dibujar otro rectángulo? Escribe 1 para si: " ; 
        cin >> respuesta;
    } while (respuesta == 1);
    
    
    
}