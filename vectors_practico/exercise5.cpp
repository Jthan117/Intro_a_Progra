#include <iostream>
#include <vector>

using namespace std;

int main (){
int valor_matriz = 0;
int size = 4;
vector<vector<int>> matriz(size, vector<int>(size)) ;

cout << "introduce el valor de la matriz 4x4 separado por un espacio" << endl;
for (int i = 0; i < matriz.size(); i++){
    for(int j = 0; j < matriz[i].size(); j++ ){
        cin >> valor_matriz;
        matriz[i][j] = valor_matriz;
    } 
}

cout << "la matriz ingresada es: " << endl;
for (vector<int>& size : matriz){                         // hice uso del range based for. vector<int>& size aqui doy la direccion sobre el vector y el tamano que asigne en size de la 'matriz' y recorra las filas
    for (int i : size){                                         // aqui en int i en i se va almacenar el recorrido del for de esta vez sizee
        cout << i << " ";
    }
    cout << endl;
}

int numero_de_datos;
vector<int> vectorr (numero_de_datos);

numero_de_datos = min(numero_de_datos, 4);

cout << "introduce los datos para el vector" << endl;

for (int i = 0; i < numero_de_datos ; i++){
    cin >> vectorr[i];
}

vector<int> producto (4, 0); //le pongo tamano 4 y lo inicializo en 0

for(int i = 0; i < 4 ; i++){
    for (int k = 0; k < 4 ; k++){
        producto[i] += matriz[i][k] * vectorr[k];
    }
}

cout << "el producto es " << endl;

for(int i = 0; i < 4; i++){
    cout << producto[i] << " ";
}
cout << endl;
    return 0;
}
