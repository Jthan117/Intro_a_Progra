#include <iostream>
using namespace std;

int main (){
	
	int doc = 0; //declare la variable donde se va guardar el numero de documentos
	
	cin >> doc;
	
	if (doc == 0){									// aqui puse dos condiciones especificas, una donde si es igual igual a 0 muestre que no se encontraron documentos
		cout << "No se encontraron documentos";			
	} else if (doc == 1){									// y aqui otra donde si es igual igual a 1 muestre que se encontró 1 documento en singular
		cout << "Se encontro " << doc <<  " documento";			
	} else if (doc >= 2){									// y ya aqui indique si es mayor o igual a 2 que muestre en plural la cantidad
		cout << "Se encontro " << doc <<  " documentos";	
	}
		

	return 0;
}