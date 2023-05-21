#include <iostream>

using namespace std;

// Function prototypes Here
string casa_colores(string color1,string color2,string color3,string color4);


/**
 * @brief una funcione que recibe 4 valores de tipo string donde si el 4to valor se repite da la respuesta
 * @Input  -3 colores y 1 color determinante
 * @Output - el color de la casa correcta
 */

int main() {
  // call functions here

casa_colores(" "," "," "," ");
  return 0;
}

// Function definitions
string casa_colores(string color1 = "red",string color2 = "blue",string color3 = "green",string color4 = " ") {
cout << "introduzca el color de las tres casas" << endl;
cin >> color1 >> color2 >> color3 >> color4;

if (color4 == color1)
{
    cout << "enter the house: " << color1 << endl;
}else if (color4 == color2)
{
    cout << "enter the house: " << color2 << endl;
}else if (color4 == color3)
{
    cout << "enter the house: " << color3 << endl;
} else 
{
    cout << "seek somewhere else" << endl;
}


}