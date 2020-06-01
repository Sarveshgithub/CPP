//Author : Sarvesh
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
#define ed endl;
ll powll(ll e, ll p, ll mod) {
    ll ans = 1;
    for (ll i = 0; i < p; i++) {
        ans = ans * e % mod;
    }
    return ans;
}
int main() {
    ll n;
    cin >> n;
    cout << powll(2, n, 1e9 + 7);
}