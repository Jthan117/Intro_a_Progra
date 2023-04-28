#include <iostream>
using namespace std;

int main (){
	
	int s = 0, k = 0;			// la variable "s" la use para almacenar las entradas del usuario y la "k" para repetir o no el ciclo do while
	
	do{
	
	cout << "bienvenido al Bosque " << endl;
	cout << "con que deseas empezar?\n" << endl;
	cout << "(1) Recolectando bloques" << endl;
	cout << "(4) Recolectando comida" << endl;
	cout << "(7) Explorando el bioma" << endl;

	cin >> s;
	
	if (s==1){
		cout << "Steve ha recolectado suficientes bloques.....que deseas hacer?" << endl;
		cout << "(1) Explorar una cueva" << endl;
		cout << "(2) Construir una casa" << endl;
		cin >> s;
	} if (s==1){
		cout << "Yendo a la cueva, hay valiosos materiales, necesitaras tu pic... oh no esta llena de monstruos!\n";
		cout << "Te han matado\n";	//final4
		cout << "Buen intento (:\n";
		cout << "pista: necesitas una espada\n";
		cout << "Volver al inicio (5), Salir (6)\n";
		cin >> k;
	}  
	
 	// inciso 2

	if (s==2){
		cout << "Construyendo...tu casa esta terminada.... oh no un esqueleto, que haras?\n";
		cout << "(1)Pelear\n";
		cout << "(2)Huir\n";
		cin >> s;
	}if (s==1){
		cout << "Steve esta peleando....falta poco... ahh te mato por que no tenias energia por falta de comida\n";
		cout << "Volver al inicio (5), Salir (6)\n";
		cin >> k;
	} if (s==2){
		cout << "Huyendo has entrado a la cueva mas cercana.... oh no esta llena de monstruos\n";
		cout << "Te han matado\n";
		cout << "Buen intento (:\n";//final3
		cout << "Volver al inicio (5), Salir (6)\n";
		cin >> k;
	}

	
	
	if (s==4){
		cout << "Recolectando...has recolectado suficiente carne de cerdo, solo habian cerdos, que deseas hacer?\n";
		cout << "(1)Pelear con el esqueleto\n";
		cout << "(2)Explorar mas\n";
		cin >> s;
	} if (s==1){
		cout << "Steve esta peleando...falta poco... bien hecho! has matado al esqueleto" << endl;
		cout << "Espera que es eso, te ha dejado una espada, que buena onda\n";
		cout << "(1) Ir a la cueva\n";
		cout << "(2) Volver donde empezaste\n";
		cin >> s;
		
	} 	for (int i = s; i == 2; ++i){
		cout << "bienvenido al Bosque " << endl;
		cout << "con que deseas empezar?\n" << endl;
		cout << "(1) Recolectando bloques" << endl;
		cout << "(4) Recolectando comida" << endl;
		cout << "(7) Explorando el bioma" << endl;
		if (i==2){
			break;
		}
		}
		
	

	// fase 3
	if (s==1){
		cout << "Yendo a la cueva... Steve ha acabado con los monstruos gracias a la espada y la comida" << endl;
		cout << "Que es eso que brilla? son... DIAMANTES";
		cout << "Buen intento (:\n";//final2
	} if (s==2){
		cout << "Yendo a explorar..... que es eso alla a los lejos..es.... una aldea?" << endl;
		cout << "Sii es una aldea, Steve encontro a sus amigos y se quedara aqui.";
		cout << "Buen intento (:\n"; //final1
	}
	
	if (s==7){
		cout << "Explorando... que es eso de alla... es.. una aldea?";
		cout << "Steve ha encontrado una aldea con sus amigos\n";
		cout << "Deseas quedarte aqui o volver a explorar\n";
		cout << "(1) Quedarte en la aldea\n";
		cout << "(5) Volver a explorar\n";
		cin >> k;
	}	
	
}	while ( k==5);







return 0;
}