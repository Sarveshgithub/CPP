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

    vector<int> input = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
    int sum = 0, maxVal = input[0];
    for (int i = 0 ; i < input.size(); i++) {
        sum = sum + input[i];
        maxVal = max(sum, maxVal);
        if (sum < 0) {
            sum = 0;
        }
    }
    cout << maxVal;
    //cout << sum;
}