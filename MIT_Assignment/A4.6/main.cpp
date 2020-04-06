#include <iostream>

using namespace std;

int sum(const int *a, const int size)
{
    return size == 0 ? 0 : *a + sum(a+1,size-1);
}
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int size = sizeof(a) / sizeof(int);
    cout << sum(a, size);
}