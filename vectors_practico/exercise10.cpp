#include <iostream>
#include <vector> 

using namespace std;

int main(){

vector<int> alturas ;
vector<int> alturas_esperadas ;

int cantidad_alumnos = 0;
int altura_alumnos = 0;
int altura_alumnos_esperadas = 0;
int aux = 0;

cout << "introduce la cantidad de alumnos" << endl;
cin >> cantidad_alumnos;

cout << "introduce las alturas" << endl;

for (int i = 0; i < cantidad_alumnos; i++){
    cin >> altura_alumnos;
alturas.push_back(altura_alumnos);
}

cout << "introduce las alturas esperadas" << endl;
for (int a = 0; a < cantidad_alumnos; a++){
    cin >> altura_alumnos_esperadas;
alturas_esperadas.push_back(altura_alumnos_esperadas);
}

for(int p = 0; p < alturas.size(); p++){                // aqui probe el ordenamiento por el metodo burbuja
    for(int k = 0; k < alturas.size(); k++){
        if (alturas[k] > alturas[k+1]){
            aux = alturas[k];
            alturas[k] = alturas[k+1];
            alturas[k+1] = aux;
        }
    }

int indice = 0;
for(int i = 0; i < alturas.size(); i++ ){
    if (alturas[i] != altura_alumnos_esperadas[a]){
        cout << i << " ";
    }
}
}
    return 0;
}

// intente como funcion, sin funcion y no pude :(