#include <iostream>

using namespace std;

// Function prototypes Here
double cortador_naranjas(double mitad1 = 0, double mitad2 = 0, double diferencia = 0);


/**
 * @brief una funcion que recibe dos numeros dobles denominados "la mitad de una naranja" e indica por donde cortarla 
 * ya sea comparando o si es mayor y mostrando la diferencia
 * @Input  -dos numeros dobles
 * @Output -la diferencia
 */

int main() {
  // call functions here
cortador_naranjas(3,2);

  return 0;
}

// Function definitions
double cortador_naranjas(double mitad1, double mitad2, double diferencia){
cout << "introduce las dos mitades de la naranja: " << endl;
cin >> mitad1;
cin >> mitad2;

if (mitad1 == mitad2)
{
    cout << "cortar por la mitad" << endl;
} 
else if (mitad1 > mitad2)
{
    diferencia = mitad1 - mitad2;
    cout << "cortar " << diferencia << " de la primera parte" << endl;
}
if (mitad2 > mitad1)
{
    diferencia = mitad2 - mitad1;
    cout << "cortar " << diferencia << " de la primera parte" << endl;
}

}