//Author : Sarvesh
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
#define ed endl;
int n;
vector<int> position;

bool isValidPlace(int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if(position[i])
        }
    }
    return false;
}
void solveQueen() {
    cout << "inside:::";
    if (n == position.size()) {
        for (int i = 0; i < position.size(); i++) {
            cout << position[i] << " ";
        }
        cout << "\n";
    } else {
        for (int i = 0; i < n; i++) {
            position.push_back(i);
            if (isValidPlace(position.size(), i)) {
                solveQueen();
            }
            position.pop_back();
        }
    }
}
int main() {
    cin >> n;
    solveQueen();
}