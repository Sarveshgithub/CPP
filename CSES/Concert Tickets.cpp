//Author : Sarvesh
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
#define ed endl;
int main() {
    map<ll, ll> tickets;
    tickets[1] = 1;
    ll m,n;
    cin >> m >>n;
    f(i,m){
        
    }
    for (map<ll, ll>::iterator ii = tickets.begin(); ii != tickets.end(); ++ii) {
        cout << (*ii).first << ": " << (*ii).second << endl;
    }
}
