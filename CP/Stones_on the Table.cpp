// https://codeforces.com/problemset/problem/266/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n, c = 0;
    cin >> n;
    getline(cin.ignore(), s);
    char fc = s[0];
    for (int i = 1; i <= s.length(); i++)
    {
        if (s[i] == fc)
        {
            ++c;
        }
        else{
            fc = s[i];
        }
    }
    cout << c;
}