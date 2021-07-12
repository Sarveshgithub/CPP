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
	vector<int> a1,a2;
	int m,n,input, i = 0 , j = 0 , k = 0;
	cin >>m>>n;
	int a3[m+n];
	f(x,m){
		cin >> input;
		a1.push_back(input);
		// cout<<"a1"<<x<<": "<<a1[x];
	}
	cout <<ed;
	f(x,n){
		cin >> input;
		a2.push_back(input);
		//cout<<"a2"<<x<<": "<<a2[x];
	}
	while(i < m && j < n){
		if(a1[i] < a2[j]){
			a3[k] = a1[i];
			i++;
		}
		else {
			a3[k] = a2[j];
			j++;
		}
		k++;
	}
	// f(x,m+n){
	// 	cout<<a3[x] << " ";
	// }
	while(i < m){
		a3[k] = a1[i];
		i++; k++;
	}
	while(j < n){
		a3[k] = a2[j];
		j++; k++;
	}
	f(x,m+n){
		cout<<a3[x] << " ";
	}
}