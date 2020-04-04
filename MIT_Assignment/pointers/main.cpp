#include <iostream>
#include <stdio.h>
#define ed endl;
using namespace std;

int main()
{
    int a = 10;
    int *p;
    p = &a;
    int **q;
    q = &p;
    int ***r;
    r = &q;
    *p = 11;
    cout<<"value of a : "<<a <<ed;
    cout<<"p pointer val :"<<*p<<ed;
    cout<<"p pointer val :"<<**q<<ed;
    cout<<"p pointer val :"<<***r<<ed;
}