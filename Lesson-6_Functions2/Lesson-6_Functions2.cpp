// Lesson-6_Functions2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int maximum(int a, int b);// прототип функції

int main()
{
    //int one, two;
    //cout << "Enter 2 integer numbers: ";
    //cin >> one >> two;


    ////виклик функції, потрібно зловити результат
    //int m = maximum(one, two); // one, two - параметри функції, фактичні параметри функції
    //cout << "Max(" << one << ", " << two << ") = " << m << endl;








    //void square(int a, int b, char symbol = '*');
    //square(12, 15, '&');
    //square(5, 4);
    //cout << endl;

    //int width, length;
    //char some_symbol;
    //cout << "Enter width, length and some symbol :";
    //cin >> width >> length >> some_symbol;
    //square(width, length, some_symbol);

    //int square(int x);
    //int cube(int x);

    //int number;
    //cout << "Enter number :";
    //cin >> number;
    //cout << "number | square cube" << endl;
    //for (int i = 0; i <= number; i++)
    //{
    //    cout << setw(3) << i << " | " << setw(5) << square(i)<< "  " << setw(5) << cube(i) << endl;
    /*}*/

    int number1, number2;
    cout << "Enter diap ";
    cin >> number1 >> number2;
    printSimleNumbers(number1, number2);


}

int maximum(int a, int b)// a,b параметри функції, формальні (абстрактні) параметри
{
    if (a > b)
    
        return a; //функція повертає у зовнішній світ значення змінної a
    return b; //функція повертає у зовнішній світ значення змінної b
}

//1. Визначити функцію для зображення прямокутника вказаних розмірів та заповненого вказаними символами, по замовченню "*"

void square(int a, int b,char symbol = '*')
{
    if (a <= 0 || b <= 0)
    {
        cout << "Enter normal sizes ";
    }
    for (int i = 0; i < a; i++)
    {
        for (int i = 0; i < b; i++)
        {
            cout << symbol;
        }
        cout << endl;
    }
}

//2.  Написати функціі, які повертають квадрат та  куб числа відповідно.Використати ці функції для виведення таблиці квадратів та кубів перших N натуральних чисел.Наприклад, для N = 3
//1 | 1 1
//2 | 4 8
//3 | 9 27


int square(int x)
{
    return x * x;
}
int cube(int x)
{
    return x * x * x;
}


//3. Написати функцію, яка перевіряє, чи є передане їй число простим.Число називається простим, якщо воно ділиться без залишку тільки на себе та на одиницю.
//За допомогою цієї функції  вивести прості числа із вказаного користувачем діапазону.Можна для цього написати ще одну функцію.

bool isSimple(int number)
{
    if number < 2 return false;
    for (int i = 2; i <= number; i++)
    {
        if (number % i == 0) return false;
    }
    return true;
}

void printSimleNumbers(int number1, int number2)
{
    if (number1 > number2)
    {
        int temp = number1;
        number1 = number2;
        number2 = temp;
    }
    bool find_simple = false;
    for (int i = number1; i <= number2; i++)
    {
        if (isSimple(i))
        {
            cout << i << " ";
            find_simple = true;
        }
        if find_simple == false
        {
            cout << "There is no simple numbers in diap ";
        }
    }

}