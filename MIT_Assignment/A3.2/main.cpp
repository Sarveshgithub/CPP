#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int total = 0;
    int min = a[0];
    int max = a[0];
    int pos = 0;
    for (int i = 0; i < n; i++)
    {
        total += a[i];
        if (a[i] < min)
        {
            min = a[i];
            pos = i;
        }
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    cout << "Mean : " << (double)total / n << endl;
    cout << "Min : " << min << endl;
    cout << "Max : " << max << endl;
    cout << "Range : " << (max - min) << endl;
}