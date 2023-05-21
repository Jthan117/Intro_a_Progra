#include <iostream>


using namespace std;

// Function prototypes Here
int numeros(int numero1 = 0 ,int numero2 = 0);



// es del ejercicio 9
/**
 * @brief una funcion de int que recibe dos numeros enteros no negativos separados por un espacio donde se calcula
 * la suma S y se genera el producto S por el numeros de digitos  en la notacion decimal S
 * @Input  - dos numeros enteros
 * @Output - la suma multiplicada
 */

int main() {
  // call functions here
numeros(1,1);

  return 0;
}

// Function definitions
int numeros(int numero1,int numero2){
cout << "introduzca dos numeros, no negativos y separados por un espacio: ";
cin >> numero1 >> numero2;

int suma = numero1 + numero2;

int digitos = to_string(suma).length();
int resultado = digitos * suma;

cout << "el resultado es: " << resultado << endl;
}