//Author : Sarvesh
#include <bits/stdc++.h>
using namespace std;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
#define ed endl;
int main(){
    int longest = 0,temp = 0;
    string str;
    cin >> str;
    char c = str[0];
    for(int i=0 ;i<str.length();++i){
        if(c == str[i]){
            ++temp;
        }
        else {
            temp = 1;
            c = str[i];
        }
        if(temp > longest ){
            longest = temp;
        }
    }
    cout<<longest;
}