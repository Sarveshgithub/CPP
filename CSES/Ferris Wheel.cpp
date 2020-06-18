//Author : Sarvesh
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
#define ed endl;
int main() {
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    f(i, n) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int c = 0, s = 0;
    int size = a.size() - 1;
    while ((size) >= 0) {
        if (a[size] <= x) {
            int rem = x - a[size];
            for (int i = 0; i < size - 1; i++) {
                cout << ":::::" << a[i];
                if (a[i] <= rem) {
                    a.erase(a.begin() + i);
                    break;
                }
            }
        }
        a.erase(a.begin() + size);
        c += 1;
    }
    cout << c;
}

//9 8 8 9 10 8 5 8 7 10
//5 7 8  9  10
