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
	int n;
	cin >> n;
	vector<vector<int>> sol(n);
	for (int i = 0; i < n; i++) {
		sol[i].resize(i + 1);
		sol[i][0] = sol[i][i] = 1;
		for (int j = 1; j < i; j++) {
			sol[i][j] = sol[i - 1][j - 1] + sol[i - 1][j];
		}
	}

	for (int i = 0 ; i < sol.size(); i ++) {
		for (int j = 0 ; j < sol[i].size(); j++) {
			cout << sol[i][j] << " ";
		}
		cout << ed;
	}
}