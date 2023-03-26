#include <iostream>
using namespace std;

int main (){
	
	// solucion al ejercicio 7
	
	int x = 0, y = 0, z = 0, t = 0;
	
	cin >> x;
	y = x + 1; z = x - 1; t = x + x;
	
	if (x == 100){
		cout << "El numero " << x << " esta entre " << y << " y " << z << "." << endl;
		cout << "Doblado " << x << " es " << t;
		
		} else if (x == 55){
			y = x + 1; z = x - 1; t = x + x;
			cout << "El numero " << x << " esta entre " << y << " y " << z << "." << endl;
		cout << "Doblado " << x << " es " << t;
		}

	
	
	

		
	return 0;
}