#include <iostream>

using namespace std;

int main(){
	string lib1, lib2, lib3;
	
	lib1 = " ";
	lib2 = " ";
	lib3 = " ";
	
	
	cout << "introduce el nombre de un libro: "; 
	getline (cin, lib1);  // uso el getline para obtener para usar como parametro el cin en la funcion get
	
	cout << "otro mas: "; 
	getline (cin, lib2);
	
	cout << "uno mas: "; 
	getline (cin, lib3);
	
	
	cout << " " << endl; 
	
	cout << lib1 << endl;
	cout << lib2 << endl;
	cout << lib3 << endl;
	
	
	cout << " " << endl; 
	
	cout << lib3 << endl;
	cout << lib2 << endl;
	cout << lib1 << endl;
	
	
	

	
	
	

	

	
	return 0;
}  