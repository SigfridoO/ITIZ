#include <iostream>
using namespace std;

class Circulo {
    public:
        Circulo(){
            radio = 0;
        }
        Circulo(float r) {
            radio = r;
        }
        void establecerRadio(float r) {
            radio = r;
        }
        
        void imprimir(){
            cout << "El radio es: " << radio <<
                    "\nEl area es: "<< 3.1415 * radio * radio << 
                    "\nEl perimetro es: " << 2 * 3.14159 * radio << "\n" << endl;
        }
    private:
        float radio;
};


int main() {
   
    //Circulo circulo1 = Circulo();
    Circulo circulo1 = Circulo(9.36);
    circulo1.imprimir();
    circulo1.establecerRadio(40);
    circulo1.imprimir();
    
    Circulo circulo2 = Circulo();
    circulo2.imprimir();
    
    int tamanio =  6;
    const char *nombres[tamanio] = {"juan", "pedro", "maria", "anabel", "ramiro", "messi"};
    
    return 0;
}