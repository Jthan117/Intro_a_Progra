#include <iostream>
using namespace std;

int main (){
	
	//int col1, col2, col3, col4;
	string col1 = "red",col2 = "blue",col3 = "green",col4 = " ";
	
	
	cout << "introduzca el color de las 3 casas: ";
	 cin >> col1 >> col2 >> col3 >> col4;
	
	if (col4 == col1 ){	
	cout << "enter the house " << col1;
	} 
	else if (col4 == col1){
		cout << "enter the house";
	} 
	else if(col4 == col2){
		cout << "enter the house" << col2;
	} 
	else if (col4 == col3){
		cout << "enter the house"; 
	}
	else {
		cout << "seek somewhere else";
	}	
		

	return 0;
}