//http://codeforces.com/problemset/problem/59/A
#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    bool isUpper;
    int s = 0, l = 0;
    string str;
    getline(cin, str);
    for (int i = 0; i <= str.length(); i++)
    {
        if (isupper(str[i]))
        {
            ++l;
        }
        else if (islower(str[i]))
        {
            ++s;
        }
    }
    if (l == s || s > l)
    {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
    }
    else if (l > s)
    {
        transform(str.begin(), str.end(), str.begin(), ::toupper);
    }

    cout << str;
}