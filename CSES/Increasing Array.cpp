#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, a, b;
    long long turn = 0;
    cin >> n;
    cin >> a;
    for (int i = 1; i < n; i++) {
        cin >> b;
        if (a > b) {
            turn += a - b;
        } else {
            a = b;
        }
    }
    cout << turn << "\n";

    return 0;
}
