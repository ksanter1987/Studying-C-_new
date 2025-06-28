#include "Point.h"


int main()
{
    Point x(2, 5);
    Point y(-3, -3);
    Point z;
    Point w(1, 1);

    cout << "Point X: ";
    x.Print();

    cout << "Point Y: ";
    y.Print();

    cout << "Point Z: ";
    z.Print();
    
    cout << "Point W: ";
    w.Print();

    cout << "\nIncreasing Point X: ";
    ++x;
    x.Print();

    cout << "\nDecreasing Point Y: ";
    --y;
    y.Print();

    cout << "\nReverse Point X: ";
    Point a = !x;
    a.Print();

    cout << "\nCompare X & Y:" << endl;
    x.Print();
    y.Print();
    if (x > y)
        cout << "X > Y" << endl;
    else if (x < y)
        cout << "X < Y" << endl;
    else
        cout << "Same distance" << endl;

    cout << "\nCompare W & X:" << endl;
    w.Print();
    x.Print();
    if (w > x)
        cout << "W > X" << endl;
    else if (w < x)
        cout << "W < X" << endl;
    else
        cout << "Same distance" << endl;


}


