//Author : Sarvesh
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
#define ed endl;
bool d1[16], d2[16], c[16];
bool res[8][8];
int ways;
void solveQueen(int r) {
    if (r == 8) {
        ways++;
    } else {
        for (int col = 0; col < 8; col++) {
            if (c[col] || d1[r + col] || d2[r - col + 7] || res[r][col])
                continue;
            c[col] = d1[r + col] = d2[r - col + 7] = true;
            solveQueen(r + 1);
            c[col] = d1[r + col] = d2[r - col + 7] = false;
        }
    }
}
int main() {
    string s;
    f(i, 16) {
        c[i] = d1[i] = d2[i] = false;
    }
    for (int i = 0; i < 8; i++) {
        cin >> s;
        for (int j = 0; j < 8; j++) {
            res[i][j] = s[j] != '.';
        }
    }
    solveQueen(0);
    cout << ways;
}