//Author : Sarvesh
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
#define ed endl;
int main() {
    int n, x;
    cin >> n >> x;
    int  a[n];
    f(i, n) {
        cin >> a[i];
    }
    sort(a,a+n);
    int c = 0;
    for (int i = 0, j = n - 1; i < j;) {
        while (i < j && a[i] + a[j] > x)
            --j;
        if (i >= j)
            break;
        ++c;
        ++i;
        --j;
    }
    cout << n-c;
}
