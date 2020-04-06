#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cmath>

using namespace std;

int computePi(int n)
{
    srand(time(0));
    int dartInCircle = 0;
    for (int i = 0; i < n; i++)
    {
        double x = rand() / (double)RAND_MAX, y = rand() / (double)RAND_MAX;
        if (sqrt(x * x + y * y) < 1)
        {
            ++dartInCircle;
        }
    }
    return dartInCircle / static_cast<double>(n) * 4;
}

int main()
{
    int n;
    cin >> n;
    cout << computePi(n);
}