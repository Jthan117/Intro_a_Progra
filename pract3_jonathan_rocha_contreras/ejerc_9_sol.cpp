#include <iostream>
#include <string>
using namespace std;

int main (){
	string a;
   int idas_heladera = 0;
   getline(cin, a);
   
   for (int i = 0; i < a.size(); ++i){
       if (a[i] == '1'){ 
           idas_heladera += 1;
           cout << "Om-nom-nom :P" << endl;
       }
       
       if (idas_heladera >= 10){ 
            break;
       }
       
       if (a[i] == '0') 
           cout << "No cake :(" << endl;
           break;
       }
   

	return 0;
}