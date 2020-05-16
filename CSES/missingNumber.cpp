//Author : Sarvesh
#include <bits/stdc++.h>
using namespace std;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
#define ed endl;
int main(){
    long long n,s,t = 0;
    cin >> n;
    s = n * (n+1)/2;
    f1(i,n-1){
        long long  l;
        cin>>l;
        t+=l;
    }
    cout<<s-t;
}