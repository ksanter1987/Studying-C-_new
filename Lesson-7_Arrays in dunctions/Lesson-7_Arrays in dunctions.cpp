// Lesson-7_Arrays in dunctions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void printArray(int a[], int size); // a - адреса початку масиву, size - розмір масиву
//const int a[] -функція не збирається змінювати масив

int sumInArray(const int a[], int size);

int main()
{
    const int SIZE = 5;
    int arr[SIZE] = { 10,23 }; // 10 23 0 0 0
    //arr - імя масиву \ адреса початку масиву
    cout << "----------All elements from start to end ------------\n";
    printArray(arr, SIZE); // 10 23 0 0 0 

    cout << "--------Elements from #1 to end -------------\n";
    printArray(arr + 1, SIZE); // 10 23 0 0 0 


    cout << "\nSum of all elements : " << sumInArray(arr, SIZE) << endl;
    cout << "\nSum of I half : " << sumInArray(arr, SIZE / 2) << endl;
    cout << "\nSum of II half : " << sumInArray(arr, SIZE / 2) << endl;




}

void printArray(const int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "\t" << a[i];
    }
    cout << endl;
}

int sumInArray(const int a[], int size) // параметри функції працюють як локальні змінні
{
    int sum = 0; // локальна змінна, створена на стековій памяті (Last In First Out), створюється при вході у функцію при виході
    for (int i = 0; i < size; i++)
    {
        sum += a[i];
    }
}
