//Author : Sarvesh
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
#define ed endl;

char solve(string s, string t) {
	int diff = s.length() - t.length();
	if (abs(diff) > 1) {
		return ' ';
	}

	map<char, int> mp;

	f(x, s.length()) {
		char val = s[x];
		if (mp.count(val) ) {
			mp[val] = mp[val] + 1;
		} else {
			mp[val] = 1;
		}
	}
	f(x, t.length()) {
		char val = t[x];
		if (mp.count(val)) {
			if (mp[val] == 1) {
				mp.erase('a');
			} else {
				mp[val] = mp[val] - 1;
			}
		} else {
			return  val;
			break;
		}
	}
	return ' ';
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
	string s, t;
	s = "foobar", t = "barfoot";
	cout << solve("a", "aa");
}