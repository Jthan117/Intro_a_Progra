#include <iostream>
#include <string>

using namespace std;

// Function prototypes Here
int numeros(int numero1);

/**
 * @brief una funcion que se le da un número. Se quiere encontrar si el número dado es un palíndromo o no.
 * @Input  -un numero entero
 * @Output - si es palindromo imprime "es un palindromo", sino no es, imprime "no es un palindromo"
 */


int main() {
  // call functions here
numeros (212);
  return 0;
}

// Function definitions
int numeros(int numero1){
  int i;
    string entrada, entrada_reves;
    
    cout << "Ingrese el numero a evaluar: "; 
    cin >> numero1;
    entrada = to_string(numero1); 

    for (i = entrada.size() - 1; i >= 0; --i){ 
        entrada_reves += entrada[i];
    }
    if (entrada == entrada_reves){ 
        cout << "Es un palindromo!!!" << endl;
    }
    else{ 
        cout << "No es un palindromo" << endl;
    }




}

