#include <iostream>
using namespace std;

int main (){
	
	double num1 = 0, num2 = 0, num3 = 0, resu = 0;
	
	cout << "introduce tres numeros: "; cin >> num1; cin >> num2; cin >> num3;
	
	resu = num1 + num2;
	
	if(resu == num3){
		cout << " ";
		
	} if (resu != num3){
		cout << "error, la suma de " << num1 << " y " << num2 << " es " << resu; 
	}
	


	return 0;
}
