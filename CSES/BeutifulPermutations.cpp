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
    for(int i=0; i<n; i++){
        a[i] = i+1;
    }
    bool is = false;
    do {
        int first = a[0];
        is = false;
        string s = to_string(first);
         for (int i = 1; i < n; i++) {
             if(abs(first-a[i]) <= 1){
                 is = true;
                 break;
             }
             s = s +" "+to_string(a[i]);
             first = a[i];
        }
        if(!is){
            cout << s; 
            break;
        }
    } while ( next_permutation(a,a+n) ); 
    if(is){
        cout<<"NO SOLUTION";
    }
}