#include <iostream>

using namespace std;

// Function prototypes Here

int dinero_precio(int money = 0, int precio_helados = 0);

/**
 * @brief una funcion que si tienes $20 y el precio de un helado es de $5. Se quiere seguir comprando el helado hasta que no le quede dinero.
 * @Input  - dinero y precio 
 * @Output - "Se compro un helado" , y  "Te quedado {money} para comprar helados" , donde  money  es lo que nos queda de dinero para comprar mas helados.
 * y nos muestra el punto anterior hasta que nos quedemos sin dinero
 */


int main() {
  // call functions here
  dinero_precio(3,4);

  return 0;
}

// Function definitions
int dinero_precio(int money , int precio_helados ){
cout << "Ingrese la cantidad de dinero: ";
    cin >> money;
    cout << "Ingrese el precio del helado: ";
    cin >> precio_helados;

    cout << "Tienes inicialmente: " << money << " dolares." << endl;
    cout << "El precio del helado es: " << precio_helados << endl;
    while (money >= 0){
        if (money - precio_helados < 0){
            cout << "Ya no puedes comprar mas helados, te quedan: " << money << " dolares." << endl;
            break;
        }
        else{
            money -= precio_helados;
            cout << "Se compro un helado!" << endl;
            cout << "Te a quedado: " << money << " dolares." << endl;
        }
    }
    
}
