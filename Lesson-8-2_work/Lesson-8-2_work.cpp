
#include <iostream>
using namespace std;


// Визначити шаблони функцій для пошуку мінімального з двох даних, з трьох даних, в одновимірному масиві та у двовимірному масиві
// Перевіритии роботу функцій для типів int, double, string, char


template <typename T>
T minOfTwo(T a, T b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
template <typename T>
T minOfThree(T a, T b, T c)
{
    return minOfTwo(minOfTwo(a, b), c);
}

template <typename T>
T minArray1(const T arr[], int size)
{
    T min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

template <typename T>
T minArray2(const T arr[][5], int rows, int cols)
{
    T min = arr[0][0];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }
    return min;
}


int main()
{
    // int
    int a1 = 5, a2 = 9, a3 = -3;
    int arr1[] = { 4, 2, 10, -1, 7 };
    int arr2[2][5] = { {5, 3, -4, 8, 0}, {7, 2, 1, 6, -5} };

    cout << "INT:\n";
    cout << "Min of 2: " << minOfTwo(a1, a2) << endl;
    cout << "Min of 3: " << minOfThree(a1, a2, a3) << endl;
    cout << "Min in 1: " << minArray1(arr1, 5) << endl;
    cout << "Min in 2: " << minArray2(arr2, 2, 5) << endl;


    // double
    double b1 = 2.3, b2 = -1.1, b3 = 5.5;
    double arr_double1[] = { 3.3, -0.5, 6.7, 1.1 };
    double arr_double2[2][5] = { {0.5, -0.3, 4.2, 3.1, 1.1}, {2.8, -5.6, 0.0, 1.9, 3.3} };

    cout << "\nDOUBLE:\n";
    cout << "Min of 2: " << minOfTwo(b1, b2) << endl;
    cout << "Min of 3: " << minOfThree(b1, b2, b3) << endl;
    cout << "Min in 1: " << minArray1(arr_double1, 4) << endl;
    cout << "Min in 2: " << minArray2(arr_double2, 2, 5) << endl;


    // char
    char c1 = 'z', c2 = 'a', c3 = 'm';
    char arr_char1[] = { 'd', 'f', 'b', 'z' };
    char arr_char2[2][5] = { {'k', 'j', 'a', 'x', 'b'}, {'q', 'r', 'p', 'm', 'n'} };

    cout << "\nCHAR:\n";
    cout << "Min of 2: " << minOfTwo(c1, c2) << endl;
    cout << "Min of 3: " << minOfThree(c1, c2, c3) << endl;
    cout << "Min in 1: " << minArray1(arr_char1, 4) << endl;
    cout << "Min in 2: " << minArray2(arr_char2, 2, 5) << endl;


    // string
    string d1 = "apple", d2 = "banana", d3 = "cherry";
    string arr_string1[] = { "zebra", "ant", "dog", "cat" };
    string arr_string2[2][5] = { {"pear", "peach", "plum", "apple", "kiwi"},
                          {"grape", "banana", "melon", "orange", "lemon"} };

    cout << "\nSTRING:\n";
    cout << "Min of 2: " << minOfTwo(d1, d2) << endl;
    cout << "Min of 3: " << minOfThree(d1, d2, d3) << endl;
    cout << "Min in 1: " << minArray1(arr_string1, 4) << endl;
    cout << "Min in 2: " << minArray2(arr_string2, 2, 5) << endl;



}


