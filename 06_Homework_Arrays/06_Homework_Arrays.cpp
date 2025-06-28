
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    srand(time(NULL));


    //1.Дано масив розміром 4×3 з елементами цілого типу.
    //    Визначити кількість елементів відмінних від нуля.


    //const int rows = 4, cols = 3;
    //int arr[rows][cols];
    //for (int i = 0; i < rows; i++)
    //{
    //    for (int j = 0; j < cols; j++)
    //    {
    //        arr[i][j] = rand() % 11 - 5;
    //    }
    //}
    //cout << "Array :\n";
    //for (int i = 0; i < rows; i++)
    //{
    //    for (int j = 0; j < cols; j++)
    //    {
    //        cout << setw(3) << arr[i][j] << "\t";
    //    }
    //    cout << endl;
    //}
    //int count = 0;
    //for (int i = 0; i < rows; i++)
    //{
    //    for (int j = 0; j < cols; j++)
    //    {
    //        if (arr[i][j] != 0)
    //        {
    //            count++;
    //        }
    //    }
    //}
    //    cout << "Not null elements : " << count << endl;



        //2.Дано масив розміром 3×3 з елементами цілого типу.
        //    Визначити кількість елементів які б дорівнювали нулю.

    //const int rows = 3, cols = 3;
    //int arr[rows][cols];
    //for (int i = 0; i < rows; i++)
    //{
    //    for (int j = 0; j < cols; j++)
    //    {
    //        arr[i][j] = rand() % 11 - 5;
    //    }
    //}
    //cout << "Array :\n";
    //for (int i = 0; i < rows; i++)
    //{
    //    for (int j = 0; j < cols; j++)
    //    {
    //        cout << setw(3) << arr[i][j] << "\t";
    //    }
    //    cout << endl;
    //}
    //int count = 0;
    //for (int i = 0; i < rows; i++)
    //{
    //    for (int j = 0; j < cols; j++)
    //    {
    //        if (arr[i][j] == 0)
    //        {
    //            count++;
    //        }
    //    }
    //}
    //    cout << "Null elements : " << count << endl;


        //3.Дано масив розміром 7×3 з елементами цілого типу.
        //    Визначити кількість елементів, модуль яких менший 12. (-20 + rand() % 40)

    //const int rows = 7, cols = 3;
    //int arr[rows][cols];
    //for (int i = 0; i < rows; i++)
    //{
    //    for (int j = 0; j < cols; j++)
    //    {
    //        arr[i][j] = -20 + rand() % 40;
    //    }
    //}
    //cout << "Array :\n";
    //for (int i = 0; i < rows; i++)
    //{
    //    for (int j = 0; j < cols; j++)
    //    {
    //        cout << setw(4) << arr[i][j] << "\t";
    //    }
    //    cout << endl;
    //}
    //int count = 0;
    //for (int i = 0; i < rows; i++)
    //{
    //    for (int j = 0; j < cols; j++)
    //    {
    //        if (arr[i][j] < 12 && arr[i][j] > -12)
    //        {
    //            count++;
    //        }
    //    }
    //}
    //    cout << "Elements wich module less 12 : " << count << endl;


        //4.Дано масив розміром 4×5 з елементами цілого типу(позитивні та від’ємні).
        //    Визначити кількість позитивних елементів.


    //const int rows = 4, cols = 5;
    //int arr[rows][cols];
    //for (int i = 0; i < rows; i++)
    //{
    //    for (int j = 0; j < cols; j++)
    //    {
    //        arr[i][j] = -20 + rand() % 40;
    //    }
    //}
    //cout << "Array :\n";
    //for (int i = 0; i < rows; i++)
    //{
    //    for (int j = 0; j < cols; j++)
    //    {
    //        cout << setw(4) << arr[i][j] << "\t";
    //    }
    //    cout << endl;
    //}
    //int count = 0;
    //for (int i = 0; i < rows; i++)
    //{
    //    for (int j = 0; j < cols; j++)
    //    {
    //        if (arr[i][j] > 0)
    //        {
    //            count++;
    //        }
    //    }
    //}
    //    cout << "Positive elements : " << count << endl;


        //5.Дано масив розміром 5×4 з елементами дійсного типу(додатні та від’ємні).
        //    Визначити добуток всіх додатніх елементів.


    //const int rows = 4, cols = 5;
    //double arr[rows][cols];
    //for (int i = 0; i < rows; i++)
    //{
    //    for (int j = 0; j < cols; j++)
    //    {
    //        arr[i][j] = -10 + (rand() % 2000) / 100.0;
    //    }
    //}
    //cout << "Array :\n";
    //for (int i = 0; i < rows; i++)
    //{
    //    for (int j = 0; j < cols; j++)
    //    {
    //        cout << setw(7) << arr[i][j] << "\t";
    //    }
    //    cout << endl;
    //}
    //double product = 1.0;
    //for (int i = 0; i < rows; i++)
    //{
    //    for (int j = 0; j < cols; j++)
    //    {
    //        if (arr[i][j] > 0)
    //        {
    //            product *= arr[i][j];
    //        }
    //    }
    //}
    //if (product == 1.0)
    //{
    //    cout << "There is no positive elements in array : " << endl;
    //}
    //else
    //{
    //    cout << "Product of positive elements : " << product << endl;
    //}
    


    //6.Дано масив розміром 5×4 з елементами дійсного типу(позитивні та від’ємні).
    //    Визначити добуток всіх від’ємних елементів.


    //const int rows = 5, cols = 4;
    //double arr[rows][cols];
    //for (int i = 0; i < rows; i++)
    //{
    //    for (int j = 0; j < cols; j++)
    //    {
    //        arr[i][j] = -10 + (rand() % 2000) / 100.0;
    //    }
    //}
    //cout << "Array :\n";
    //for (int i = 0; i < rows; i++)
    //{
    //    for (int j = 0; j < cols; j++)
    //    {
    //        cout << setw(7) << arr[i][j] << "\t";
    //    }
    //    cout << endl;
    //}
    //double product = 1.0;
    //for (int i = 0; i < rows; i++)
    //{
    //    for (int j = 0; j < cols; j++)
    //    {
    //        if (arr[i][j] < 0)
    //        {
    //            product *= arr[i][j];
    //        }
    //    }
    //}
    //if (product == 1.0)
    //{
    //    cout << "There is no negative elements in array : " << endl;
    //}
    //else
    //{
    //    cout << "Product of negative elements : " << product << endl;
    //}


    //7.Дано масив розміром 4×4 з елементами цілого типу.Визначити кількість
    //    елементів, які б при діленні на 6 давали залишок 1. 13 % 6 = 1


    //const int rows = 4, cols = 4;
    //int arr[rows][cols];
    //for (int i = 0; i < rows; i++)
    //{
    //    for (int j = 0; j < cols; j++)
    //    {
    //        arr[i][j] = rand() % 201 - 100;
    //    }
    //}
    //cout << "Array :\n";
    //for (int i = 0; i < rows; i++)
    //{
    //    for (int j = 0; j < cols; j++)
    //    {
    //        cout << setw(7) << arr[i][j] << "\t";
    //    }
    //    cout << endl;
    //}
    //int count = 0;
    //for (int i = 0; i < rows; i++)
    //{
    //    for (int j = 0; j < cols; j++)
    //    {
    //        if (arr[i][j] % 6 == 1)
    //        {
    //            count++;
    //        }
    //    }
    //}
    //    cout << "The number of elements that would give a remainder of 1 when divided by 6  : " << count << endl;



