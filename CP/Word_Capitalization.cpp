//http://codeforces.com/problemset/problem/110/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    if (islower(s[0]))
    {
        s[0] = toupper(s[0]);
    }
    cout << s;
}
