//Author : Sarvesh
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
#define ed endl;
//Using extra space
vector<int> usingExtraSpace(vector<int> a1, vector<int> a2) {
	int m, n, i = 0 , j = 0 , k = 0;
	cin >> m >> n;
	vector<int> a3(m + n);
	while (i < m && j < n) {
		if (a1[i] < a2[j]) {
			a3[k] = a1[i];
			i++;
		}
		else {
			a3[k] = a2[j];
			j++;
		}
		k++;
	}
	while (i < m) {
		a3[k] = a1[i];
		i++; k++;
	}
	while (j < n) {
		a3[k] = a2[j];
		j++; k++;
	}
	return a3;
}

//GAP Algo
void gapAlgo(vector<int> a1, vector<int> a2) {
	int size = a1.size() + a2.size();
	int gap = (size / 2 ) + (size % 2);
	//cout << "Gap::" << gap;
	while (gap >= 1) {
		//cout << "Gap::" << gap << ed;
		int f = 0, l = f + gap;
		while (true) {
			//cout << "f:::" << f << "l:::" << l << ed;
			if (l < a1.size()) {
				if (a1[f] > a1[l]) {
					swap(a1[f], a1[l]);
				}
			}
			else if (f < a1.size() && l >= a1.size()) {
				//cout << "::::" << a1[f] << "dfdsf" << a2[l - a1.size()];
				if (a1[f] > a2[l - a1.size()]) {

					swap(a1[f], a2[l - a1.size()]);
				}
			}
			else if (f >= a1.size()) {
				if (a2[f - a1.size()] > a2[l - a1.size()]) {
					swap(a2[f - a1.size()], a2[l - a1.size()]);
				}
			}
			f = f + 1;
			l = l + 1;
			if (l > size - 1) {
				gap = gap / 2;
				break;
			}
		}
	}


	//cout << endl << "output";
	f(x, a1.size()) {
		cout << a1[x] << " :";
	}
	f(x, a2.size()) {
		cout << a2[x] << " :";
	}
	return;
}

//main function
int main() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
	vector<int> a1, a2;
	a1 = {1, 5, 9, 10, 15, 20};
	a2 = {2, 3, 8, 13};
	vector<int> sol;
	gapAlgo(a1, a2);


}