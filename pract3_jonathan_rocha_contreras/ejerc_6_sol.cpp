#include <iostream>
using namespace std;

int main (){
	
	int a = 0, b = 0;
	
	cout << "introduce dos numeros positivos y mayores o iguales a 0: ";
	cin >> a;
	cin >> b;
	
	if(a <= b){
		
		for(int i = a; i <= b; ++i){
			
			cout << i << endl;
		}
	}	else if (a >= b){
		for(int i = a; i >= b; --b)
			cout << i << endl;
	}	
	

	
	return 0;
}