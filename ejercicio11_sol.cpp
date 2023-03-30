#include <iostream>

using namespace std;

int main(){
	
	int resp = 11235813, resp_U = 0;
	
	cout << "introduce el numero del collar para buscar a tu perro: "; cin >> resp_U;
	
	if (resp_U == resp){
		cout << "Se encontro Fibonacci";
	} else {
		cout << "Esto no es de fibonaci";
	}

	return 0;
}