#include <iostream>
#include <string>

using namespace std;

class Persona {
public:
    
    // Constructores
    Persona() {
        nombre = "";
    }
    Persona(string n, int e) {
        nombre = n;
        edad = e;
    }
    
    
    void saluda() {
        cout << "Hola mi nombre es: " << nombre <<
                " tengo " << edad << " años." << 
                endl;
    }
    
    // Funciones Setter y Getter
    void establecerNombre(string n){
        nombre = n;
    }
    
    string obtenerNombre () {
        return nombre;
    }
    void establecerEdad (int e) {
        edad = e;
    }
    int obtenerEdad() {
        return edad;
    }
    
    

private:
    string nombre = "";   
    int edad = 0;
    string profesion = "";
    string direccion = "";
};











int main () {
    
    Persona juan = Persona("Juan", 23);
    //juan.establecerNombre("Juan");
    //juan.establecerEdad(23);
    juan.saluda();
    
    Persona  andrea = Persona();
    andrea.establecerNombre("Andrea");
    andrea.establecerEdad(35);
    andrea.saluda();
        
    return 0;
}