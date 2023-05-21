#include <iostream>

using namespace std;

// Function prototypes Here
string lista_de_libros(string libro1, string libro2, string libro3);


// es del ejercicio 7
/**
 * @brief la funcion recibe el nombre de tres libros y los devuelve en orden inverso
 * @Input  - libro1, libro2, libro3
 * @Output - libro3, libro2, libro1
 */

int main() {
  // call functions here
lista_de_libros(" ", " ", " ");

  return 0;
}

// Function definitions
string lista_de_libros(string libro1, string libro2, string libro3) {       
cout << "introduce el nombre de un libro: " << endl;        
getline(cin,libro1);
cout << "introduce otro: " << endl;
getline(cin,libro2);
cout << "introduce otro mas: " << endl;
getline(cin,libro3);
cout << libro3 << endl;
cout << libro2 << endl;
cout << libro1 << "\n" << endl;
}
/*
Moby Dick
The Tiger Who Came to Tea
Harry Potter and the Deathly Hallows 
*/