//Author : Sarvesh
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
#define ed endl;
int main() {
    #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
    #endif
	int n;
	cin >>n;
	int ans = 0;
	while(n--){
		string s;
		cin >>s;
		if (s[1] == '-'){
			ans --;
		}
		else {
			ans++;
		}
	}
	cout <<ans;
}
