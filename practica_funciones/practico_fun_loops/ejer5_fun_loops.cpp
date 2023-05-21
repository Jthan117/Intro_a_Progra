#include <iostream>

using namespace std;

// Function prototypes Here
int numeros (int numero1 = 0, int numero2 = 0);



/**
 * @brief una funcion que imprima dos números ingresados por el usuario desde el
primero hasta el segundo inclusive
 * @Input  -dos numeros enteros
 * @Output - desde el primer hasta el segundo numero(0,5)[0,1,2,3,4,5]
 */

int main() {
  // call functions here
  numeros(1,1);



  return 0;
}

// Function definitions
int numeros (int numero1, int numero2){
cout << "introduce dos numeros positivos y mayores o iguales a 0:" << endl;
cin >> numero1;
cin >> numero2;
if ((numero1 >= 0) && (numero2 >= 0) && (numero1 <= numero2)){
    for(int i = numero1; i <= numero2; ++i){
        cout << i << endl;
    }
}


}