#include <iostream>

using namespace std;

// Function prototypes Here
int ancho_largo_rect(int width, int height);


/**
 * @brief la funcion puede calcular el area de un rectangulo
 * @Input  - dos numeros enteros
 * @Output - el area 
 */

int main() {
  // call functions here
ancho_largo_rect(5, 5);
  return 0;
}

// Function definitions
int ancho_largo_rect(int width, int height) {
cout << "ingrese el ancho y alto del rectangulo:" << endl;
cin >> width;
cin >> height;
int resultado = width * height;
cout << "el area del rectangulo es: "<< resultado << endl; 
}