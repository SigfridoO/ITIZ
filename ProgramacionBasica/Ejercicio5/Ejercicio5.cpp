#include<iostream>

using namespace std;


void nuevoTema (char tema[]) {
    //std::cout << "========== nuevo tema ==========" << std::endl;
    cout << "========== " << tema <<" ==========" << endl;
}

int main() {
   
    
    nuevoTema("for");
    
    for (int cuenta = 0; cuenta < 10 ; cuenta++) {

 
        cout<< "cuenta: " << cuenta << endl;
    }
    
    nuevoTema("break");
    
    for (int cuenta = 0; cuenta < 10 ; cuenta++) {

        
        if (cuenta == 4){
            break;
        }
        
        cout<< "cuenta: " << cuenta << endl;
    }
    
    
    nuevoTema("continue");
    
    for (int cuenta = 0; cuenta < 10 ; cuenta++) {

        
        if (cuenta == 4){
            continue;
        }
        
        cout<< "cuenta: " << cuenta << endl;
    }
    
    nuevoTema("Operadores lógicos - OR  ||");
    int numeroA;
    
    numeroA= 5;
    
    if (numeroA <= 50) {
        cout<< "El numero es menor a 50" <<endl;
    }
    
    if ( (numeroA < 50) && (numeroA >30)   ) {
        cout<< "El numero es menor a 50 y mayor a 30" <<endl;
    }
    
    if ( (numeroA > 50) || (numeroA < 10)   ) {
        cout<< "El numero es menor a 10 o mayor a 50" <<endl;
    }
    
    
    nuevoTema("switch");
    
    int opcion;
    
    opcion = 100;
    
    switch(opcion) {
        case 0:
            
            cout << "Se eligió la opción 0" << endl;
            break;
            
        case 1:
            
            cout << "Se eligió la opción 1" << endl;
            break;
            
        case 2:
            cout << "Se eligió la opción 2" << endl;
            break;
            
        default:
            cout << "Se eligió la opción default" << endl;
            break;
    }
    
    
    
    
    
    
    return 0;
}