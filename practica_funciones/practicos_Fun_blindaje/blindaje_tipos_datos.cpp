#include <iostream>

using namespace std;

// Function prototypes Here
void dibujo_cara(); 

/**
 * @brief una funcion void que solo muestra el dibujo de una cara de un robot
 * @Input  - no tiene, es un void
 * @Output - no tiene, es un void
 */

int main() {
  // call functions here
dibujo_cara();  

  return 0; 
}

// Function definitions
void dibujo_cara() {
cout << "_____________" << endl;
	cout << "|  /\"\"\"\"\"\\  | " << endl;
	cout << "| /       \\ | " << endl;
	cout << "| |  0 0  | | " << endl;
	cout << "| |   v   | | " << endl;
	cout << "| \\  ___  / | " << endl;
	cout << "|  \\_____/  | " << endl;
	cout << "------------- " << endl;
		
}
