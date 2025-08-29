#include <iostream>
#include <cmath>
using namespace std;

class Shape
{
protected:
    string name;
    string type;
public:
    Shape(string n, string t) : name(n), type(t) {}

    virtual void Show() = 0;
    virtual double GetArea() = 0;

};

class Rectangle : public Shape
{
    double width, height;
public:
    Rectangle(double w, double h) : Shape("Rectangle", "Quadrangle")
    {
        this->width = (w > 0) ? w : 1;
        this->height = (h > 0) ? h : 1;
    }

    void Show() override
    {
        cout << "Shape: " << name << " (" << type << "), width = " << width << ", height = " << height << endl;
    }

    double GetArea() override
    {
        return width * height;
    }
};

class Circle : public Shape
{
    double radius;
public:
    Circle(double r) : Shape("Circle", "Circle")
    {
        this->radius = (r > 0) ? r : 1;
    }

    void Show() override
    {
        cout << "Shape: " << name << " (" << type << "), radius = " << radius << endl;
    }

    double GetArea() override
    {
        const double PI = 3.14;
        return PI * radius * radius;
    }
};

class RightTriangle : public Shape
{
    double sideA, sideB;
public:
    RightTriangle(double a, double b) : Shape("Right Triangle", "Triangle")
    {
        this->sideA = (a > 0) ? a : 1;
        this->sideB = (b > 0) ? b : 1;
    }

    void Show() override
    {
        cout << "Shape: " << name << " (" << type << "), sides = " << sideA << ", " << sideB << endl;
    }

    double GetArea() override
    {
        return 0.5 * sideA * sideB;
    }
};

class SimpleTriangle : public Shape
{
    double sideA, sideB, sideC;
public:
    SimpleTriangle(double a, double b, double c) : Shape("Simple Triangle", "Triangle")
    {
        this->sideA = (a > 0) ? a : 1;
        this->sideB = (b > 0) ? b : 1;
        this->sideC = (c > 0) ? c : 1;
    }

    void Show() override {
        cout << "Shape: " << name << " (" << type << "), sides = " << sideA << ", " << sideB << ", " << sideC << endl;
    }

    double GetArea() override {
        double p = (sideA + sideB + sideC) / 2.0;
        double s = p * (p - sideA) * (p - sideB) * (p - sideC);

        if (s <= 0) return 0;
        return sqrt(s);
    }
};
class Trapezoid : public Shape
{
    double baseA, baseB, height;
public:
    Trapezoid(double a, double b, double h) : Shape("Trapezoid", "Quadrangle")
    {
        this->baseA = (a > 0) ? a : 1;
        this->baseB = (b > 0) ? b : 1;
        this->height = (h > 0) ? h : 1;
    }

    void Show() override
    {
        cout << "Shape: " << name << " (" << type << "), bases = " << baseA << ", " << baseB << ", height = " << height << endl;
    }

    double GetArea() override
    {
        return 0.5 * (baseA + baseB) * height;
    }
};
void TestShape(Shape& s)
{
    s.Show();
    cout << "Area = " << s.GetArea() << endl;
    cout << "---------------------------------------------------------" << endl;
}

int main()
{
    Rectangle r(5, 10);
    Circle c(7);
    RightTriangle rt(3, 4);
    SimpleTriangle st(3, 4, 5);
    Trapezoid tr(6, 10, 5);

    TestShape(r);
    TestShape(c);
    TestShape(rt);
    TestShape(st);
    TestShape(tr);
}

