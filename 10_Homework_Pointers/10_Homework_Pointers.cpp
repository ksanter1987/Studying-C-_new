
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
    //Завдання 1. Використовуючи покажчики й оператор
    //    розіменування, визначити найбільше з двох чисел.

    //int x, y;
    //cout << "Enter 2 numbers: ";
    //cin >> x >> y;
    //findMax(&x, &y);



//Task 2
    //Завдання 2. Використовуючи покажчики й оператор розі -
    //    менування, визначити знак числа, введеного з клавіатури.

    //int num;
    //cout << "\nEnter number: ";
    //cin >> num;
    //checkSign(&num);


//Task 3
    //Завдання 3. Використовуючи покажчики й оператор роз -
    //    іменування, поміняти місцями значення двох змінних.

    //int num1, num2;
    //cout << "\nEnter 2 numbers: ";
    //cin >> num1 >> num2;
    //swapValues(&num1, &num2);
    //cout << "After change: num1 = " << num1 << ", num2 = " << num2 << endl;


//Task 4
    //Завдання 4. Написати примітивний калькулятор, кори -
    //    стуючись тільки покажчиками.

    //double number1, number2;
    //char operation;
    //cout << "\nCalculator\nEnter number1, operation (+, -, *, /) and number2: ";
    //cin >> number1 >> operation >> number2;
    //calculator(&number1,&operation, &number2);



//Task 5
    //Завдання 5. Використовуючи покажчик на масив цілих
    //    чисел, порахувати суму елементів масиву.Використову -
    //    вати в програмі арифметику покажчиків для просування
    //    по масиву, а також оператор розіменування.

    int arr[5] = { 1, 2, 3, 4, 5 };
    cout << "\nArray: 1 2 3 4 5" << endl;
    cout << "Sum of array elements: " << sumArray(arr, 5) << endl;











}

