//Author : Sarvesh
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
#define ed endl;
int main(){
    int n;
    cin >>n;
    int a[n];
    int a,b;
    cin >> a;
    for(int i=1; i<=n; i++){
        a[i] = i;
    }
    do {  
    cout << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';  
    } while ( next_permutation(myints,myints+3) ); 
}