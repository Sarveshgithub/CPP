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
	string input = "babad";
	string subString;
	int size = 0;
	int a[input.length()][input.length()];
	memset(a, -1, sizeof(a));
	for (int i = 0; i < input.length(); i ++) {
		for (int j = i ; j < i + 2; j++) {
			if (i == j) {
				a[i][j] = 1;
			} else if (input[i] == input[j]) {
				a[i][j] = 1;
				subString = input.substr(i ,  2);
			} else {
				a[i][j] = 0;
			}

		}
	}

	int maxGAP = input.length() - 2, GAP = 1;

	while (GAP <= maxGAP) {
		int i  = 0 , j = i + GAP + 1;
		while (j < input.length()) {
			if (input[i] == input[j]) {
				int tI = i, tJ = j;
				tI++, tJ--;
				if (a[tI][tJ] == 1) {
					a[i][j] = 1;
					subString = input.substr(i , (j - i) + 1);
				} else {
					a[i][j] = 0;
				}
			}
			else {
				a[i][j] = 0;
			}
			i = i + 1;
			j = j + 1;
		}
		GAP++;
	}
	cout << "subString::" << subString;

	// cout << "-------------GRID---------" << ed;

	// //print grid
	// for (int i = 0; i < input.length(); i ++) {
	// 	for (int j = 0 ; j < input.length(); j++) {
	// 		cout << a[i][j] << " ";
	// 	}
	// 	cout << ed;
	// }
}