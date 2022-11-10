#include<iostream>

#include<fstream>
using namespace std;

class ManejoDeArchivos {
    public:
        ManejoDeArchivos(){
            
        }
        
        void escribirDatos() {
            ofstream archivo ("alumnos.txt", ios::out);
            if (!archivo) {
                cout << "El archivo no se pudo abrir" << endl;
            }
            cout << "Ingresa los datos" << endl;

            do {
                 cin >> numero >> nombre >> altura;
                 cout << "Los valores introducidos son:\n";
                 cout << "numero: " << numero << ", " <<
                         "nombre: " << nombre << ", " <<
                         "altura: " << altura;

                 cout << "\nEscribiendo en el archivo:";
                 archivo << numero << " " <<
                         nombre << " " <<
                         altura << endl;

                 cout << "?";
            } while(numero != 0);
    
        }
        
        void leerDatos() {
            ifstream archivo ("alumnos.txt", ios::in);
            if (!archivo) {
                cout << "El archivo no se pudo abrir" << endl;
            }
            
            while(archivo >> numero >> nombre >> altura){
                cout << "\n =======  \n";
                cout << "numero: " << numero << ", " <<
                        "nombre: " << nombre << ", " <<
                        "altura: " << altura;
            }
            

        }
    
    private:

        int numero;
        char nombre[30];
        float altura;
};


int main () {
   cout << "Bienvenido"  << endl;
   
   ManejoDeArchivos programa =  ManejoDeArchivos();
   //programa.escribirDatos();
   programa.leerDatos();

    return 0;
}