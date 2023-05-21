#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

// Function prototypes Here
void palabras();


// es del ejercicio 8
/**
 * @brief una funcion void que solo muestra el primer caracter de cada palabra 
 * @Input  - no tiene, es un void
 * @Output - no tiene, es un void
 */

int main() {
  // call functions here
palabras();

  return 0;
}

// Function definitions
void palabras() {
string apple = "apple";
string banana = "banana";
string cat = "cat";
string dog = "dog"; 
string eleven = "eleven";       
char caracter1 = apple[0];
char caracter2 = banana[0];
char caracter3 = cat[0];
char caracter4 = dog[0];
char caracter5 = eleven[0];
cout << caracter1 << caracter2 << caracter3 << caracter4 << caracter5; 
}