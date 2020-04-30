//http://codeforces.com/problemset/problem/61/A
//Author : Sarvesh
#include <bits/stdc++.h>
#include <string>
using namespace std;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
int main()
{
    string n, m, out ="";
    int a, b,s;
    char c;
    getline(cin, n);
    getline(cin, m);
    for (int i = 0; i < n.size(); i++)
    {
        a =  (int)n[i] - 48 ;
        b = (int)m[i] - 48;
        if (a == 1 && b == 1)
        {
            out.push_back('0');
        }
        else
        {
            s = a+b;
            c = s +'0';
            out.push_back(c);
        }
    }

    cout << out;
}