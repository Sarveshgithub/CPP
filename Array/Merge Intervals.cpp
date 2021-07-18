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
	//sol.push_back(temp);input = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
	//input = {{1,4},{5,6}};
	input = {{1, 4}, {0, 2}, {3, 5}};
	sort(input.begin() , input.end());
	vector<vector<int>> sol;
	vector<int> temp = {input[0][0], input[0][1]};
	for (int x = 1 ; x < input.size(); x++) {
		if (input[x][0] <= temp[1] ) {
			//vector<int> innserTemp;
			if (input[x][1] >= temp[1] ) {
				temp = {temp[0], input[x][1]};
			} else if ((input[x][1] <= temp[1] )) {
				cout << "Both Same ::" << input[x][0] << " " << input[x][1];
				temp = {temp[0], temp[1]};
				//continue;
			}
			if (x == input.size() - 1) {
				sol.push_back(temp);
			}
		}
		// else if (temp[0] != x == 1) {
		// 	sol.push_back(temp);
		// 	temp = {input[x][0], input[x][1]};
		// 	sol.push_back(temp);
		// }
		else {
			if(sol.size() > 0 && sol[sol.size()-1][0] == temp[0] && sol[sol.size()-1][1] == temp[1]){
				sol.pop_back();
			}
			sol.push_back(temp);
			temp = {input[x][0], input[x][1]};
			sol.push_back(temp);
		}
		//cout << input[x][0] << " " <<  input[x][1] << ed;
	}

	for (int x = 0 ; x < sol.size(); x++) {
		cout << sol[x][0] << " " <<  sol[x][1] << ed;
	}
}