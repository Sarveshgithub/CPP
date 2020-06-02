//Author : Sarvesh
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
#define ed endl;
int n, m, k;
bool search(int key, int a[]) {
    int s,m,e;
    f(i, m) {
        cout << a[i] << " ";
    }
    while(s!=e){
        if()
    }
    return true;
}
int main() {
    cin >> n >> m >> k;
    int applicant[n], appartment[m];
    f(i, n) {
        int ap;
        cin >> ap;
        applicant[i] = ap;
    }
    f(i, m) {
        int apt;
        cin >> apt;
        appartment[i] = apt;
    }
    sort(appartment, appartment + m);
    search(2, appartment);
}
