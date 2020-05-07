//Author : Sarvesh
#include <bits/stdc++.h>
using namespace std;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
#define ed endl;
int main()
{
    string s1, s2;
    cin >> s1;
    cin >> s2;
    char c1, c2;
    cout << s1.size() << " ";
    cout << s2.size() << ed;
    cout << s1 + s2 << ed;
    c1 = s1[0];
    c2 = s2[0];
    s1[0] = c2;
    s2[0] = c1;
    cout << s1 << " " << s2;
}