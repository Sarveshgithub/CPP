#include <iostream>
using namespace std;
int length(char *str)
{
    int size = 0;
    for (int i = 0; i < str[i] != '\0'; i++)
    {
        size++;
    }
    return size;
}
void swapByPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swapByRef(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void swap(int *(*ptr1), int *(*ptr2))
{
    int *temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
int main()
{
    char str[] = "Sarvesh";
    cout << length(str) << endl;
    int a = 10, b = 20;
    int c = 30, d = 40;
    swapByPointer(&a, &b);
    swapByRef(c, d);
    cout << a << b << endl;
    cout << c << d << endl;
    int x = 5, y = 6;
    int *ptr1 = &x, *ptr2 = &y;
    swap(&ptr1, &ptr2);
    cout << *ptr1 << *ptr2 << endl;
}