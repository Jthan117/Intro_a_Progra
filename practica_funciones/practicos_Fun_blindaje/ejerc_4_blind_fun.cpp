#include <iostream>

using namespace std;

// Function prototypes Here
string robotcito(string name, string status); 

/**
 * @brief una funcion de tipo string que se le puede indicar las instrucciones para jon
 * @Input  - "RC-21\\M2", "El robot \"RC-21M2\" se esta incendiando"
 * @Output - "el robot "RC-21\\M2" tiene un mensaje", "El robot \"RC-21M2\" se esta incendiando"
 */

int main() {
  // call functions here
robotcito("RC-21\\M2", "El robot \"RC-21M2\" se esta incendiando"); 
robotcito("skynet","el robot skynet se murio" );
  return 0; 
}

// Function definitions
string robotcito(string name = "RC-21\\M2",string status = "El robot \"RC-21M2\" se esta incendiando") {
cout << "el robot " << name << " tiene un mensaje" << endl;
cout << status << endl;

		
}