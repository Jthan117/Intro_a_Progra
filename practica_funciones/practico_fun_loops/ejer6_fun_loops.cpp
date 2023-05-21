#include <iostream>

using namespace std;

// Function prototypes Here
int numeros_inv (int numero1 = 0, int numero2 = 0);


/**
 * @brief una funcion que imprima dos números ingresados por el usuario desde el
primero hasta el segundo inclusive,  pero ahora el primer número puede ser mayor que el segundo
 * @Input  -dos numeros enteros
 * @Output - desde el primer hasta el segundo numero(0,5)[0,1,2,3,4,5], pero ahora el primer número puede
 * ser mayor que el segundo asi que se puede
 *  imprimir los números en orden inverso
 */

int main() {
  // call functions here
numeros_inv (0,0);

  return 0;
}

// Function definitions
int numeros_inv (int numero1, int numero2){
cout << "introduce dos numeros: " << endl;
cin >> numero1;
cin >> numero2;

if (numero1 <= numero2){
    for(int i = numero1; i <= numero2; ++i){
        cout << i << endl;
    }
} else if (numero2 <= numero1){
    for(int i = numero2; i <= numero1; ++i){
        cout << i << endl;
    }
}

}