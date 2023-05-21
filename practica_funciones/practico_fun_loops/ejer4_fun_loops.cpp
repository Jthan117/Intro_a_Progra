#include <iostream>

using namespace std;

// Function prototypes Here
int juego_bucle(int numero1 = 5);


/**
 * @brief una funcione que recibe un número mientras intenta adivinarlo, la respuesta correcta es 5, Si se adivina el número 5, el programa muestra
correcto . Si el usuario comete un error, el programa muestra adivina el numero:
 * @Input  -un numero entero
 * @Output - mientras sea distinto de 5 se mantendra el bucle, sino pasara la siguiente instruccion, si es correcto "correcto" sino "adivina el numero"
 */

int main() {
  // call functions here
  juego_bucle(1);


  return 0;
}

// Function definitions
int juego_bucle(int numero1){
do {cout << "adivina el numero:" << endl;
    cin >> numero1;}
while (numero1 != 5);

cout << "correcto" << endl;

}