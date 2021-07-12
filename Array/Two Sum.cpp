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
	map<int, int> mp;
	vector<int> sol;
	vector<int> nums;
	int n, target;
	cin >> n;
	f(x, n) {
		int input;
		cin >> input;
		//cout << "out:" << input;
		nums.push_back(input);
	}
	cin >> target;
	//cout<<"sfsdfsdfsd"<<nums.size();
	for (int i = 0; i < nums.size(); i++) {
		int first = target - nums[i];
		//cout << "KEY\t" << nums[i];
		//cout << "First ::" << first;
		if (mp.count(first) > 0) {
			cout << "inside ::" << first;
			sol.push_back(mp.find(first)->second);
			sol.push_back(i);
			break;
		}
		mp[nums[i]] =   i;
	}
	cout << "Solution";
	f(x, sol.size()) {
		cout << sol[x];
	}
}