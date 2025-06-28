// Lesson_7_Overload func.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



// перевантажені функції - функції з однаковою назвою, яківиконують подібні задачі, але на різних списках параметрів

int maximum(int a, int b)// a,b параметри функції, формальні (абстрактні) параметри
{
    if (a > b)

        return a; //функція повертає у зовнішній світ значення змінної a
    return b; //функція повертає у зовнішній світ значення змінної b
}
int maximum(int a, int b, int c)// a,b, c  параметри функції, формальні (абстрактні) параметри
{
    int m = a;
    if (b > m)
        m = b;
    if (c > m)
        m = c;
    return m;

        return a; //функція повертає у зовнішній світ значення змінної a
    return b; //функція повертає у зовнішній світ значення змінної b
}




int main()
{
    //int one, two, three;
    //cout << "Enter 2 numbers : ";
    //cin >> one >> two;
    //cout << "Max from 2 : " << maximum(one, two) << endl; //1 func

    //cout << "\nEnter 3 numbers : ";
    //cin >> one >> two >> three;
    //cout << "Max from 3 : " << maximum(one, two, three) << endl; // 2 func


    void printArray(int arr[], int size);
    void inputArray(int arr[], int size);
    void increaseArray(int arr[], int size, int value);
    void increase_reduce(int arr[], int size);


    const int size= 6;
    int arr[size];

    inputArray(arr, size);
    printArray(arr, size);

    cout << "\nNew array :\n";
    increase_reduce(arr, size);
}




//// Визначити функції 1) виводить масив на екран 2) вводить масив з клавіатури 3) збільшує усі елементи на задане число value (value - параметр функції)
//Перевірити роботу функцій.
//**** За допомогої функції збульшення елементів, першу половину масиву збільшити на 1, другу половину - хменшити на 1


void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void inputArray(int arr[], int size)
{
    cout << " Enter " << size << " elements ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void increaseArray(int arr[], int size, int value)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] += value;
    }
}

void increase_reduce(int arr[], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        arr[i] += 1;
    }
    for (int i = size / 2; i < size; i++)
    {
        arr[i] -= 1;
    }
    printArray(arr, size);
}