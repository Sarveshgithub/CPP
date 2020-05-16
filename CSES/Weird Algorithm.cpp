//Author : Sarvesh
#include <bits/stdc++.h>
using namespace std;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
#define ed endl;
int main(){
    long long  n;
    cin >> n;
    while(true){
        cout<<n<<" ";
        if(n == 1){
            break;
        }
        if(n%2 ==0){
            n = n/2;
        }
        else {
            n = n*3 +1;
        }
    }
}