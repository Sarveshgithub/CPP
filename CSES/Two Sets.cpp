//Author : Sarvesh
#include <bits/stdc++.h>
using namespace std;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
#define ed endl;
typedef long long ll;
int main() {
    ll n, sum;
    cin >> n;
    sum = n * (n + 1) / 2;
    if (sum % 2 == 0) {
        sum /= 2;
        string s1, s2;
        ll c = 0;;
        for (ll i = n; i >= 1; --i) {
            if (i <= sum) {
                s1 += to_string(i) + " ";
                sum -= i;
                ++c;
            } else {
                s2 += to_string(i) + " ";
            }
        }
        cout << "YES" << '\n';
        cout << c << '\n';
        cout << s1 << '\n';
        cout << n - c << '\n';
        cout << s2 << '\n';
    } else {
        cout << "NO";
    }
}