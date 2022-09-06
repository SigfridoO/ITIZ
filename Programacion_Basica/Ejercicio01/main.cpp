#include<iostream>

using namespace std;


void nuevoTema (char tema[]) {
    //std::cout << "========== nuevo tema ==========" << std::endl;
    cout << "========== " << tema <<" ==========" << endl;
}


int main() {
    nuevoTema("variables");
    
    int edad;
    float temperatura;
    char caracter;
    char nombre[] = "Yahir";
    
    edad = 21.5;
    temperatura = 21.12;
    caracter = 'A';
    
    
    cout << "edad: " << edad <<endl;
    cout << "temperatura : " << temperatura << endl;
    cout << "caracter: "  << caracter << endl;
    cout << "nombre: "  << nombre << endl;
    

    return 0;
}
