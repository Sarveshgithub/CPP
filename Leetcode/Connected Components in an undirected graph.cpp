//Author : Sarvesh
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
#define ed endl;
void dfs(int v, vector<bool> &visited, vector<vector<int>> &adjLst) {
	visited[v] = true;
	vector<int> st;
	st.push_back(v);
	while (st.size() > 0) {
		int lastElement = st.back();
		st.pop_back();
		f(x, adjLst[lastElement].size()) {
			if (!visited[adjLst[lastElement][x]]) {
				st.push_back(adjLst[lastElement][x]);
				visited[adjLst[lastElement][x]] = true;
			}
		}
	}
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
	//Given n = 5 and edges = [[0, 1], [1, 2], [3, 4]], return 2.
	int v = 5;
	vector<vector<int>> edges = {{0, 1}, {1, 2}, {3, 4}};
	vector<vector<int>> adjLst(v);
	for (int i = 0; i < edges.size(); i++) {
		adjLst[edges[i][0]].push_back(edges[i][1]);
		adjLst[edges[i][1]].push_back(edges[i][0]);
	}
	vector<bool> visited(v);
	int count = 0;
	f(x, v) {
		if (!visited[x]) {
			count ++;
			dfs(x, visited, adjLst);
		}
	}
	cout << count;
	// f(x, adjLst.size()) {
	// 	cout << "Node " << x << " -> ";
	// 	f(y, adjLst[x].size()) {
	// 		cout << adjLst[x][y] << " : ";
	// 	}
	// 	cout << ed;
	// }
}

