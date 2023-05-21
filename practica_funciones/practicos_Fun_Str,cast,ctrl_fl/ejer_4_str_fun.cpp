#include <iostream>

using namespace std;

// Function prototypes Here
string name_surname(string name, string surname);

// es del ejercicio 6
/**
 * @brief la funcion recibe nombre y apellido y devuelve apellido nombre
 * @Input  - nombre, apellido
 * @Output - apellido, nombre
 */

int main() {
  // call functions here
name_surname("jonathan", "rocha");
  return 0;
}

// Function definitions
string name_surname(string name, string surname) {
cout << "introduce tu nombre: " << endl;
cin >> name;
cout << "introduce tu apellido: " << endl;
cin >> surname;
cout << surname << ", "<< name << endl;  
}