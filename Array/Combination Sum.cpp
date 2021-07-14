//Author : Sarvesh
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
#define ed endl;

void combinationSum(int index, int target, vector<int> currentVal, vector<int> candidates, vector<vector<int>> sol) {
    //cout << "i:::" << candidates.size();
    if (index >= candidates.size()) {
        if (target  == 0) {
            //cout << "inside";
            sol.push_back(currentVal);
            for (int i = 0 ; i < currentVal.size(); i++) {
                cout << currentVal[i];
            }
            //cout << ed;
        }
        return;
    }
    if (candidates[index] <= target) {
        currentVal.push_back(candidates[index]);
        target = target - candidates[index];
        combinationSum(index , target, currentVal, candidates, sol);
        currentVal.pop_back();

    }

    combinationSum(index + 1 , target, currentVal, candidates, sol);
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    vector<vector<int>> sol;
    vector<int> currentVal;
    vector<int> candidates = {2, 3, 6, 7};
    int target = 7;
    combinationSum(0, target, currentVal, candidates, sol);
    f(x, sol.size()) {
        for (int i = 0 ; i < sol[x].size(); i++) {
            cout << sol[x][i] << "_";
        }
        cout << ed;
    }
    // cout <<  sol;
}