
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
    //srand(time(0));
    //int size = 5;
    //cout << "Enter size : ";
    //cin >> size;
    //int *arr = CreateArr(size);
    //FillArr(arr, size);
    //ShowArr(arr, size);

    //delete[]arr;





    //int a = 100; //Stack

    //int* pa = new int(777);

    //cout << "adress - " << pa << endl;
    //cout << "value - " << *pa << endl;

    //int b;
    //int* pb = new int;

    //int* pc = nullptr;
    ////cout << *pc << endl; //error
    //pc = new int(12);

    //*pb = 25;

    //cout << "value *pc - " << *pa << endl;
    //cout << "value *pc - " << *pb << endl;
    //cout << "value *pc - " << *pc << endl;


    //delete pc;
    ////pc = pa;
    //pc = new int(2);



    //delete pa;
    //delete pb;
    //delete pc;




    //TASK 1
    //1.Дано три числа.Оголосити ссилки на ці числа.
    //    Отримати добуток трьох заданих чисел, середє арифметичне, найменше з них,
    //    користуючись непрямим доступом до чисел(через ссилку)

    //int a, b, c;
    //cout << "Enter 3 numbers: ";
    //cin >> a >> b >> c;

    //int* pa = &a, * pb = &b, * pc = &c;

    //int dob = (*pa) * (*pb) * (*pc);
    //double average = ((*pa) + (*pb) + (*pc)) / 3.0;
    //int min = *pa;

    //if (*pb < min) min = *pb;
    //if (*pc < min) min = *pc;

    //cout << "Dobutok : " << dob << endl;
    //cout << "Average : " << average << endl;
    //cout << "Minimum : " << min << endl;




    //TASK 2
    //2.Написати функцію, яка замінює всі від’ємні елементи переданого масиву нулями. (pointers)

    //srand(time(0));
    //int size = 5;
    //cout << "Enter size : ";
    //cin >> size;
    //int *arr = CreateArr(size);
    //FillArr(arr, size);
    //ShowArr(arr, size);
    //cout << endl;
    //SwitchToZero(arr, size);
    //cout << "After switch :" << endl;
    //ShowArr(arr, size);

    //delete[]arr;



    srand(time(0));
    int size = 5;
    //cout << "Enter size : ";
    //cin >> size;
    int* arr = CreateArr(size);
    FillArr(arr, size);
    ShowArr(arr, size);

    int number, pos;
    char choice = 'y';
    while (true)
    {
        cout << endl;
        cout << "Do you want to add number in arr ? y/n\n";
        choice = _getch();
        //cin = choice;
        if (choice == 'n') break;

        cout << "Enter number : ";
        cin >> number; //14
        cout << "Enter position (0 to " << size - 1 << ") : ";
        cin >> pos;
        arr = AddByPosition(arr, &size, number, pos);
        
        //arr = AddNumber(arr, &size, number);
        system("cls");
        ShowArr(arr, size);





    }
    srand(time(0));
    int size = 5;
    //cout << "Enter size : ";
    //cin >> size;
    int* arr = CreateArr(size);
    FillArr(arr, size);
    ShowArr(arr, size);
    arr = DeleteFromStart(arr, &size);


  /*  cout << endl;
    SwitchToZero(arr, size);
    cout << "After switch :" << endl;
    ShowArr(arr, size);

    delete[]arr;*/



    //TASK 3
    //3.Написать функцію(або шаблон), яка приймає дві ссилки на змінні і
    //    виконує обмін значень.За допомогою написаної функції поміняти місцями
    //    у матриці перший та другий стовпці.


    //int matrix[rows][cols];
    //fillMatrix(matrix);
    //printMatrix(matrix);
    //swapCols(matrix);
    //cout << "After swap : " << endl;
    //printMatrix(matrix);





}


