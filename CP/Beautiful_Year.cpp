//https://codeforces.com/problemset/problem/271/A
#include <iostream>
using namespace std;
int main()
{
    int y, a, b, c, d;
    cin >> y; // 1987
    while (1)
    {
        y++;
        a = y / 1000;
        b = y / 100 % 10;
        c = y / 10 % 10;
        d = y % 10;
        
        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
           break;
        }
        
    }
    cout<<a<<b<<c<<d;
}