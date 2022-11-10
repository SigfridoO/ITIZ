#include<iostream>

using namespace std;

int main () {
    
    float numero = 60.8;
    float *ptr;
    
    ptr = &numero;
    
    cout << "numero: " << numero << endl ;
    cout << "ptr: " << ptr << endl;
    
    cout << "&numero: " << &numero << endl ;
    cout << "*ptr: " << *ptr << endl ;
    
    return 0;
}