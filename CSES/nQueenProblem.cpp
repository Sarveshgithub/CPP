//Author : Sarvesh
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
#define ed endl;
int n;
int sol = 0;
vector<int> position;
bool isValidPlace() {
    int rowId = position.size() - 1;
    for (int i = 0; i < rowId; i++) {
        int diff = abs(position[rowId] - position[i]);
        if (diff == 0 || diff == rowId - i) {
            return false;
        }
    }
    return true;
}
void solveQueen() {
    if (n == position.size()) {
        cout << "Solution " << ++sol << '\n';
        for (int i = 0; i < position.size(); i++) {
            cout << "|";
            for (int j = 0; j < position.size(); j++) {
                if (position[i] == j) {
                    cout << "Q";
                } else {
                    cout << "X";
                }
                cout << "|";
            }
            cout << "\n";
        }
        cout << "\n";
    } else {
        for (int i = 0; i < n; i++) {
            position.push_back(i);
            if (isValidPlace()) {
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