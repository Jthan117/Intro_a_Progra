#include <iostream>

using namespace std;

// Function prototypes Here
double num_dobles(double num1, double num2);


/**
 * @brief la funcion lee dos numeros dobles y muestra el cociente
 * @Input  - dos numeros dobles
 * @Output - el cociente
 */

int main() {
  // call functions here
num_dobles(5, 0);
  return 0;
}

// Function definitions
double num_dobles(double num1, double num2) {
cout << "introduce un numero:" << endl;
cin >> num1;
cout << "introduce otro numero:" << endl;
cin >> num2;
double resultado = num1 / num2;
cout << "el cociente es: "<< resultado << endl; 
}