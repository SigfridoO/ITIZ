#include<iostream>
#include<stdexcept>



using namespace std;

int main () {
    
    int numero1 = 5;
    int numero2 = 0;
    
    float resultado;
    
    
    try {
        resultado = static_cast<float> ( numero1) / numero2;
        throw runtime_error("Error");
    } catch (runtime_error &e) {
        cout << "Ha ocurrido una exeption\n";
        cout << e.what()<< "\n";
    }
    
    
    cout << "El resultado es: " << resultado << "\n";
    
    
    
    return 0;
}