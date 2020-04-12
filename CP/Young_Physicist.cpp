// Author - Sarvesh.
// Prob - https://codeforces.com/problemset/problem/69/A
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x = 0 , y = 0, z = 0;
    for (int i = 0; i < n; i++)
    {
        int x1, y1, z1;
        cin >> x1;
        cin >> y1;
        cin >> z1;
        x += x1;
        y += y1;
        x += z1;    
    }
    cout << (x == y == z == 0 ? "YES" : "NO");
}