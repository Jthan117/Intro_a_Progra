#include <iostream>

using namespace std;

// Function prototypes Here
string tareas(string a, string b); 

/**
 * @brief una funcion de tipo string que se le puede indicar las instrucciones para jon
 * @Input  - jon, levantar
 * @Output - se solicita a jon para levantar el auto
 */

int main() {
  // call functions here
tareas("jon","levantar");  
  return 0; 
}

// Function definitions
string tareas(string a = "jon",string b = "levantar") {
cout << "se solicita a " << a << " para " << b << " el auto" << endl;
		
}