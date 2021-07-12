//Author : Sarvesh
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
#define ed endl;
bool isValidSudoku(vector<vector<char>>& board) {
    map<string, set<char>> mp;
    for (int i = 0 ;  i < 9; i++) {
        for (int j = 0 ; j < 9; j++) {
            char boardVal = board[i][j];
            if (boardVal != '.') {
                string row = "row_" + to_string(i), col = "col_" + to_string(j), box = "box_" + to_string((i / 3) + (j / 3));
                //check row
                if (mp.count(row)) {
                    if (mp[row].count(boardVal)) {
                        cout << "row Match:::" << boardVal;
                        return false;
                        break;
                    } else {
                        mp[row].insert(boardVal);
                    }
                }
                else {
                    mp[row] = {boardVal};
                }
                //check col
                if (mp.count(col)) {
                    if (mp[col].count(boardVal)) {
                        cout << "col Match:::" << boardVal;
                        return false;
                        break;
                    } else {
                        mp[col].insert(boardVal);
                    }
                }
                else {
                    mp[col] = {boardVal};
                }
                //check box
                if (mp.count(box)) {
                    if (mp[box].count(boardVal)) {
                        cout << "box Match:::" << boardVal << "index ::" << i<<j << box;
                        return false;
                        break;
                    } else {
                        mp[box].insert(boardVal);
                    }
                }
                else {
                    mp[box] = {boardVal};
                }
            }
        }
    }
    return true;
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    bool ans = false;
    vector<vector<char>> board = {{'5','3','.','.','7','.','.','.','.'}
,{'6','.','.','1','9','5','.','.','.'}
,{'.','9','8','.','.','.','.','6','.'}
,{'8','.','.','.','6','.','.','.','3'}
,{'4','.','.','8','.','3','.','.','1'}
,{'7','.','.','.','2','.','.','.','6'}
,{'.','6','.','.','.','.','2','8','.'}
,{'.','.','.','4','1','9','.','.','5'}
,{'.','.','.','.','8','.','.','7','9'}};


    cout << "Answer:::" << isValidSudoku(board);
}