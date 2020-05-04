//Author : Sarvesh
#include <bits/stdc++.h>
using namespace std;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
void update(int *a,int *b){
    int tempAdd = *a + *b;
    int tempSub=  *a - *b;
    *a = tempAdd;
    *b = abs(tempSub);
}

int main(){
    int a,b;
    cin >>a >>b;
    update(&a,&b);
    cout<<a<<endl<<b;
}