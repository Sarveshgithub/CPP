#include <iostream>
#include "vector.h"
using namespace std;

void Point::offset(double offsetX, double offsetY)
{
    x += offsetX;
    y += offsetY;
}
void Point::print()
{
    cout << "(" << x << "," << y << ")";
}
void Vector::offset(double offsetX, double offsetY)
{
    start.offset(offsetX, offsetY);
    end.offset(offsetX, offsetY);
}
void Vector::print()
{
    start.print();
    cout << " -> ";
    end.print();
    cout << endl;
}

int main()
{
    Vector v1;
    v1.start.x = 10.2;
    v1.start.y = 23.4;
    v1.end.x = 10.5;
    v1.end.y = 23.9;
    v1.print();
    v1.offset(1,1);
    v1.print();
}