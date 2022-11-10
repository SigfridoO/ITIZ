#include<iostream>
#include<string>

using namespace std;

struct persona {
    int edad;
    float altura;
    char *nombre;
};




int main () {
    
    struct persona juan;

    juan.edad = 23;
    juan.altura = 1.7;
    juan.nombre = "Juan";
    
    struct persona pedro;
    
    pedro.nombre = "Pedro";
    pedro.edad = 46;
    pedro.altura = 1.8;
    
    cout << "juan.edad: " <<juan.edad << endl;
    cout << "juan.altura: " <<juan.altura  <<endl ;
    cout << "juan.nombre: " <<juan.nombre << endl ;
    
    cout << "=====================" << endl;
    
    cout << "pedro.edad: " <<pedro.edad << endl;
    cout << "pedro.altura: " <<pedro.altura  <<endl ;
    cout << "pedro.nombre: " <<pedro.nombre << endl ; 
    
    struct persona invitados[20];
    
    invitados[0].nombre="Noe";
    invitados[0].altura=1.69;
    invitados[0].edad=23;
   
    invitados[1].nombre="Laura";
    invitados[1].altura=1.59;
    invitados[1].edad=27;
    
    cout << "=====================" << endl;
    for (int i = 0; i < 2; i++){
        cout << "invitados["<<i<<"].edad: " <<invitados[i].edad << endl;
        cout << "invitados["<< i<<"].altura: " <<invitados[i].altura  <<endl ;
        cout << "invitados["<< i<<"].nombre: " <<invitados[i].nombre << endl ; 
        cout << endl;
    }
    
    
    struct persona *fiesta;
    
    
    fiesta = invitados;
    
    cout << "=====================" << endl;    
    cout<< "El nombre del primer invitado de la fiesta es" <<fiesta->nombre << endl;
    
    //const char *texto = "Esta es una cadena de texto";
    
    //cout<< "Ejemplo de una estructura\n";

    //string texto ("Esta es una línea de texto");
    
    //texto = "Esta es una línea de texto";
    
    //cout << "EL TEXTO ALMACENADO ES: " << texto;
    
    return 0;
}