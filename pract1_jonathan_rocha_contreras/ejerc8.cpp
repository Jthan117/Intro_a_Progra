#include <iostream>
using namespace std;

int main (){
	
	// solucion al ejercicio 8
	
	double wood_balance = 1000;
	double w1 = 5, w2 = 5, w3 = 4;   // modifiqué los valores para ver que pasaba
	double d1 = 1, d2 = 1, d3 = 1;
	double h1 = 1, h2 = 1, h3 = 1;
	
	// primera caja
	
	double ardca1 = w1 * w2 + 2 * (w1 * h1 + d1 * h1);
	wood_balance -= ardca1;
	cout << "madera contrapachada restante: " << wood_balance << endl; 
	
	// segunda caja 
	
	double ardca2 = w2 * w2 + 2 * (w2 * h2 + d2 * h2);
	wood_balance -= ardca2;
	cout << "madera contrapachada restante: " << wood_balance << endl; 
	
	// tercera caja 
	
	double ardca3 = w3 * d3 + 2 *(w3 * h3 + d3* h3);
	wood_balance -= ardca3;
	cout << "madera contrapachada restante: " << wood_balance << endl;
	
	
	
	
	

	return 0;
}