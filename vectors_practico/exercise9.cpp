#include <iostream>
#include <vector>


using namespace std;

void salario (vector<int> salary);

int main (){
    vector<int> salary = {1000,2000,3000};

    salario(salary);
    return 0;
}
void salario (vector<int> salary){

int maximo = salary[0];
int minimo = salary[0];
int suma = 0;
int resultado = 0;


for (int i = 0; i < salary.size(); i++){
    if(salary[i] > maximo){
        maximo = salary[i];
    }
    if (salary[i] < minimo){
        minimo = salary[i];
    }
}

for (int i = 0; i < salary.size(); i++){
    if (salary[i] != maximo && salary[i] != minimo){
        suma = suma + salary[i];
        resultado = suma / 2;
    }
}

cout << resultado << endl;
}
