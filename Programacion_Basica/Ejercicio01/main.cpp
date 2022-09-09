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
    

    return 0;
}
