//Author : Sarvesh
#include <bits/stdc++.h>
using namespace std;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
int main()
{
    int s, q, element, row, col, **a;
    cin >> s >> q;
    a = new int *[s];
    int o[q];
    for (int i = 0; i < s; ++i)
    {
        cin >> element;
        a[i] = new int[element];
        for (int j = 0; j < element; j++)
        {
            cin >> a[i][j];
        }
    }
    f(i, q)
    {
        cin >> row >> col;
        o[i] = a[row][col];
    }
    f(i, q)
    {
        cout << o[i] << endl;
    }
}