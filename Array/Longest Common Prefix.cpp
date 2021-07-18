//Longest Common Prefix
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
	vector<string> input;
	input = {"colorado", "color", "cold","c"};
	string sol;
	int i = 0;
	bool isBreak = true;
	while (isBreak) {
		char firstVal = input[0][i];
		for (int x = 1; x < input.size(); x++) {
			if (i < input[x].length() && firstVal == input[x][i] ) {
				if ( x == input.size() - 1) {
					sol = sol + firstVal;
					i = i + 1;
				}
			}
			else {
				isBreak = false;
				break;
			}
		}
	}
	cout << "SOL ::" << sol;
}