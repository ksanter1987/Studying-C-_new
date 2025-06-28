

#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;

void SetColor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void SetPos(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

int main()
{
    double x = -5, y = 2.7, z = 3.14;
    cout << setw(5) << x << endl;
    cout << setw(5) << y << endl;
    cout << setw(5) << z << endl;


    const int row = 5, col = 7;
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = rand() % 100;
            cout << setw(4) << arr[i][j] << " ";
        }
        cout << endl;
    }


    //for (int i = 0; i < 256; i++)
    //{
    //    cout << "code = " << i << "char symbol [ " << (char)i << " ]" << endl;
    //}



    for (int i = 0; i < 15; i++)
    {
        SetColor(i);
        cout << "Hello world!!!" << endl;
    }
    SetColor(7);
    cout << "Hello world!!!" << endl;
    SetColor(5); cout << "Hello world!!!" << endl; SetColor(7);
    cout << "Hello world!!!" << endl;
    cout << "Hello world!!!" << endl;
    cout << "Hello world!!!" << endl;
    SetPos(5, 5); cout << "Hello world!!!" << endl;
    cout << "Hello world!!!" << endl;

    Sleep(2000);
    system("cls");
    for (int i = 0; i < 100; i++)
    {
        Sleep(1000);
        SetPos(rand() % 25, rand() % 25);
        SetColor(rand() % 15); cout << "*";
    }









}


