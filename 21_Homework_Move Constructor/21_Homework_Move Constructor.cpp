
#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(short x, short y)
{
    COORD pos = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

class Point
{
    int x;
    int y;

public:
    Point() : x(0), y(0) {}
    Point(int x, int y) : x(x), y(y) {}

    void Print() const
    {
        cout << "(" << x << ", " << y << ")";
    }

    Point& operator ++()
    {
        ++x;
        ++y;
        return *this;
    }
    Point& operator --()
    {
        --x;
        --y;
        return *this;
    }
    Point operator !() const
    {
        return Point(-x, -y);
    }

    friend bool operator >(const Point& a, const Point& b)
    {
        return (a.x * a.x + a.y * a.y) > (b.x * b.x + b.y * b.y);
    }
    friend bool operator <(const Point& a, const Point& b)
    {
        return (a.x * a.x + a.y * a.y) < (b.x * b.x + b.y * b.y);
    }

    int getX() const { return x; }
    int getY() const { return y; }

};

class Vector
{
    Point* points;
    int countPoint;

public:
    Vector() : points(nullptr), countPoint(0) {}
    Vector(const Vector& other)
    {
        countPoint = other.countPoint;
        points = new Point[countPoint];
        for (int i = 0; i < countPoint; i++)
        {
            points[i] = other.points[i];
        }
    }
    Vector(Vector&& other) noexcept
    {
        countPoint = other.countPoint;
        points = other.points;
        other.points = nullptr;
        other.countPoint = 0;
    }

    Vector& operator =(const Vector& other)
    {
        if (this != &other)
        {
            delete[] points;
            countPoint = other.countPoint;
            points = new Point[countPoint];
            for (int i = 0; i < countPoint; i++)
            {
                points[i] = other.points[i];
            }
        }
        return *this;
    }
    Vector& operator =(Vector&& other) noexcept
    {
        if (this != &other)
        {
            delete[] points;
            countPoint = other.countPoint;
            points = other.points;
            other.points = nullptr;
            other.countPoint = 0;
        }
        return *this;
    }

    ~Vector()
    {
        delete[] points;
    }

    void Add(const Point& p)
    {
        Point* temp = new Point[countPoint + 1];
        for (int i = 0; i < countPoint; i++)
        {
            temp[i] = points[i];
        }
        temp[countPoint] = p;
        delete[] points;
        points = temp;
        countPoint++;
    }
    void Print() const
    {
        for (int i = 0; i < countPoint; i++)
        {
            gotoxy(points[i].getX(), points[i].getY());
            cout << "*";
        }
        gotoxy(0, countPoint + 2);
    }
};



int main()
{
    Point p1(2, 3), p2(-1, -1);
    cout << "p1: "; p1.Print(); cout << endl;
    cout << "p2: "; p2.Print(); cout << endl;

    ++p1;
    cout << "++p1: ";
    p1.Print(); cout << endl;

    --p2;
    cout << "--p2: "; p2.Print(); cout << endl;

    Point p3 = !p2;
    cout << "!p2: "; p3.Print(); cout << endl;

    if (p1 > p2)
        cout << "p1 > p2\n";
    else
        cout << "p1 <= p2\n";


    cout << endl; cout << endl; cout << endl;

    Vector v;
    v.Add(Point(5, 5));
    v.Add(Point(10, 10));
    v.Add(Point(15, 15));

    v.Print();

    gotoxy(0, 25);


}

