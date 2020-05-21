//Author : Sarvesh
#include <bits/stdc++.h>
using namespace std;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
#define ed endl;
typedef long long ll;
int main() {
    // 14/2 = 7
    // 7/2 = 2
    // 2/2 = 1
    // 4
    // 3 5 6
    ll n, sum;
    cin >> n;
    sum = n * (n + 1) / 2;
    cout << sum << '\n';
    if (sum % 2 == 0) {
        string s1, s2;
        ll half = sum / 2;
        ll c = 0;
        while (half / 2 > 1) {
            s1 = s1 + to_string(half / 2) + " ";
            ++c;
            half = half / 2;
        }
        cout<<half;
        cout << "YES" << '\n';
        cout << c << '\n';
        cout << s1 << '\n';
        cout << n - c << '\n';
        cout << s2 << '\n';
    } else {
        cout << "NO";
    }
}