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
			//validPalid = true;
			i++, j--;
		}
		else if (input[i + 1] == input[j] ) {
			i = i + 2;
			j--;
			count ++;
			//validPalid = true;
		}
		else if (input[i] == input[j - 1]) {
			i++;
			j = j - 2;
			count ++;
			//validPalid = true;
		}
		else {
			validPalid = false;
			break;
		}

		if (count > 1) {
			validPalid = false;
			break;
		}
		//cout << "val::" << i << j << count << input[i] << "---" << input[j] << ed;

	}
	cout << "valid:::" << validPalid;
}