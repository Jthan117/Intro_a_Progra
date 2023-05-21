#include <iostream>

using namespace std;

// Function prototypes Here
int cantidad_documentos(int numero1 = 0) ;

/**
 * @brief una funcion que recibe la cantidad de documentos
 * @Input  - 1 numero
 * @Output - el numero y la frase documetnos encontrados
 */

int main() {
  // call functions here
cantidad_documentos(1);  

  return 0; 
}

// Function definitions
int cantidad_documentos(int numero1){
cin >> numero1;
cout << numero1 << " documentos encontrados" << endl;

}