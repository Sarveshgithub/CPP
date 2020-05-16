//Author : Sarvesh
#include <bits/stdc++.h>
using namespace std;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
#define ed endl;
vector<int> numbs = {1, 2, 3};
vector<int> permutation;
vector<vector<int>> allsubSets;
int n = 3;
bool chosen[4];

void search() {
    if (permutation.size() == n) {
    vector<int>::iterator it;
            for (it = permutation.begin(); it != permutation.end(); ++it)
            {
                cout << *it << " ";
            }
            cout << '\n';
    } else {
        for (int i = 1; i <= n; i++) {
            if (chosen[i]) continue;
            chosen[i] = true;
            permutation.push_back(i);
            cout<<"--before::"<<i<<"-array::"<<chosen[i]<<"-permutation-"<<permutation.size()<<'\n';
            search();
            cout<<"--here::"<<i<<"-array::"<<chosen[i]<<"-permutation-"<<permutation.size()<<'\n';
            chosen[i] = false;
            permutation.pop_back();
            cout<<"--after::"<<i<<"-array::"<<chosen[i]<<"-permutation-"<<permutation.size()<<'\n';
        }
    }
}

int main()
{
    search();
}