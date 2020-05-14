//Author : Sarvesh
#include <bits/stdc++.h>
using namespace std;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
#define ed endl;
vector<int> numbs = {1, 2, 3};
vector<int> subset;
vector<vector<int>> allsubSets;
int n = 6;
void search(int k)
{
        //process subset
    if (k == n)
    {
        vector<int>::iterator it;
        for (it = subset.begin(); it != subset.end(); ++it)
        {
            cout << *it << " ";
        }
        cout << '\n';
    }
    else
    {
        // include k in the subset
        subset.push_back(k);
        search(k + 1);
        subset.pop_back();
        // don’t include k in the subset
        search(k + 1);
    }
}
int main()
{
    search(1);
}