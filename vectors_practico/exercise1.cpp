#include <iostream>
#include <vector>

using namespace std;

void printboard(vector<vector<int>> board);  

int main (){
int x = 1, g = 2;
vector<vector<int>> board = {
    {x, 0, 0, 0, -1, -1, -1, -1},
    {0, 0, 0, 0, 0, -1, -1, -1},
    {-1, -1, 0, -1, -1, 0, 0, 0},
    {-1, 0, 0, 0, 0, 0, 0, g}
    };

printboard(board);  // llamo a la fucnion

    return 0;
}
void printboard(vector<vector<int>> board){
    for(int i = 0; i < board.size(); i++){
        for(int t = 0; t < board[i].size(); t++){
            if (board[i][t] == 1){
                cout << "x ";
            } else if(board[i][t] == 2){
                cout << "g";
            }else {cout << board[i][t] << " ";}
            
        }
        cout << "\n";
    }

}