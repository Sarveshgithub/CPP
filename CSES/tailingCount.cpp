//Author : Sarvesh
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
#define ed endl;
int main() {
    ll n, count = 0;
    cin >> n;
    for (int i = 5; n / i >= 1; i *= 5) {
        count += n / i;
    }
    cout << count;
}