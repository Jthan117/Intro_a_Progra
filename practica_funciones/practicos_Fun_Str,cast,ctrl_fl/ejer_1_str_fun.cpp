#include <iostream>

using namespace std;

// Function prototypes Here
double num_dobles(double num1, double num2);


/**
 * @brief una funcione que recibe numeros dobles pero devuelve pero devuelve la parte entera de la suma
 * @Input  -dos numeros dobles
 * @Output -la parte entera de la suma
 */

int main() {
  // call functions here
num_dobles(3.242,4.21);
  return 0;
}

// Function definitions
double num_dobles(double num1, double num2) {
cout << "introduce un numero:" << endl;
cin >> num1;
cout << "introduce otro numero:" << endl;
cin >> num2;
int resultado = num1 + num2;
cout << resultado << endl; 
}