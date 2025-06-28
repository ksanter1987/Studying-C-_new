
#include <iostream>
using namespace std;


//Task 1

void findMax(int* a, int* b)
{
    if (*a > *b)
        cout << "Max number: " << *a << endl;
    else
        cout << "Max number: " << *b << endl;
}

//Task 2

void checkSign(int* num)
{
    if (*num > 0)
        cout << "Number is positive" << endl;
    else if (*num < 0)
        cout << "Number is negative" << endl;
    else
        cout << "Number is zero" << endl;
}


//Task 3

void swapValues(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}



//Task 4
void calculator(double* a, char* operation, double* b)
{
    double result;
    switch (*operation)
    {
    case '+': result = *a + *b; break;
    case '-': result = *a - *b; break;
    case '*': result = *a * *b; break;
    case '/':
        if (*b != 0)
            result = *a / *b;
        else
        {
            cout << "Zero division" << endl;
            return;
        }
        break;
    default:
        cout << "Enter other operation" << endl;
        return;
    }
    cout << "Result: " << result << endl;
}


//Task 5

int sumArray(int* arr, int size)
{
    int sum = 0;
    int* end = arr + size;
    while (arr < end)
    {
        sum += *arr;
        arr++;
    }
    return sum;
}







int main()
{
    

//Task 1
    //�������� 1. �������������� ��������� � ��������
    //    ������������, ��������� �������� � ���� �����.

    //int x, y;
    //cout << "Enter 2 numbers: ";
    //cin >> x >> y;
    //findMax(&x, &y);



//Task 2
    //�������� 2. �������������� ��������� � �������� ��� -
    //    ���������, ��������� ���� �����, ��������� � ���������.

    //int num;
    //cout << "\nEnter number: ";
    //cin >> num;
    //checkSign(&num);


//Task 3
    //�������� 3. �������������� ��������� � �������� ��� -
    //    ����������, ������� ������ �������� ���� ������.

    //int num1, num2;
    //cout << "\nEnter 2 numbers: ";
    //cin >> num1 >> num2;
    //swapValues(&num1, &num2);
    //cout << "After change: num1 = " << num1 << ", num2 = " << num2 << endl;


//Task 4
    //�������� 4. �������� ���������� �����������, ���� -
    //    �������� ����� �����������.

    //double number1, number2;
    //char operation;
    //cout << "\nCalculator\nEnter number1, operation (+, -, *, /) and number2: ";
    //cin >> number1 >> operation >> number2;
    //calculator(&number1,&operation, &number2);



//Task 5
    //�������� 5. �������������� �������� �� ����� �����
    //    �����, ���������� ���� �������� ������.����������� -
    //    ���� � ������� ���������� ��������� ��� ����������
    //    �� ������, � ����� �������� ������������.

    int arr[5] = { 1, 2, 3, 4, 5 };
    cout << "\nArray: 1 2 3 4 5" << endl;
    cout << "Sum of array elements: " << sumArray(arr, 5) << endl;











}

