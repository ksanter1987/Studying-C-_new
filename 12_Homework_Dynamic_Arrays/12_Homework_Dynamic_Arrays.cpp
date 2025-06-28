

#include <iostream>
using namespace std;


void addRow(int**& arr, int& rows, int cols, int* newRow)
{
    int** newArr = new int* [rows + 1];
    newArr[0] = newRow;
    for (int i = 0; i < rows; i++)
        newArr[i + 1] = arr[i];
    delete[] arr;
    arr = newArr;
    rows++;
}

void deleteRow(int**& arr, int& rows)
{
    if (rows == 0) return;
    delete[] arr[0];
    int** newArr = new int* [rows - 1];
    for (int i = 1; i < rows; i++)
        newArr[i - 1] = arr[i];
    delete[] arr;
    arr = newArr;
    rows--;
}

void deleteRowPosition(int**& arr, int& rows, int index)
{
    if (index < 0 || index >= rows) return;
    int** newArr = new int* [rows - 1];
    int j = 0;
    for (int i = 0; i < rows; i++)
    {
        if (i == index)
        {
            delete[] arr[i];
            continue;
        }
        newArr[j] = arr[i];
        j++;
    }
    delete[] arr;
    arr = newArr;
    rows--;
}

void addColPosition(int**& arr, int rows, int& cols, int index, int* newCol)
{
    if (index < 0 || index > cols) return;
    for (int i = 0; i < rows; i++)
    {
        int* newRow = new int[cols + 1];
        int oldCol = 0;
        for (int j = 0; j < cols + 1; j++)
        {
            if (j == index)
            {
                newRow[j] = newCol[i];
            }
            else
            {
                newRow[j] = arr[i][oldCol];
                oldCol++;
            }
        }
        delete[] arr[i];
        arr[i] = newRow;
    }
    cols++;
}

void addColStart(int**& arr, int rows, int& cols, int* newCol)
{
    for (int i = 0; i < rows; i++)
    {
        int* newRow = new int[cols + 1];
        newRow[0] = newCol[i];
        for (int j = 0; j < cols; j++)
        {
            newRow[j + 1] = arr[i][j];
        }
        delete[] arr[i];
        arr[i] = newRow;
    }
    cols++;
}

void printArray(int** arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\n\n" << endl;;
}



int main()
{
    
        //Завдання 1. Написати функцію, що додає рядок двови -
        //мірному масиву на початок.

        //Завдання 2. Написати функцію, що видаляє рядок двови -
        //мірному масиву з початку.

        //Завдання 3. Написати функцію, що видаляє рядок двови -
        //мірному масиву з зазначеної позиції.

        //Завдання 4. Написати функцію, що додає колонку дво -
        //вимірного масиву за вказаним номером.

        //Завдання 5. Написати функцію, що додає колонку дво -
        //вимірного масиву на початок.



    int rows = 4, cols = 4;

    int** arr = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = i * cols + j + 1;
        }
    }

    cout << "Initial array:\n";
    printArray(arr, rows, cols);

    int* newRow = new int[cols] {17, 18, 19, 20};
    addRow(arr, rows, cols, newRow);
    cout << "After adding row in begining:\n";
    printArray(arr, rows, cols);

    deleteRow(arr, rows);
    cout << "After deleting row in begining:\n";
    printArray(arr, rows, cols);

    deleteRowPosition(arr, rows, 1);
    cout << "After deleting row by position:\n";
    printArray(arr, rows, cols);

    int* newCol = new int[rows] {100, 200, 300};
    addColPosition(arr, rows, cols, 1, newCol);
    cout << "After adding column by position:\n";
    printArray(arr, rows, cols);

    int* newCol2 = new int[rows] {500, 600, 700};
    addColStart(arr, rows, cols, newCol2);
    cout << "After adding column in begining:\n";
    printArray(arr, rows, cols);

    for (int i = 0; i < rows; i++)
        delete[] arr[i];
    delete[] arr;
    delete[] newCol;
    delete[] newCol2;














}

