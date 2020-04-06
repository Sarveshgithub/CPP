#include <iostream>

using namespace std;

int sum(const int *a, const int size)
{
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total += a[i];
    }
    return total;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int size = sizeof(a) / sizeof(int);
    cout << sum(a, size);
}