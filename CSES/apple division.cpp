//Author : Sarvesh
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
#define ed endl;
vector<ll> inputArray;
vector<ll> subset;
ll n, m, t;
void search(int k) {
    if (k == n) {
        ll s = 0;
        f(i, subset.size()) {
            s += subset[i];
        }
        ll x = s;
        ll y = t - s;
        if (y > x) swap(x, y);
        m = min(x - y, m);
    } else {
        subset.push_back(inputArray[k]);
        search(k + 1);
        subset.pop_back();
        search(k + 1);
    }
}
int main() {
    cin >> n;
    f(i, n) {
        ll j;
        cin >> j;
        inputArray.push_back(j);
        t += j;
    }
    m = t;
    search(0);
    cout << m;
}