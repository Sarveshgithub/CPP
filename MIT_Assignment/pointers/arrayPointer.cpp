#include<iostream>
#include<stdio.h>
using namespace std;
int sum(int *A,int size){
    int sum = 0;
    while (size--)
    {
        sum += A[size];
    }
    return sum;
}
int main(){
    int a[] = {1,2,3,4,5};
    int size = sizeof(a)/sizeof(int);
    int (*sumPtr)(int *,int) = sum;
    cout<<sumPtr(a,size);

}