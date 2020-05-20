//Author : Sarvesh
#include <bits/stdc++.h>
using namespace std;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
#define ed endl;
int main()
{
    long long n;
    cin >> n;
    while (n > 0)
    {
        long long x, y;
        cin >> x >> y;
        if (x > y)
        {
            if (x % 2 == 0)
            {
                cout << x * x - (x - 1) + (x - y);
            }
            else
            {
                cout << x * x - (x - 1) - (x - y);
            }
        }
        else if (x < y)
        {
            if (y % 2 != 0)
            {
                cout << y * y - (y - 1) + (y - x);
            }
            else
            {
                cout << y * y - (y - 1) - (y - x);
            }
        }
        else if (x == 1 && y == 1)
        {
            cout << 1;
        }
        else
        {
            cout << (x * x) - (x - 1);
        }
        cout << "\n";
        --n;
    }
}