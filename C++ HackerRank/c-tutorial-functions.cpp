//Author : Sarvesh
#include <bits/stdc++.h>
using namespace std;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
int max_of_four(int a, int b, int c, int d)
{

    if (a > b && a > c && a > d)
    {
        return a;
    }
    else if (b > a && b > c && b > d)
    {
        return b;
    }
    else if (c > a && c > b && c > d)
    {
        return c;
    }
    else
    {
        return d;
    }
}
int main()
{
    int a, b, c, d;cin>>a>>b>>c>>d;
    cout << max_of_four(a, b, c, d);
}
