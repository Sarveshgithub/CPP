//https://codeforces.com/problemset/problem/110/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, l, rem;
    cin >> n;
    l = to_string(n).length();
    bool isLucky = true;
    for (int i = 0; i < l; i++)
    {
        rem = n % 10;
        if ((rem == 7 || rem == 4) && l == 1)
        {
            isLucky = false;
            break;
        }
        if (rem != 4 && (rem != 7))
        {
            isLucky = false;
            break;
        }
        n = n / 10;
    }

    cout << (isLucky ? "YES" : "NO");
}