#include <iostream>
#include <stdio.h>
using namespace std;
void hello(const char *name)
{
    cout << "Hello "<<name;
}
int sum(const int a, const int b)
{
    return a + b;
}
int main()
{
    int c;
    int (*ptr)(const int , const int );
    ptr = &sum;
    c = ptr(2,3);
    cout<<c;
    
    void (*ptr1)(const char*);
    ptr1 = &hello;
    ptr1("sarvesh");
    }