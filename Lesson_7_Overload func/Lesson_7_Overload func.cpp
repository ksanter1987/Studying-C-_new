// Lesson_7_Overload func.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



// ������������ ������� - ������� � ��������� ������, ����������� ����� ������, ��� �� ����� ������� ���������

int maximum(int a, int b)// a,b ��������� �������, �������� (���������) ���������
{
    if (a > b)

        return a; //������� ������� � ������� ��� �������� ����� a
    return b; //������� ������� � ������� ��� �������� ����� b
}
int maximum(int a, int b, int c)// a,b, c  ��������� �������, �������� (���������) ���������
{
    int m = a;
    if (b > m)
        m = b;
    if (c > m)
        m = c;
    return m;

        return a; //������� ������� � ������� ��� �������� ����� a
    return b; //������� ������� � ������� ��� �������� ����� b
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




//// ��������� ������� 1) �������� ����� �� ����� 2) ������� ����� � ��������� 3) ������ �� �������� �� ������ ����� value (value - �������� �������)
//��������� ������ �������.
//**** �� �������� ������� ���������� ��������, ����� �������� ������ �������� �� 1, ����� �������� - �������� �� 1


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