#include <iostream>
#include <vector>

using namespace std;

int main (){
    int valores_recibidos = 0;
    int valor_matriz_usuario = 0;

    vector<int> numeros_variables ;

        cout << "introduce los valores de la matriz" << endl;
        cout << "si ya pusiste los valores que querias y quieres salir " << endl;
        cout << "escribe -1 " << endl;
        cin >> valores_recibidos;
        
        while ( cin >> valores_recibidos){
            numeros_variables.push_back(valores_recibidos);
            if(valores_recibidos == -1){
                break;
            }
        }

       cout << "ingresa un valor de tu matriz" << endl;
       cin >> valor_matriz_usuario;

        bool valor_ingresado = false;
        for(int i = 0; i < numeros_variables.size(); i++){
            if (valor_matriz_usuario == numeros_variables[i]){
                valor_matriz_usuario = i;
                cout << "el valor se encuentra en la posicion " << valor_matriz_usuario << endl;
                valor_ingresado = true;
                break;
            }
        
        }

        if (valor_ingresado == false){
            cout << "no se encontro el valor" << endl;
        }

    return 0;
}