// This is the test code.
#include <iostream>
#define o 1;
using namespace std;

int main()
{
    char s[] = "Hello,World!";
    for(int i =0 ; i < sizeof(s);i++){
        cout << s[i] << " ";
    }
}