#include<iostream>

using namespace std;


void nuevoTema (char tema[]) {
    //std::cout << "========== nuevo tema ==========" << std::endl;
    cout << "========== " << tema <<" ==========" << endl;
}


int main() {

    nuevoTema("variables");
    
    int entoreoConSigno;
    unsigned int numeroSinSigno;
    float temperatura;
    char caracter;
    char nombre[] = "Yahir";
    bool tieneAuto = true;
    
    entoreoConSigno = 2147483649;
    numeroSinSigno = 2147483649;
    temperatura = 21.12;
    caracter = 'A';
    
    
    cout << "entoreoConSigno: " << entoreoConSigno <<endl;
    cout << "numeroSinSigno: " << numeroSinSigno <<endl;
    cout << "temperatura : " << temperatura << endl;
    cout << "caracter: "  << caracter << endl;
    cout << "nombre: "  << nombre << endl;
    cout << "tieneAuto: "  << tieneAuto << endl;

    
    nuevoTema("comparación");
    
    cout<< "3 < 5" << " : " << (3 < 5)  << endl;
    cout<< "3 > 5" << " : " << (3 > 5)  << endl;
    cout<< "3 == 5" << " : " << (3 == 5)  << endl;
    
    cout<< "3 <= 3" << " : " << (3 <= 3)  << endl;
    cout<< "3 >= 4" << " : " << (3 >= 4)  << endl;

    
    
    nuevoTema("comparación");
    
    cout<< "3 < 5" << " : " << (3 < 5)  << endl;
    cout<< "3 > 5" << " : " << (3 > 5)  << endl;
    cout<< "3 == 5" << " : " << (3 == 5)  << endl;
    
    cout<< "3 <= 3" << " : " << (3 <= 3)  << endl;
    cout<< "3 >= 4" << " : " << (3 >= 4)  << endl;
    
    nuevoTema("postincremento");
    
    int d;
    
    d = 3;
    //cout<< "d= " << d <<endl;
    //d = d + 1;
    
    cout<< "d= " << d <<endl;
    cout << "d= " << d++ << endl;
    cout<< "d= " << d <<endl;
    
    
    nuevoTema("pretincremento");
    
    
    cout<< "d= " << d <<endl;
    cout << "d= " << ++d << endl;
    cout<< "d= " << d <<endl;

    
    nuevoTema("instrucciones de control if-else");
    int x;
    
    x = 10;
    
    if (8 < x) {
        cout << "x es mayor a 8" << endl;
        if (x < 16 ) {
            cout << "x es menor a 16" << endl;
        } else {
            cout << "x NO es menor a 16" << endl;
        }
        
        
    } else {
        cout << "NO es mayor a 8" << endl;
    }
    
    nuevoTema("if-else-anidados");

    
    nuevoTema("Instrucciones de control for");
    
    for (int i = 0; i < 20; i++) {
        cout<< "i= " << i << endl;
    }
            

    
    return 0;
}
