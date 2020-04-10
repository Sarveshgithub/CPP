#include <iostream>
using namespace std;

class Point
{
public:
    double x, y;
};

class Vector
{
public:
    Point start, end;
};

int main()
{
    Vector v1;
    v1.start.x = 3.0;
    v1.start.y = 4.0;
    Vector v2;
    v2.start = v1.start;
    v2.start.x = 7.0;
    cout << v1.start.x << " ";
    cout << v1.start.y << endl;
    cout << v2.start.x << " ";
    cout << v2.start.y << endl;
}