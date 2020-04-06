// This is the test code.
#include <iostream>
#define o 1;
using namespace std;

void a(int *num){
*num = *num*2;
}

int main()
{
    int n = 35;
    a(&n);
    cout<< n;
}
