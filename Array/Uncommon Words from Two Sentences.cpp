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
	string s1, s2;
	s1 = "this apple is sweet", s2 = "this apple is sour";
	s1 = s1 + " " + s2;
	map<string, int> mp;
	vector<string> sol;
	string temp;
	for (int i = 0 ; i < s1.length(); i++) {
		if (s1[i] == ' ') {
			if (mp.count(temp)) {
				mp[temp] = mp[temp] + 1;
			}
			else {
				mp[temp] =  1;
			}
			temp.erase();
		} else {
			temp = temp + s1[i];
		}
		if (i == s1.length() - 1) {
			if (mp.count(temp)) {
				mp[temp] = mp[temp] + 1;
			}
			else {
				mp[temp] =  1;
			}
		}
	}

	for (auto elem : mp) {
		if (elem.second == 1) {
			sol.push_back(elem.first);
		}
	}

	f(x, sol.size()) {
		cout << sol[x] << " , ";
	}
}