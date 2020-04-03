#include <iostream>
using namespace std;
int a, b;
double a1, b1;
int sumInt()
{
    return a + b;
}

double sumDouble()
{
    return a1 + b1;
}
int main()
{
    cout << "Enter integer numbers" << endl;
    cin >> a >> b;
    cout << "Sum of int:" << sumInt() << endl;
    cout << "Enter float numbers" << endl;
    cin >> a1 >> b1;
    cout << "Sum of float:" << sumDouble() << endl;
}
