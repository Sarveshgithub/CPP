#include <iostream>
using namespace std;
void printArray(const int *a, const int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i];
        if (i != size - 1)
        {
            cout << ",";
        }
    }
}

void reverseArray(int *a, const int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        int temp = a[i];
        a[i] = a[size - i - i];
        a[size - i - 1] = temp;
    }
}
void printmatrix(int arr[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
    cout<<endl;
}
void transposeMatrix()
{
    int m2d_i[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int m2d_o[3][3];
    printmatrix(m2d_i);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            m2d_o[j][i] = m2d_i[i][j];
        }
    }
    printmatrix(m2d_o);
}

int main()
{
    int a[] = {1, 2, 3, 4, 5}, size = sizeof(a) / sizeof(int);
    // reverseArray(a, size);
    //  printArray(a, size);
    transposeMatrix();
}