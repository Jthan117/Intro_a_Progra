#include <iostream>
using namespace std;

int main (){
	double nar1 = 0, nar2 = 0, dif = 0;
	
	cout << "introduce las dos mitades de la naranja: "; cin >> nar1; cin >> nar2;
	
	if (nar1 == nar2){
		cout << "La naranja se corta en partes iguales." << endl;
	} else if (nar1 > nar2){
	dif = nar1 - nar2;
	cout << "Cortar " << dif << " de la primera parte";
	} 
	
	if (nar2 > nar1)
	{dif = nar2 - nar1;
		cout << "Cortar " << dif << " de la primera parte";
	}


	


	return 0;
}