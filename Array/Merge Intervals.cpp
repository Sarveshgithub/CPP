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
	vector<vector<int>> input;
	input = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
	//input = {{1,4},{5,6}};
	//input = {{1, 4}, {0, 2}, {3, 5}};
	sort(input.begin() , input.end());
	vector<vector<int>> sol;
	sol.push_back({input[0][0], input[0][1]});
	for (int x = 1 ; x < input.size(); x++) {
		if (input[x][0] <= sol[sol.size() - 1][1] ) {
			if (input[x][1] >= sol[sol.size() - 1][1] ) {
				sol[sol.size() - 1][1] =  input[x][1];
			}
		}
		else {
			sol.push_back({input[x][0], input[x][1]});
		}
	}

	for (int x = 0 ; x < sol.size(); x++) {
		cout << sol[x][0] << " " <<  sol[x][1] << ed;
	}
}