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
	string input = "abcba";
	bool validPalid = true;
	int i = 0, j = input.length() - 1, count = 0;
	while (i < j) {
		if (input[i] == input[j] ) {
			validPalid = true;
			i++, j--;
		}
		else
	}
}