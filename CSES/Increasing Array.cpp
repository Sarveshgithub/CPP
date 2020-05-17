//Author : Sarvesh
#include <bits/stdc++.h>
using namespace std;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
#define ed endl;
int main(){
    int n,c =0 ;
    cin >> n;
    int a[n];
    f(i,n){
        cin>>a[i];
        cout<<"dfdfd"<<a[i];
    }
    f(i,n){
        bool u = false;
        for(int j = 1; j<n;++j){
            if(a[j-1] > a[j]){
                u = true;
                a[j] = a[j] + 1;
                cout<<"dddd----"<<a[j];
                cout<<"\n";
            }
        }
        if(u){
            ++c;
        }
    }
    cout<<c;
}   