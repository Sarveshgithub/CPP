//http://codeforces.com/problemset/problem/275/A
#include <iostream>
#define f(x, n) for (int i = 0; i < n; ++i)
#define f1(x, n) for (int i = 1; i <= n; ++i)
using namespace std;
int main()
{
    int o[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int n;
            cin >> n;
            int val;
            if (n > 0)
            {
                val = n % 2 == 0 ? 1 : 0;
                //cout << "valLLLL" << val << endl;
                o[i][j] = val;
                if (i == 0)
                {
                    if (j == 0)
                    {
                        o[i][j + 1] = val;
                        o[i + 1][j] = val;
                    }
                    if (j == 1)
                    {
                        o[i][j - 1] = val;
                        o[i][j + 1] = val;
                        o[i + 1][j] = val;
                    }
                    if (j == 2)
                    {
                        o[i][j - 1] = val;
                        o[i + 1][j] = val;
                    }
                }
                if (i == 1)
                {
                    if (j == 0)
                    {
                        o[i - 1][j] = val;
                        o[i + 1][j] = val;
                        o[i][j + 1] = val;
                    }
                    if (j == 1)
                    {
                        o[i][j - 1] = val;
                        o[i][j + 1] = val;
                        o[i - 1][j] = val;
                        o[i + 1][j] = val;
                    }
                    if (j == 2)
                    {
                        o[i][j - 1] = val;
                        o[i + 1][j] = val;
                        o[i + 1][j] = val;
                    }
                }
                if (i == 2)
                {
                    if (j == 0)
                    {
                        o[i - 1][j] = val;
                        o[i][j + 1] = val;
                    }
                    if (j == 1)
                    {
                        o[i][j - 1] = val;
                        o[i][j + 1] = val;
                        o[i - 1][j] = val;
                    }
                    if (j == 2)
                    {
                        o[i][j - 1] = val;
                        o[i - 1][j] = val;
                    }
                }
            }
        }
    }
    // cout << endl
    //    << "OUTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << o[i][j];
        }
        cout << endl;
    }
}