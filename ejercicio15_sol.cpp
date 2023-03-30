#include <iostream>

using namespace std;

int main(){
		char let;
	
	cout << "ingrese una letra: "; cin >> let;
	
	if (let >= 65 and let <= 90){                   // aqui utilize la tabla de valores que tiene cada letra en maysuculas y minusculas
		cout << "El caracter esta en mayusculas";   /* por ejemplo del 65 al 90 son todas las letras mayusculas y del 97 al 122 minusculas */
	} else if (let >= 97 and let <= 122){
		cout << "El caracter esta en minusculas";
	}else { 
		cout << "No es un caracter";
	}
	
	
	

	
	return 0;
}  