

#include <iostream>
#include <iomanip>
using namespace std;



void FillArr(int** arr, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = rand() % 90 + 10;
        }
    }
}



void ShowArr(int** arr, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << setw(4) << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
}

void Fill(int* arr, int col)
{
    for (int i = 0; i < col; i++)
    {
        arr[i] = rand() % 10;
    }
}

int** AddRow(int** arr, int &row, int col)
{
    int** temp = new int* [row + 1];
    for (int i = 0; i < row; i++)
    {
        temp[i] = arr[i];
    }
    temp[row] = new int[col];
    Fill(temp[row], col);
    delete[]arr;
    row++;
    arr = temp;
    return arr;

}

int** AddRowInPos(int** arr, int& row,int col, int pos)
{
    int** temp = new int* [row + 1];
    for (int i = 0; i < pos; i++)
    {
        temp[i] = arr[i];
    }
    temp[pos] = new int[col];
    Fill(temp[pos], col);
    for (int i = pos; i < row + 1; i++)
    {
        temp[i + 1] = arr[i];
    }
    delete[]arr;
    row++;
    arr = temp;
    return arr;

}

int** AddColInTheEnd(int** arr, int& row, int col)
{
    int** temp = new int* [row];
    for (int i = 0; i < row; i++)
    {
        temp[i] = new int[col + 1];
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            temp[i][j] = arr[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        delete[]arr[i];
    }
    delete[]arr;
    arr = temp;
    for (int i = 0; i < row; i++)
    {
        arr[i][col] = 7;
    }
    col++;
    return arr;
}


int** DeleteRow(int** arr, int& row)
{
    int** temp = new int* [row - 1];
    for (int i = 0; i < row - 1; i++)
    {
        temp[i] = arr[i];
    }
    delete[]arr[row - 1];
    delete[]arr;
    arr = temp;
    row--;
    return arr;
}




int main()
{
    int row = 5;
    int col = 6;

    int** arr = new int* [row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }


    FillArr(arr, row, col);
    ShowArr(arr, row, col);
    arr = AddRow(arr, row, col);
    ShowArr(arr, row, col);

    arr = AddRowInPos(arr, row, col, 3);
    ShowArr(arr, row, col);

    arr = AddColInTheEnd(arr, row, col);
    ShowArr(arr, row, col);


    arr = DeleteRow(arr, row);
    ShowArr(arr, row, col);


    for (int i = 0; i < row; i++)
    {
        delete[]arr[i];
    }
    delete[]arr;


















}


