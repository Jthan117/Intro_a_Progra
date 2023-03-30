#include <iostream>

using namespace std;

int main(){
	int age = 0, yexp = 0;
	
	cout << "introduce tu edad: "; cin >> age;
	cout << "introduce tu tiempo de experiencia: "; cin >> yexp;
	
	if (age < 18){
		cout << "No puedes postular, gracias.";
	} else if (yexp < 3 ){
		cout << "Puedes postular a coordinador de proyecto";
	} else if (yexp >= 3 and yexp < 5 ){
		cout << "Puedes postular a director de proyecto";
	} else{
		cout << "Puedes postular a director senior";
	} 
	
	
	
	
	

	
	return 0;
}  