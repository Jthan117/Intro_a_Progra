#include <iostream>
using namespace std;

	int main() {
		string query, word;
 		getline(cin, query);
 	
 	for (int i = 0; i < query.size(); ++i){
 		if(query[i] != ' '){
 			word += query[i];
		 }
		 else if(query[i] == ' '){
		 	cout << "[" << word << "]" << endl;
		 	word = "";
		 }
	
}
	cout << "[" << word << "]" << endl;
    return 0;
}