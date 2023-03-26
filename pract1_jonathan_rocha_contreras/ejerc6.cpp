#include <iostream>
#include <locale.h>
using namespace std;


int main (){
	
	setlocale(LC_CTYPE, "Spanish");
	
	// solucion al ejercicio 6
	
	string  name;
	int  age;
	int bhy;
	int bhz = 0;
	
	 
	cout << "nombre: ";
	cin >> name;
	
	cout << "edad a saber: ";
	cin >> age;
	
	cout << "BY: ";
	cin >> bhy;
	
	bhz = age + bhy ;
	
	cout << name << " cumplirá " << age << " años en " << bhz; // no pude poner esto con el locale.h para que me reconozca el español
	
	
	

	return 0;
}