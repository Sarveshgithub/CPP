//Author : Sarvesh
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
#define ed endl;
int main() {
    string s;
    cin >> s;
    vector<string> combination;
    int c = 0;
    sort(s.begin(), s.end());
    do {
        combination.push_back(s);
        ++c;
    } while (std::next_permutation(s.begin(), s.end()));
    cout << c << '\n';
    f(i, combination.size()) {
        cout << combination[i] << '\n';
    }
}