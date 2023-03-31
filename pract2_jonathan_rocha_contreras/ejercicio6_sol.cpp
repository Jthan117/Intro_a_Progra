#include <iostream>

using namespace std;

int main(){
	
	string nombre, apellido;
	
	cout << "introduce tu nombre: "; cin >> nombre;
	cout << "introduce tu apellido: "; cin >> apellido;
	
	string datos = apellido + ", " + nombre;
	
	cout << datos << endl;
	

	
	return 0;
}  