#include <iostream>

using namespace std;

// Function prototypes Here
double comparador_resultados(double numero1 = 0, double numero2 = 0, double numero3 = 0, double resultado = 0);


/**
 * @brief una funcione que recibe numeros dobles pero devuelve pero devuelve la parte entera de la suma
 * @Input  -dos numeros dobles
 * @Output -la parte entera de la suma
 */

int main() {
  // call functions here

comparador_resultados(5,5,10);
  return 0;
}

// Function definitions
double comparador_resultados(double numero1, double numero2, double numero3, double resultado) {
cout << "introduce tres numeros: ";
cin >> numero1;
cin >> numero2;
cin >> numero3;
resultado = numero1 + numero2;

if (resultado == numero3){
  cout << " " << endl; 
} if (resultado != numero3){
  cout << "error la suma de " << numero1 << " y " << numero2 << " es " << resultado << endl;
}


}