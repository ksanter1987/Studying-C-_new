

#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y)
{
    COORD coordinate;
    coordinate.X = x;
    coordinate.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinate);
}

struct Coord
{
    int x;
    int y;

    Coord(int x = 0, int y = 0)
    {
        this->x = x;
        this->y = y;
    }
};

class Rectangle1
{
private:
    int width;
    int height;
    char symbol;
    Coord position;
public:
    Rectangle1()
    {
        width = 4;
        height = 3;
        symbol = '*';
        position = Coord(0, 0);
    }
    Rectangle1(int size)
    {
        if (size > 0)
        {
            width = size;
            height = size;
        }
        else
        {
            width = 1;
            height = 1;
        }
        symbol = '#';
        position = Coord(0, 0);
    }
    Rectangle1(int w, int h, char sym = '*', int x = 0, int y = 0)
    {
        if (w > 0)
        {
            width = w;
        }
        else
        {
            width = 1;
        }

        if (h > 0)
        {
            height = h;
        }
        else
        {
            height = 1;
        }

        if (x >= 0)
        {
            position.x = x;
        }
        else
        {
            position.x = 0;
        }

        if (y >= 0)
        {
            position.y = y;
        }
        else
        {
            position.y = 0;
        }

        symbol = sym;
    }

    void Print()
    {
        for (int i = 0; i < height; i++) {
            gotoxy(position.x, position.y + i);
            for (int j = 0; j < width; j++) {
                cout << symbol;
            }
        }
    }
    void Resize(int newHeight, int newWidth)
    {
        if (newHeight > 0 && newWidth > 0)
        {
            height = newHeight;
            width = newWidth;
        }
        else {
            cout << "Wrong parameters, please enter positive" << endl;
        }
    }
    void Reposition(int rx, int ry)
    {
        if ((position.x + rx) >= 0 && (position.y + ry) >= 0)
        {
            position.x += rx;
            position.y += ry;
        }
        else
        {
            cout << "Wrong coordinates" << endl;
        }
    }
};

int main()
{
    system("cls");
    Rectangle1 rect1;
    Rectangle1 rect2(7);
    Rectangle1 rect3(8, 6, '@', 4, 3);

    rect1.Print();
    Sleep(2000);

    system("cls");
    rect2.Print();
    Sleep(2000);

    system("cls");
    rect3.Print();
    Sleep(2000);

    system("cls");
    rect3.Resize(16, 12);
    rect3.Reposition(14, 11);
    rect3.Print();
    Sleep(3000);

    gotoxy(0, 20);













}


