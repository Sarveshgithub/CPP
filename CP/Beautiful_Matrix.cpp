// https://codeforces.com/problemset/problem/263/A
#include <iostream>
using namespace std;
int main()
{
    int a;
    for (int i = 1; i <= 5; ++i)
    {
        for (int j = 1; j <= 5; ++j)
        {
            int x, y = 0, input, ans;
            cin >> input;
            y = (i > 1 && i < 5) ? i == 2 ? 1 : i == 3 ? 2 : i == 4 ? 1 : y : y;
            x = j == 4 ? 2 : j == 5 ? 1 : j;
            ans = 5 - x - y;
            if (input == 1)
            {
                a = ans;
                break;
            }
        }
    }
    cout << a;
}