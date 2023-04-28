#include <iostream>
using namespace std;

int main (){

 	int a = 5;
 	
 	int b;
 	
 	do { cout << "Guess the number: "s << endl;
 	cin >> b;
 	
 	} while (b != a);				//tenia que llevar el != diferente de a
 	
 	cout << "You are right!"s << endl;
	
	return 0;
}