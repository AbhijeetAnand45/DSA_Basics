#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
     bool isSafe(int row, int col, vector < string > board, int n) {
      // check upper element
      int duprow = row;
      int dupcol = col;
      // diagonal checking 
      while (row >= 0 && col >= 0) {
        if (board[row][col] == 'Q')
          return false;
        row--;
        col--;
      }
         
        // checking that row
        col = dupcol;
      row = duprow;
      while (col >= 0) {
        if (board[row][col] == 'Q')
          return false;
        col--;
      }
      // checking diagonal
      row = duprow;
      col = dupcol;
      while (row < n && col >= 0) {
        if (board[row][col] == 'Q')
          return false;
        row++;
        col--;
      }
      return true;
    }
    
    void placeQueens(vector<string>& board, vector<vector<string>>& ans, int col, int n){
        if (col == n) {
        ans.push_back(board);
        return;
      }
        // checking for each row if we can place queens there
        // if yes then we will move to the next column and check if we can place queens in any row of next column , continue...
      for (int row = 0; row < n; row++) {
        if (isSafe(row, col, board, n)) {
          board[row][col] = 'Q';
          placeQueens( board, ans,col + 1, n);
          board[row][col] = '.';
        }
      }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n, '.');
        
        for(int i = 0; i < n; i++) {
            board[i] = s;
        }
        
        
        placeQueens(board, ans, 0, n);
        return ans;
    }
};

int main() {
    Solution obj;
    int n;
    cin>>n;
    vector<vector<string>> ans = obj.solveNQueens(n);

    for(int i = 0; i < ans.size(); i++) {
        for(int j = 0; j < ans[i].size(); j++) {
            for(int k = 0; k < ans[i][j].size(); k++) {
                cout<<ans[i][j][k]<<" ";
            }
            cout<<"\n";
        }
        cout<<"\n";
    }
    return 0;
}

//n = 4
// output
// . . Q . 
// Q . . . 
// . . . Q 
// . Q . . 
        
// . Q . . 
// . . . Q 
// Q . . . 
// . . Q . 