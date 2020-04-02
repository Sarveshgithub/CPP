//Author : Sarvesh.
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (; n-- > 0;)
    {
        cout << "-----for loop------";
        cout << n << "Hello World!\n";
    }
    cin >> n;
    while (n-- > 0)
    {
        /* code */
        cout << "-----while loop------";
        cout << n << "Hello World!\n";
    }
    cin >> n;
    do
    {
        cout << "----- do while loop------";
        cout << n << "Hello World!\n";
    } while (--n > 0);
}