//8.Дано масив розміром 5хб цілого типу.Знайти мінімальний елемент.


    //const int rows = 5, cols = 6;
    //int arr[rows][cols];
    //for (int i = 0; i < rows; i++)
    //{
    //    for (int j = 0; j < cols; j++)
    //    {
    //        arr[i][j] = rand() % 201 - 100;
    //    }
    //}
    //cout << "Array :\n";
    //for (int i = 0; i < rows; i++)
    //{
    //    for (int j = 0; j < cols; j++)
    //    {
    //        cout << setw(7) << arr[i][j] << "\t";
    //    }
    //    cout << endl;
    //}
    //int min = arr[0][0];
    //for (int i = 0; i < rows; i++)
    //{
    //    for (int j = 0; j < cols; j++)
    //    {
    //        if (arr[i][j] < min)
    //        {
    //            min = arr[i][j];
    //        }
    //    }
    //}
    //    cout << "Minimum element in array is  : " << min << endl;




//9.Дано масив розміром 5×6 цілого типу.Знайти максимальний елемент.


    //const int rows = 5, cols = 6;
    //int arr[rows][cols];
    //for (int i = 0; i < rows; i++)
    //{
    //    for (int j = 0; j < cols; j++)
    //    {
    //        arr[i][j] = rand() % 201 - 100;
    //    }
    //}
    //cout << "Array :\n";
    //for (int i = 0; i < rows; i++)
    //{
    //    for (int j = 0; j < cols; j++)
    //    {
    //        cout << setw(7) << arr[i][j] << "\t";
    //    }
    //    cout << endl;
    //}
    //int max = arr[0][0];
    //for (int i = 0; i < rows; i++)
    //{
    //    for (int j = 0; j < cols; j++)
    //    {
    //        if (arr[i][j] > max)
    //        {
    //            max = arr[i][j];
    //        }
    //    }
    //}
    //    cout << "Maximum element in array is  : " << max << endl;


        //10.Дано масив розміром 5×4 з елементами дійсного типу(позитивні та від’ємні).
        //    Визначити суму всіх від’ємних елементів.


    const int rows = 5, cols = 4;
    double arr[rows][cols];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = -10 + (rand() % 2000) / 100.0;
        }
    }
    cout << "Array :\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << setw(7) << arr[i][j] << "\t";
        }
        cout << endl;
    }
    double summa = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] < 0)
            {
                summa += arr[i][j];
            }
        }
    }
    if (summa < 0)
    {
        cout << "Sum of negative elements : " << summa << endl;
    }
    else
    {
        cout << "There is no negative elements in array : " << endl;
    }





























}


