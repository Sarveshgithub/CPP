//Author : Sarvesh
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
#define ed endl;
int main() {
    ll s;
    cin >> s;
    int a[s];
    f(x, s) {
        cin >> a[x];
    }
    ll start = 0, end = s - 1;
    while (start < end) {
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
    f(x, s) {
        cout << a[x] << " ";
    }
}
