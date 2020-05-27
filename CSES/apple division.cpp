//Author : Sarvesh
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
#define ed endl;
vector<int> inputArray;
vector<int> subset;
ll n, m, t;
int a = 0, b = 0;
void search(int k) {
    if (k == n) {
        int s = 0;
        f(i, subset.size()) {
            s += subset[i];
            // cout << subset[i] << " ";
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
    a = n / 2;
    b = n - a;
    f(i, n) {
        int j;
        cin >> j;
        inputArray.push_back(j);
        t += j;
    }
    search(0);
    cout << "m:::" << m;
}