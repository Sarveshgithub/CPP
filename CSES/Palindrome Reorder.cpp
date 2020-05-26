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
    ll size = s.size();
    string f = "", e = "";
    map<char, string> m;
    f(c, size) {
        if (m.count(s[c])) {
            m[s[c]] += s[c];
        } else {
            m[s[c]] = s[c];
        }
    }
    int c = 0;
    string u = "";
    for (auto i : m) {
        if (i.second.size() % 2 == 1) {
            ++c;
            u = i.second;
        }
        if (c > 1) {
            cout << "NO SOLUTION\n";
            return 0;
        }
        if (i.second.size() % 2 == 0) {
            f = f + i.second.substr(0, i.second.length() / 2);
            e = i.second.substr(0, i.second.length() / 2) + e;
        }
    }
    cout << f << u << e << '\n';
}