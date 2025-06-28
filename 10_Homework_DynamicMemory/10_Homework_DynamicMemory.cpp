
#include <iostream>
#include <conio.h>
using namespace std;

const int rows = 3;
const int cols = 3;

void Test1()
{
    const int size = 5;
    int arr[size];
}
void Test2()
{
    int size = 5;
    int* parr = new int[size];
    delete[]parr;
}
int* CreateArr(int size)
{
    int* arr = new int[size];
    return arr;
}
void FillArr(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(arr + i) = (rand() % 201) - 100;
    }
}void ShowArr(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}


void SwitchToZero(int* arr, int size)
{
    for (int i = 0; i < size; ++i)
    {
        if (*(arr + i) < 0)
        {
            *(arr + i) = 0;
        }
    }
}

template<typename T>
void swapVals(T& x, T& y)
{
    T temp = x;
    x = y;
    y = temp;
}
void swapCols(int matrix[rows][cols])
{
    if (cols < 2) return;
    for (int i = 0; i < rows; ++i)
    {
        swapVals(matrix[i][0], matrix[i][1]);
    }
}

void fillMatrix(int matrix[rows][cols])
{
    srand(time(0));
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            matrix[i][j] = rand() % 201 - 100;
}
void printMatrix(int matrix[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            cout << matrix[i][j] << "\t";
        cout << endl;
    }
}

int* AddNumber(int* arr, int* size, int number)
{
    (*size)++; // size = 6
    int* temp = new int[*size];
    for (int i = 0; i < (*size) - 1; i++)
    {
        temp[i] = arr[i];
    }
    temp[(*size) - 1] = number;
    delete[]arr;
    arr = temp;
    return arr;

}
int* AddByPosition(int* arr, int* size, int number, int pos)
{
    if (pos < 0 || pos > *size)
    {
        cout << "Invalid position!\n";
        return arr;
    }
    (*size)++;
    int* temp = new int[*size];
    for (int i = 0; i < pos; i++)
    {
        temp[i] = arr[i];
    }
    temp[pos] = number;
    for (int i = *size - 1; i > pos; i--)
    {
        temp[i] = arr[i - 1];
    }
    delete[]arr;
    arr = temp;
    return arr;
}
int* DeleteFromStart(int* arr, int* size)
{
    (*size)--;
    int* temp = new int[*size];
    for (int i = 0; i < *size; i++)
    {
        temp[i] = arr[i + 1];
    }
    delete[]arr;
    arr = temp;
    return arr;
}

int* DeleteFromEnd(int* arr, int* size)
{
    (*size)--;
    int* temp = new int[*size];
    for (int i = 0; i < *size; i++)
    {
        temp[i] = arr[i];
    }
    delete[]arr;
    arr = temp;
    return arr;
}

int* DeleteByPosition(int* arr, int* size, int pos)
{
    if (pos < 0 || pos >= *size)
    {
        cout << "Invalid position!\n";
        return arr;
    }
    (*size)--;
    int* temp = new int[*size];
    for (int i = 0; i < pos; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = pos; i < *size; i++)
    {
        temp[i] = arr[i + 1];
    }
    delete[]arr;
    arr = temp;
    return arr;
}

int main()
{
    srand(time(0));

    //int size = 5;
    //int* arr = CreateArr(size);
    //FillArr(arr, size);
    //ShowArr(arr, size);
    //int number;
    //cout << "Enter number to add : ";
    //cin >> number;
    //arr = AddNumber(arr, &size, number);
    //ShowArr(arr, size);

    //delete[] arr;



    //int size = 5;
    //int* arr = CreateArr(size);
    //FillArr(arr, size);
    //ShowArr(arr, size);

    //int number, pos;
    //cout << "Enter number to insert: ";
    //cin >> number;
    //cout << "Enter position (0 to " << size << "): ";
    //cin >> pos;
    //arr = AddByPosition(arr, &size, number, pos);
    //cout << "After inserting: ";
    //ShowArr(arr, size);

    //delete[] arr;


    //int size = 5;
    //int* arr = CreateArr(size);
    //FillArr(arr, size);
    //ShowArr(arr, size);
    //arr = DeleteFromStart(arr, &size);
    //cout << "After deleting first element: ";
    //ShowArr(arr, size);

    //delete[] arr;

    //int size = 5;
    //int* arr = CreateArr(size);
    //FillArr(arr, size);
    //ShowArr(arr, size);
    //arr = DeleteFromEnd(arr, &size);
    //cout << "After deleting last element: ";
    //ShowArr(arr, size);

    //delete[] arr;

    //int size = 5;
    //int* arr = CreateArr(size);
    //FillArr(arr, size);
    //ShowArr(arr, size);
    //int pos;
    //cout << "Enter position to delete (0 to " << size - 1 << "): ";
    //cin >> pos;
    //arr = DeleteByPosition(arr, &size, pos);
    //cout << "After deleting at position " << pos << ": ";
    //ShowArr(arr, size);

    //delete[] arr;



}


