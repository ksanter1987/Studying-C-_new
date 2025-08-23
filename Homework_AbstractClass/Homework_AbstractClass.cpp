#include <iostream>
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

    double GetArea() override
    {

    }
};

int main()
{
    
}

