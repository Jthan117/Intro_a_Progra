#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int num1 = 0, num2 = 0, sum = 0;
	
	cout << "introduzca dos numeros. no negativos y separados por un espacio: "; cin >> num1 >> num2;
	
	sum = num1 + num2;
	
	int digitos = to_string(sum).lenght(); 
	
	int resu = sum * digitos;
	
	cout << "el resultado es: " << resu << endl;
	

	
	return 0;
}