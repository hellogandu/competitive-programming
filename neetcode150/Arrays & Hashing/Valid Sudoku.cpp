#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution{
public:
  bool isValidSudoku(vector<vector<char>>& board) {
    return rowCheck(board) && columnCheck(board) && squareBlockCheck(board);
  }
  bool rowCheck(vector<vector<char>> &board){
    for (int i = 0; i < 9;i++){
      unordered_map<char, int> umap;
      for (int j = 0; j < 9;j++){
        if(board[i][j] != '.' ){
          if (umap[board[i][j]]){
            return false;
          }
          umap[board[i][j]] += 1;
        }
      }
    }
    return true;
  }
  bool columnCheck(vector<vector<char>> &board){
    for (int i = 0; i < 9; i++){
      unordered_map<char, int> umap;
      for (int j = 0; j < 9; j++){
        if (board[j][i] != '.'){
          if (umap[board[j][i]]){
            return false;
          }
          umap[board[j][i]] += 1;
        }
      }
    }
    return true;
  }
  bool squareBlockCheck(vector<vector<char>> &board){
    for (int m = 0; m < 9; m+=3){
      for (int n = 0; n < 9;n+=3){
        unordered_map<char, int> umap;
        for (int i = m; i < m + 3;i++){
          for (int j = n; j < n + 3;j++){
            if (board[i][j] != '.'){
              if (umap[board[i][j]]){
                return false;
              }
            umap[board[i][j]] += 1;
            }
          }
        }
        
      }
    }
    return true;
  }
};

int main(){
  Solution solutionObject;
  vector<vector<char>> board{
      {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
      {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
      {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
      {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
      {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
      {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
      {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
      {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
      {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

  cout << solutionObject.isValidSudoku(board);
  return 0;
}