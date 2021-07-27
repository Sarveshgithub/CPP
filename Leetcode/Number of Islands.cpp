//Author : Sarvesh
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
#define ed endl;

int dfs(vector<vector<char>> &input , int x, int y, int area) {
	if (x < 0 || x >= input.size() || y < 0 || y >= input[0].size() || input[x][y] != '1') {
		return area;
	}
	input[x][y] = '2';
	if (input[x][y] == '2') {
		area++;
	}
	area = dfs(input, x + 1, y, area);
	area = dfs(input, x, y + 1, area);
	area = dfs(input, x - 1, y, area);
	area = dfs(input, x, y - 1, area);
	return area;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	vector<vector<char>> input;
	input = {
		{'1', '1', '1', '1', '0'},
		{'1', '1', '0', '1', '0'},
		{'1', '1', '0', '0', '0'},
		{'0', '0', '0', '0', '0'}
	};
	int iland = 0;
	vector<int> area;
	for (int i = 0 ; i < input.size(); i++) {
		for (int j = 0 ; j < input[i].size(); j++) {
			if (input[i][j] == '1') {
				iland ++;
				int a = dfs(input, i, j, 0);
				area.push_back(a);
			}
		}
	}
	f(x, area.size()) {
		cout << "area" << area[x] << ":" ;
	}
	cout << iland;
}
