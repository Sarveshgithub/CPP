#include <iostream>
#include <stdio.h>
#define ed endl;
using namespace std;

int main()
{
    int a = 10;
    int *p = &a;

    cout<<"value of a : "<<a <<ed;
    cout<<"Address of a : "<<&a <<ed;
    cout<<"p pointer val :"<<p<<ed;
}