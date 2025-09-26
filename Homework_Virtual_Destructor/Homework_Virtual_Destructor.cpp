
#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
using namespace std;

struct Point
{
    int x, y;
};

void gotoxy(int x, int y)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos = { (SHORT)x, (SHORT)y };
    SetConsoleCursorPosition(hConsole, pos);
}

class Shape
{
protected:
    string type;
public:
    Shape(const string& t) : type(t) {}

    virtual void Print() const = 0;
    virtual void Save(ofstream& fout) const = 0;
    virtual ~Shape() {}
};

class Line : public Shape
{
    Point p1, p2;
public:
    Line(Point a, Point b) : Shape("Line"), p1(a), p2(b) {}

    void Print() const override
    {
        gotoxy(p1.x, p1.y);
        cout << "*";
        gotoxy(p2.x, p2.y);
        cout << "*";
    }

    void Save(ofstream& fout) const override
    {
        fout << type << ": (" << p1.x << "," << p1.y << ") -> (" << p2.x << "," << p2.y << ")\n";
    }

    ~Line() {}
};

class MyRectangle : public Shape
{
    Point topLeft;
    int width, height;
public:
    MyRectangle(Point tl, int w, int h) : Shape("Rectangle"), topLeft(tl), width(w), height(h) {}

    void Print() const override
    {
        gotoxy(topLeft.x, topLeft.y); cout << "+";
        gotoxy(topLeft.x + width, topLeft.y); cout << "+";
        gotoxy(topLeft.x, topLeft.y + height); cout << "+";
        gotoxy(topLeft.x + width, topLeft.y + height); cout << "+";
    }

    void Save(ofstream& fout) const override
    {
        fout << type << ": (" << topLeft.x << "," << topLeft.y << "), w=" << width << ", h=" << height << "\n";
    }

    ~MyRectangle() {}
};

class MyPolyline : public Shape
{
    Point* points;
    int count;
public:
    MyPolyline(Point* arr, int n) : Shape("Polyline"), count(n)
    {
        points = new Point[count];
        for (int i = 0; i < count; i++)
        {
            points[i] = arr[i];
        }
    }

    void Print() const override
    {
        for (int i = 0; i < count; i++)
        {
            gotoxy(points[i].x, points[i].y);
            cout << "*";
        }
    }

    void Save(ofstream& fout) const override
    {
        fout << type << ": ";
        for (int i = 0; i < count; i++)
        {
            fout << "(" << points[i].x << "," << points[i].y << ")";
            if (i < count - 1) fout << " -> ";
        }
        fout << "\n";
    }

    ~MyPolyline()
    {
        delete[] points;
    }
};

int main()
{
    Point a{ 5, 5 }, b{ 15, 5 };
    Shape* line = new Line(a, b);

    Point r{ 10, 10 };
    Shape* rect = new MyRectangle(r, 8, 4);

    Point polyArr[4] = { {2,2}, {4,4}, {6,2}, {8,4} };
    Shape* poly = new MyPolyline(polyArr, 4);

    ofstream fout("shapes.txt");

    line->Print();
    rect->Print();
    poly->Print();

    line->Save(fout);
    rect->Save(fout);
    poly->Save(fout);

    fout.close();

    delete line;
    delete rect;
    delete poly;

    gotoxy(0, 20);
    cout << "\nThe shapes are output to the console and saved to a file shapes.txt\n";



}



