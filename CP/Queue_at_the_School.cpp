//Author : Sarvesh
//https://codeforces.com/problemset/problem/266/B
#include <iostream>
using namespace std;
int main()
{
    int n, t;
    cin >> n;
    cin >> t;
    char s[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> s[i];
    }
    while (t--)
    {
        for (int i = 1; i < n; i++)
        {

            char temp;
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                temp = s[i];
                s[i] = s[i + 1];
                s[i + 1] = temp;
                i++;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << s[i];
    }
}