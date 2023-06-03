#include <iostream>
#include <vector>

using namespace std;

int main (){
int n;
int suma = 0;

cout << "introduce el numero de dias" << endl;
cin >> n ;

vector<int> valor_de_n (n);

cout << "ingresa las temperaturas" << endl;
for (int i = 0; i < n; i++){
    cin >> valor_de_n[i];
    suma += valor_de_n[i];
}

double media = static_cast<double>(suma) / n;

int dias = 0;
for (int i = 0; i < n; i++){
    if (valor_de_n[i] > media){
        cout << i << " ";
    }
}
cout << endl;
    return 0;
}
