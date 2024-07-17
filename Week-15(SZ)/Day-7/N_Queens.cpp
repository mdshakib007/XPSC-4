#include <bits/stdc++.h>
using namespace std;

class Solution {
    bool isSafe(int board[][10], int i, int j, int n){
        for(int k = 0; k<i; k++){
            if(board[k][j] == 1) return false;
        }

        int x = i, y = j;
        while(x >= 0 && y >= 0){
            if(board[x][y] == 1) return false;
            x--, y--;
        }

        x = i, y = j;
        while(x >= 0 && y < n){
            if(board[x][y] == 1) return false;

            x--, y++;
        }

        return true;
    }

    bool findPlace(int board[][10], int i, int n, vector<vector<string>>&ans){
        // base case
        if(i == n){
            vector<string> curr;
            for(int row = 0; row<n; row++){
                string s;
                for(int col = 0; col<n; col++){
                    if(board[row][col] == 1) s+='Q';
                    else s += '.';
                }
                curr.push_back(s);
            }
            ans.push_back(curr);
            return false;
        }

        // try to place
        for(int j = 0; j<n; j++){
            if(isSafe(board, i, j , n) == true){
                board[i][j] = 1;
                bool next = findPlace(board, i+1, n, ans);
                if(next) return true;

                board[i][j] = 0;
            }
        }
        return false;
    }

public:
    vector<vector<string>> solveNQueens(int n) {
        int board[10][10];
        vector<vector<string>> ans;
        findPlace(board, 0, n, ans);
        return ans;
    }
};