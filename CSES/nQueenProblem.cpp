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
    for (int i = 0; i < position.size(); i++) {
        if (i == row) {
            return false;
        }
        if (position[i] == col) {
            return false;
        }
        if (abs(i - row) == abs(position[i] - col)) {
            return false;
        }
    }
    if (position.size() == 1) {
        return true;
    }
    return true;
}
void solveQueen() {
    cout << "inside:::" << position.size() << '\n';
    if (n == position.size()) {
        for (int i = 0; i < position.size(); i++) {
            cout << position[i] << " ";
        }
        cout << "\n";
    } else {
        for (int i = 0; i < n; i++) {
            // cout << "postion::::" << position.size() << "---i::::" << i << '\n';
            position.push_back(i);
            if (isValidPlace(position.size(), i)) {
                cout << "valid postion::::" << position.size() << "---i::::" << i << '\n';
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