#include <iostream>
#include <vector> 
#include <algorithm>

using namespace std;

int main(){


vector<int> numeros_recibidos ;

for(int i = 0; i < 40; i++){
    cout << "ingresa 40 numeros: " << endl;
    int numeros_dados = 0;
    cin >> numeros_dados;
    numeros_recibidos.push_back({numeros_dados}); 
}
    cout << "numero ingresados: " << endl;
    for(int t = 0 ; t < numeros_recibidos.size(); t++){
        cout << numeros_recibidos[t] << " ";
    }

    cout << "\n";
    cout << "\n";

        cout << "Orden inverso:" << endl;
        for (int i = numeros_recibidos.size() -1; i >= 0 ; i--){
            cout << numeros_recibidos[i] << " ";
        }

             cout << "\n";
             cout << "\n";

            sort(numeros_recibidos.begin(), numeros_recibidos.end()); // aqui hice uso de la inclucion de la libreria algorithm, averigue que me ayuda para las cifras iniciales y finales
            cout << "orden ascendente:" << endl;
            for(int t = 0 ; t < numeros_recibidos.size(); t++){
                cout << numeros_recibidos[t] << " ";
            }

    return 0;
}