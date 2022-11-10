#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    int numero = 5;
    char *texto1;

    
    cout << "Imprimendo con formato"<< endl;
    cout << setw(5) << numero;
    
    cout << "Escribiendo una linea de texto con espacios"<<endl;
    cin.getline(texto1, 80); 
    cout << '\n' << texto1;
       
    
    return 0;
}