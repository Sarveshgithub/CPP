//https://codeforces.com/problemset/problem/110/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long x;
    int s =0;
    int rem; 
    cin >> x;
    while (x > 0)
    {
        rem = x % 10;
        if (rem == 4 || rem == 7)
        {
            ++s;
        }
        x = x/10;
    }
    if (s == 4 || s == 7)
        cout << "YES";
    else
        cout << "NO";
}