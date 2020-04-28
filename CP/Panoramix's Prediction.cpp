//https://codeforces.com/problemset/problem/80/A
//Author : Sarvesh
#include <bits/stdc++.h>
using namespace std;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
#define f2(x, n) for (int x = 2; x <= n; ++x)
int main()
{
    int n, p,t;
    cin >> n >> p;
    n++;
    bool isPrime;
    bool isYes = true;
    while (n <= p)
    {
        isPrime = true;
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime == true)
        {
            isYes = false;
            break;
        }
        n++;
    }
    if(n == p){
        isYes == true;
    }
    cout << (isYes ? "NO" : "YES");
}
//