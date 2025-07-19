
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


template<typename T>
class List
{
    struct Node
    {
        T value;
        Node* next;
        Node(T val, Node* next = nullptr) : value(val), next(next) {}
    };
    
    Node* head;

public:
    List() : head(nullptr) {}
    ~List()
    {
        Node* current;
        while (head != nullptr)
        {
            current = head;
            head = head->next;
            delete current;
        }
    }

    void Print() const
    {
        Node* current = head;
        while (current != nullptr)
        {
            cout << current->value << " ";
            current = current->next;
        }
        cout << endl;
    }
    void AddToHead(const T& value)
    {
        Node* newNode = new Node(value, head);
        head = newNode;
    }
    void AddToTail(const T& value)
    {
        Node* newNode = new Node(value, nullptr);
        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            Node* current = head;
            while (current->next != nullptr)
            {
                current = current->next;
            }
            current->next = newNode;
        }
    }
    void DeleteFromHead()
    {
        if (head == nullptr) return;
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    void DeleteFromTail()
    {
        if (head == nullptr) return;
        if (head->next == nullptr)
        {
            delete head;
            head = nullptr;
        }
        else
        {
            Node* current = head;
            while (current->next->next != nullptr)
            {
                current = current->next;
            }
            delete current->next;
            current->next = nullptr;
        }
    }

    Node* getHead() const { return head; }
};

class Vector
{
    List<Point> points;
    int countPoint;

public:
    Vector() : countPoint(0) {}
    void AddToHead(const Point& p)
    {
        points.AddToHead(p);
        countPoint++;
    }
    void AddToTail(const Point& p)
    {
        points.AddToTail(p);
        countPoint++;
    }
    void DeleteFromHead()
    {
        points.DeleteFromHead();
        if (countPoint > 0) countPoint--;
    }
    void DeleteFromTail()
    {
        points.DeleteFromTail();
        if (countPoint > 0) countPoint--;
    }
    void Print() const
    {
        auto node = points.getHead();
        while (node != nullptr)
        {
            gotoxy(node->value.getX(), node->value.getY());
            cout << "*";
            node = node->next;
        }
        gotoxy(0, countPoint + 2);
    }

};

int main()
{
    Vector v;
    v.AddToHead(Point(3, 3));
    v.AddToTail(Point(10, 10));
    v.AddToTail(Point(15, 5));

    v.Print();

    gotoxy(0, 25);
}


