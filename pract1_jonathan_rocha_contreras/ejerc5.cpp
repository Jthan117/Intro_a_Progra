#include <iostream>
using namespace std;

int main (){
	
	// solucion al ejercicio 5
	
	string x = "sombrero";
	string y = "cacerola";
	
	
	
	x = y;
	
	cout << x << endl;
	cout << y << endl;
	
	y = x;
	
	cout << x << endl;
	cout << y << endl;
	
	
	
	x = "sarten";
	y = "sombrero";

    string aux = x;
    x = y;
    y = aux;
    

	 
	 
	cout << x << endl;
	cout << y << endl;
	
	
	
	
	
	

	

	return 0;
}