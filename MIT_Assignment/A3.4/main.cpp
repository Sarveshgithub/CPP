// Get the prime numbers
#include <iostream>
using namespace std;
int main()
{
    while (1)
    {
        int n;
        cin >> n;
        if (n % 5 == 0 && n >= 0)
        {
            cout << n / 5 << endl;
        }
        else if (n < 0)
        {
            cout << "Goodbye!";
            break;
        }
        else
        {
            continue;
        }
    }
}
