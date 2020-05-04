//Author : Sarvesh
#include <bits/stdc++.h>
using namespace std;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
int main()
{
    int size;
    cin >> size;
    int a[size];
    // for read the vlaues
    f(x, size)
    {
        cin >> a[x];
    }
    //out the array in reverse order
    for (int i = size-1; i >= 0; i--)
    {
        cout << a[i]<< " ";
    }
}