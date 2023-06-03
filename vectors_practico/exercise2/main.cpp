#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

vector<int> ParseLine(string line);

vector<vector<int>> ReadBoardFile(string path);

void PrintBoard(const vector<vector<int>>& board);

int main() {
  vector<vector<int>> board = ReadBoardFile ("C:/Users/USER/Desktop/vectors/exercise2/boards/1.board");


  PrintBoard(board);
}

vector<int> ParseLine(string line) {
  istringstream sline(line);
  int n;
  char c;
  vector<int> row;
  while (sline >> n >> c && c == ',') {
    row.push_back(n);
  }
  return row;
}

// TODO: Cambie el tipo de retorno de la funcion readBoardFile.

vector<vector<int>> ReadBoardFile (string path) {

  // TODO: Declare una variable board vacia con el tipo de
  // type vector<vector<int>>.

vector<vector<int>> board;
ifstream archivo;
archivo.open(path);
if (archivo){
  string line ;
  while (getline (archivo, line)) {
    board.push_back(ParseLine(line));
  }
}
else{
  cout << "No se pudo abrir el archivo" << endl;
}
  // TODO: En lugar de usar "cout" code utilice una llamada a ParseLine para cada linea
  // y coloque los resultados de parseLine a la cole del vector board (push_back)
  // TODO: Devuelva la variable board (Asegurese de cambiar el tipo de variable de retorno)
return board;
  
}

// TODO: Realice la funcion que muestre el vector
void PrintBoard(const vector<vector<int>>& board) {
  for(const auto& row : board){
    for (int mostrar : row){
      cout << mostrar << " ";
    }
    cout << endl;
  }
}