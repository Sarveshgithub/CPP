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
	vector<int> input;
	//input = {4, 5, 4, 3, 2, 1};
	input = {1, 2};
	//input = {1, 2, 3, 6, 5, 4};
	//input =  {3, 2, 1};
	// find peek
	int peekIndex, leftElement;
	for (int i = input.size() - 1 ; i >= 0; i--) {
		if (i == input.size() - 1) {
			peekIndex = i;
			leftElement  = i - 1;
		} else if (input[i] > input[i + 1]) {
			peekIndex = i;
			if (peekIndex == 0) {
				leftElement = peekIndex;
			} else {
				leftElement  = i - 1;
			}
		} else {
			break;
		}
	}
	if (peekIndex == leftElement) {
		sort(input.begin() , input.end());
	}
	else {
		cout << "Peek Index:::" << peekIndex;
		int tempPeek = peekIndex;
		while (input[leftElement] <= input[peekIndex + 1] &&  input[peekIndex + 1] <= input[tempPeek] && peekIndex < input.size()) {

			peekIndex = peekIndex + 1;
		}
		swap(input[leftElement], input[peekIndex]);
		sort(input.begin() + leftElement + 1, input.end());
	}

	cout << "peekIndex::" << peekIndex << "leftElement::" << leftElement << ed;
	f(x, input.size()) {
		cout << input[x] << " ";
	}
}