//Author : Sarvesh
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
#define ed endl;
int main() {
    #ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
    #endif
    map<string,set<char>> mp;
    mp["row_1"] = {'a','c'};
    cout <<"key :: " << mp["row_1"].count('a');
    mp["row_1"].insert('d');
    cout <<"key :: " << mp["row_1"].count('d');
    // for(auto m : mp){
    // 	cout <<"key :: " << m->first;
    // 	cout <<"value :: " << m->second;
    // }
}