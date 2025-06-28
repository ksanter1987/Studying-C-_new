// Lesson_7_Matrix in functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
const int COLS = 3;
void printMatrix(const int[][] m, int rows, int cols);

int maxInMatrix(const int m[][COLS], int rows, int cols = COLS);

int main()
{
    const int ROWS = 4
        int m[ROWS][COLS]{
            {1,2,3},
            {10,20}, // 10, 20, 0
            {100,200,300},
            {-1,-2}
    }
}

void printMatrix(const int m[][COLS], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; i < cols; i++)
        {
            cout << "\t" << m[i][j];
        }
        cout << endl;
    }
}
int maxInMatrix(const int m[][COLS], int rows, int cols)
{
    int max = m[0][0];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (m[i][j] > max)
                max = m[i][j];

        }
    }
}
