//Author : Sarvesh
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
#define ed endl;

int main() {
    ll n;
    cin >> n;
    while (n > 0) {
        int a, b;
        cin >> a >> b;
        if (2 * a - b >= 0 && (2 * a - b) % 3 == 0 && 2 * b - a >= 0 && (2 * b - a) % 3 == 0) {
            cout << "YES";
        } else {
            cout << "NO";
        }
        cout << '\n';
        --n;
    }
}