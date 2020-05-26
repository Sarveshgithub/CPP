//Author : Sarvesh
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
#define ed endl;
int main() {
    string s;
    getline(cin, s);
    int asci[26] = {};
    ll size = s.size();
    string f = "", e = "";
    map<char,int> alpha;
    char uniqe;
    f(c, size) {
        if (asci[90 - int(s[c])] >= 1) {
            asci[90 - int(s[c])] += 1;
        } else {
            uniqe = s[c];
            asci[90 - int(s[c])] = 1;
        }
        if (asci[90 - int(s[c])] % 2 == 0) {
            f = f + s[c];
            e.insert(0, 1, s[c]);
        }
    }
    cout << f << uniqe << e << '\n';
    cout << "unique::" << uniqe;
}