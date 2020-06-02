//Author : Sarvesh
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
#define ed endl;
int main() {
    int n, f;
    cin >> n;
    set<int> s;
    f(i, n) {
        cin >> f;
        s.insert(f);
    }
    cout << s.size();
}
