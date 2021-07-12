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
	vector<int> nums = {1,1,-1,-1,3};
	// -1 -1 1 1 3
	int target = -1;
	int sol = 2147483647, size = nums.size(),output;
	sort(nums.begin(), nums.end());
	bool terminate = false;
	for (int i = 0 ; i < size ; i++) {
		if (i != 0 && nums[i] == nums[i - 1]) {
			continue;
		}
		int l = i + 1, r = size - 1 ;
		while (l < r) {
			int sum = nums[i] + nums[l] + nums[r];
			// if(sum == target){
			// 	return target;
			// 	break;
			// }
			l++;
			int distanse = abs(sum - target);
			cout << "DISTANCE::" << abs(sum - target);
			cout << "SUM::" << sum;

			if (distanse < sol) {
				output = sum;
				sol = distanse;
			}
		}
	}
	cout << "output;;" << output;

}