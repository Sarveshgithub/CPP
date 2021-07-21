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
	input = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
	int m = input.size() , n = input[0].size();
	//Brute-force
	// for (int i = 0 ; i < m; i ++) {
	// 	for (int j = 0 ; j < n; j++) {
	// 		if (input[i][j] == 0) {
	// 			for (int r = 0; r < input[i].size(); r++) {
	// 				if (input[i][r] != 0) {
	// 					input[i][r] = -1;
	// 				}
	// 			}
	// 			for (int c = 0; c < m; c++) {
	// 				if (input[c][j] != 0) {
	// 					input[c][j] = -1;
	// 				}
	// 			}
	// 		}
	// 	}
	// }
	//Some Optimize
	set<int> row;
	set<int> col;
	for (int i = 0 ; i < m; i ++) {
		for (int j = 0 ; j < n; j++) {
			if (input[i][j] == 0) {
				row.insert(i);
				col.insert(j);
			}
		}
	}

	for (int i = 0 ; i < m; i ++) {
		for (int j = 0 ; j < n; j++) {
			if(row.count(i) > 0 || col.count(j) > 0){
				input[i][j] = 0 ;
			}
		}
	}

	cout << "-------------GRID---------" << ed;
	for (int i = 0; i < input.size(); i ++) {
		for (int j = 0 ; j < input[i].size(); j++) {
			cout << input[i][j] << " ";
		}
		cout << ed;
	}
}