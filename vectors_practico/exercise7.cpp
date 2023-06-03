#include <iostream>
#include <vector>

using namespace std;

int main (){
    vector<bool> people; // el vector es la cola, el numero de operaciones las veces que voy a afectar a las personas
// el indice es para saber sobre cual voy a actuar
    cout << "introduce el numero de operaciones" << endl;
    int q;
    cin >>  q;
    people.resize(q, false);
    for(int i = 0; i < q; i++){
        cout << "escribe la operacion" << endl;
        string operacion;
        cin >> operacion;
            int idx = 0;

        if(operacion == "worry"){
            cout << "pon el indice" << endl;
            int idx;
            cin >> idx;
            people[idx] = true;
           
        }

        else if (operacion == "come"){
            cout << "pon el indice" << endl;
            int idx;
            cin >> idx;
            people[idx] = false;
            }
        
        else if (operacion == "worry_count"){
            int contador_de_preocupados= 0;
             for(int i = 0; i < people.size(); i++){
                if (people[i]){
                    contador_de_preocupados++;
                    
                }
             }
                cout << contador_de_preocupados;
        }
        else if (operacion == "quiet"){
            cout << "pon el indice" << endl;
            int idx;
            cin >> idx;
            people[idx] = true;
        }
    }
    for (int i = 0; i < people.size(); i++){
        cout << people[i] << " ";
    }

    return 0;
}
