#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    char oddOrEven[] = "Never odd or even";
    char *nthCharPtr = &(oddOrEven[5]);
    oddOrEven[4] = *nthCharPtr;
    char **pointerPtr = &nthCharPtr;

    cout << oddOrEven << endl;
    cout << *nthCharPtr;
}