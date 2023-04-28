#include <iostream>
using namespace std;

int main (){
	    long long int a, resultado = 1; 
    
    do{
        cout << "Ingrese el numero del que quiera calcular su factorial: "<< endl;
        cin >> a;
        if (a > 20){
            cout << "El numero es muy grande, por favor digite otra vez un numero." << endl;
        }
        if (a < 0){
            cout << "No se aceptan numeros negativos" << endl;
        }
    } while (a < 0 || a > 21);
    
    for (int i = 0; i < a; ++i){ 
            resultado *= (a-i);
    }
    cout << "El factorial de "<< a <<" es "<<resultado << endl;
    return 0; 


	return 0;
}