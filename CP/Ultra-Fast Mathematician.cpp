//http://codeforces.com/problemset/problem/61/A
//Author : Sarvesh
#include <bits/stdc++.h>
using namespace std;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
int main(){
    long long int n,m;
    int rem1, rem2;
    string out;
    cin >> n >>m;
    cout<<"sdssdsdss"<<n;
    cout<<"sdssddfsdss"<<m;
    while(n!=0){
        rem1 = n%10 ;
        rem2 = m%10 ;
        cout<<"rem1"<<rem1;
        cout<<"rem1"<<rem2;
        if(rem1 ==1 && rem2 == 1){
            out.push_back((char)1);
        }
        else{
            out.push_back((char)rem1+rem2);
        }
        n/=10;
        m/=10;
    }
    cout << out;
}