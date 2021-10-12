/*

This program solves a Sudoku puzzle by filling the empty cells.

We use backtracking to solve this problem. The basic idea is to first fill an empty cell with a number from 1 to 9. After filling it, we check if the board is still valid. If yes, we continue on to the next cell. If at any step, we get an invalid board, we move back to the previous cell and check with another number and so on.

As it seems obvious, this algorithm is exponential with base 9, to the power of how many empty cells are there.

Problem source: Leetcode 37 (https://leetcode.com/problems/sudoku-solver/)

*/

#include <iostream>
#include <vector>
using namespace std;


// This function checks if a Sudoku board is valid or not.
bool check(vector<vector<char>>& board, int row, int col, int val){
    // Check row
    for(int i=0;i<9;i++){
        if(board[row][i]!='.' && board[row][i]==val){
            return false;
        }
    }
    
    // Check column
    for(int i=0;i<9;i++){
        if(board[i][col]!='.' && board[i][col]==val){
            return false;
        }
    }
        
    // Find grid
    int m = (row/3)*3;
    int n = (col/3)*3;
    
    // Check grid
    for(int i=m;i<m+3;i++){
        for(int j=n;j<n+3;j++){
            if(board[i][j]!='.' && board[i][j]==val){
                return false;
            }
        }
    }
    return true;
}

    
bool helper(vector<vector<char>>& board){       // returns true after checking all cells
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(board[i][j]=='.'){
                for(int k=1;k<=9;k++){
                    if(check(board, i, j, k+48)){
                        board[i][j] = k+48;
                        if(helper(board)){      // are all cells done?
                            return true;
                        }else{
                            board[i][j] = '.';
                        }
                    }
                }
                return false; // since all cells are not checked
            }
        }
    }
    return true;
}
 
// The main solving function, which uses a helper
void solveSudoku(vector<vector<char>>& board) {
    helper(board);
}


// main function
int main() {
	vector<vector<char>> board;
	for(int i=0;i<9;i++){
	    vector<char> row(9);
	    for(int j=0;j<9;j++){
	        cin>>row[j];
	    }
	    board.push_back(row);
	}
	solveSudoku(board);
	for(int i=0;i<9;i++){
	    for(int j=0;j<9;j++){
	        cout<<board[i][j]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
