

#include <iostream>
using namespace std;

class Point
{
    int x;
    int y;
public:
    Point() :x(0), y(0) {}
    Point(int value) :x(value), y(value) {}
    Point(int x, int y) : x(x), y(y) {}
    void Print()
    {
        cout << "X : " << x << ". Y : " << y << endl;
    }

    void Plus(const Point& other)const
    {
        Point res(this->x + other.x, this->y + other.y);
        return res;
    }
    void Minus(const Point& other)const
    {
        Point res(this->x - other.x, this->y - other.y);
        return res;
    }

    Point operator +(Point& other)const
    {
        Point res(this->x + other.x, this->y + other.y);
        return res;
    }



    void operator += (const Point& other)
    {
        this->x += other.x;
        this->y += other.y;
        return * this;
    }


    Point operator -()const
    {
        return Point(-this.x, -this.y);
    }
    Point operator =(const Point& other)
    {
        this->x = other.x;
        this->y = other.y;
        return *this;
    }

    bool operator <(const Point& other)
    {
        //if ((this->x + this->y) < (other.x + other.y))
        //    return true;
        //else
        //    return false;
        return ((this->x + this->y) < (other.x + other.y));
    }

    bool operator ==(const Point& other)
    {

        return ((this->x == this->y) && (other.x == other.y));
    }

    bool operator !=(const Point& other)
    {

        //return ((this->x != this->y) || (other.x != other.y));
        return !(*this == other);
    }

    //prefix form increment
    Point operator ++()
    {
        this->x++;
        this->y++;
        return *this;
    }
    //prefix form decrement
    Point operator --()
    {
        this->x--;
        this->y--;
        return *this;
    }
    //postfix form increment
    Point operator ++()(int a)//фіктивний оператор, показує що тут постфіксний оператор
    {
        ++this->x;
        ++this->y;
        return *this;
    }
    //postfix form decrement
    Point operator --()(int a)
    {
        --this->x;
        --this->y;
        return *this;
    }

    void getX()const
    {
        return x;
    }
    void getY()const
    {
        return y;
    }
    void setX(int newX)
    {
        this->x = newX;
    }
    void setY(int newY)
    {
        this->y = newY;
    }

    friend Point operator ++(Point& point);
    friend bool operator > (const Point& first, const Point& second);
    friend ostream& operator << (ostream& out, const Point& other);
    friend istream& operator >> (istream& in, Point& other);
};

    ostream& operator << (ostream& out, const Point& other)
    {
        out << "X : " << other.x << endl;
        out << "Y : " << other.y << endl;
        return out;
    }

    istream& operator >> (istream& in, Point& other)
    {
        in >> other.x;
        in >> other.y;
        return in;
    }


    bool operator > (const Point& first, const Point& second)
    {
        return (((first.getX() + first.getY()) > (second.getX() + second.getY()))
    }
  /*  Point operator ++(Point & point)
    {
        point.setX(point.getX() + 1);
        point.setY(point.getY() + 1);
        return point;
    }*/

    Point operator ++(Point& point) //friend function
    {
        point.x++;
        point.y++;
        return point;
    }


int main()
{
    // ++ -- - + ! uno operators
    // binary operators = + - *  / % > <

    Point p1(2, 7);
    Point p2(1, 4);

    //p1++; //p1++ = p1 +1
    //++p1;

    cin >> p1 >> p2;
    cout << p1;

    cout << "Point p1 : "; p1.Print();
    cout << "Point p2 : "; p2.Print();
    Point res;

    res = p1.Plus(p2);
    res.Print();
    p2.Plus(p1);


    int a = 5, b = 7;
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << p1 + p2 << endl;
    cout << p1 - p2 << endl;
    cout << p1 * p2 << endl;



    res = p1.operator+(p2);
    res.Print();

    res = p1 + p2;
    cout << "Point p1 : "; p1.Print();
    cout << "Point p2 : "; p2.Print();

    cout << "------------- operator - ------------------"










}


