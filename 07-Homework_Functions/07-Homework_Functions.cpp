

#include <iostream>
using namespace std;



//1. Написати логічну функцію, яка перевіряє, чи є передане їй число є простим bool isSimple(int n).
//    Число називається простим, якщо воно ділиться без залишку тільки на себе та на одиницю.

//    За допомогою цієї функції  вивести прості числа із вказаного користувачем діапазону.Можна для цього написати ще одну функцію
//    void printSimpleNumbers(int left, int right).
bool isSimple(int n)
{
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

void printSimpleNumbers(int start, int end)
{
    if (start > end) swap(start, end);
    cout << "Simple numbers in diapasone [" << start << ", " << end << "]: ";
    for (int i = start; i <= end; i++)
        if (isSimple(i))
            cout << i << " ";
    cout << endl;
}



//2. Визначити перевантажені функції для пошуку
//    кількості парних серед двох цілих чисел,
//    кількості парних серед трьох цілих чисел,
//    кількості парних у одновимірному масиві,
//    кількості парних у двовимірному масиві.

const int SIZE1 = 5;

int countEven(int a, int b)
{
    return (a % 2 == 0) + (b % 2 == 0);
}

int countEven(int a, int b, int c)
{
    return (a % 2 == 0) + (b % 2 == 0) + (c % 2 == 0);
}

int countEven(const int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
        if (arr[i] % 2 == 0) count++;
    return count;
}

int countEven(const int arr[][SIZE1], int rows)
{
    int count = 0;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < SIZE1; j++)
            if (arr[i][j] % 2 == 0) count++;
    return count;
}


//3. Визначити перевантажені функції для обчислення площі трикутника
//- за трьома сторонами(формула Герона)
//- за висотою та основою(основа * висота / 2).
//Перевірити роботу функцій.Функції повинні повертати значення площі трикутника.Якщо сторони
//прийшли невірні - повертати 0.

double triangleArea(double a, double b, double c)
{
    if (a + b <= c || a + c <= b || b + c <= a || a <= 0 || b <= 0 || c <= 0) return 0;
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

double triangleArea(double base, double height)
{
    if (base <= 0 || height <= 0) return 0;
    return (base * height) / 2.0;
}

//4. Написати програму, яка виконує реверс елементів одновимірного масиву, розміщених між крайніми від’ємними числами у масиві.
//    Для розв’язку задачі визначити та використати функції :
//-заповнення масиву void
//    fillArray(int arr[], int  size)
//    - вивід масиву
//    void printArray(const int arr[], int  size)
//    - пошук лівого від’ємного(повертати індекс, якщо   знайдено, інакше повертати - 1
//        int indFirst(const int arr[], int  size)
//    - пошук правого від’ємного у масиві
//        int indLast(const int arr[], int  size)
//    - обертання частини масиву(left, right - індекси лівого та правого елементів частини масиву
//            reversePartArray(int arr[], int  left, int right)

void fillArray(int arr[], int size)
{
    srand(time(0));
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 101 - 50;
    }
}

void printArray(const int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int indFirst(const int arr[], int size)
{
    for (int i = 0; i < size; i++)
        if (arr[i] < 0)
            return i;
    return -1;
}

int indLast(const int arr[], int size)
{
    for (int i = size - 1; i >= 0; i--)
        if (arr[i] < 0)
            return i;
    return -1;
}

void reversePartArray(int arr[], int left, int right)
{
    if (left == -1 || right == -1 || left >= right) return;
    left++;
    right--;
    while (left < right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}


//5. Визначити функції для обробки квадратних цілих матриць 5х5:
//
//-Заповнення матриці випадковими числами, за замовчуванням з відрізку[0..100];
//-Вивід елементів матриці
//- Обчислення за двома матрицями  їх суми(третя матриця), сума обчислюється за формулою Cij = Aij + Bij,
//де А, В – вхідні матриці, С – результуюча.
//void sumMatrix(const int  a[][SIZE], const int b[][SIZE], int c[][SIZE])
//- Множення матриці на ціле число, при цьому кожен елемент матриці множиться на задане ціле  Аij = number ?Aij


void fillMatrix(int mat[][SIZE1])
{
    for (int i = 0; i < SIZE1; i++)
        for (int j = 0; j < SIZE1; j++)
            mat[i][j] = rand() % 101;
}

void printMatrix(const int mat[][SIZE1])
{
    for (int i = 0; i < SIZE1; i++)
    {
        for (int j = 0; j < SIZE1; j++)
            cout << mat[i][j] << "\t";
        cout << endl;
    }
}

void sumMatrix(const int a[][SIZE1], const int b[][SIZE1], int c[][SIZE1])
{
    for (int i = 0; i < SIZE1; i++)
        for (int j = 0; j < SIZE1; j++)
            c[i][j] = a[i][j] + b[i][j];
}

void multiplyMatrix(int mat[][SIZE1], int multiplier)
{
    for (int i = 0; i < SIZE1; i++)
        for (int j = 0; j < SIZE1; j++)
            mat[i][j] *= multiplier;
}



int main()
{
    
    //1. Написати логічну функцію, яка перевіряє, чи є передане їй число є простим bool isSimple(int n).
    //    Число називається простим, якщо воно ділиться без залишку тільки на себе та на одиницю.

    //    За допомогою цієї функції  вивести прості числа із вказаного користувачем діапазону.Можна для цього написати ще одну функцію
    //    void printSimpleNumbers(int left, int right).

    //int start, end;
    //cout << "Enter start of diapasone: ";
    //cin >> start;
    //cout << "Enter end of diapasone: ";
    //cin >> end;

    //printSimpleNumbers(start, end);



    //2. Визначити перевантажені функції для пошуку
    //    кількості парних серед двох цілих чисел,
    //    кількості парних серед трьох цілих чисел,
    //    кількості парних у одновимірному масиві,
    //    кількості парних у двовимірному масиві.

    //cout << "Even between 2 and 5: " << countEven(2, 5) << endl;
    //cout << "Even between 2, 4, 5: " << countEven(2, 4, 5) << endl ;

    //int arr1[] = { 1, 2, 3, 4, 5, 6 };
    //cout << "Even in 1-array: " << countEven(arr1, 6) << endl;

    //int arr2[SIZE][SIZE] =
    //{
    //    {1, 2, 3, 4, 5},
    //    {6, 7, 8, 9, 10},
    //    {11, 12, 13, 14, 15},
    //    {16, 17, 18, 19, 20},
    //    {21, 22, 23, 24, 25}
    //};
    //cout << "Even in 2-array: " << countEven(arr2, SIZE) << endl;



    //3. Визначити перевантажені функції для обчислення площі трикутника
    //    - за трьома сторонами(формула Герона)
    //    - за висотою та основою(основа * висота / 2).
    //    Перевірити роботу функцій.Функції повинні повертати значення площі трикутника.Якщо сторони
    //    прийшли невірні - повертати 0.


    //cout << "Square of triangle (3, 4, 5): " << triangleArea(3, 4, 5) << endl;
    //cout << "Square of triangle (base 10, height 5): " << triangleArea(10, 5) << endl;


    //4. Написати програму, яка виконує реверс елементів одновимірного масиву, розміщених між крайніми від’ємними числами у масиві.
    //    Для розв’язку задачі визначити та використати функції :
    //    -заповнення масиву void
    //    fillArray(int arr[], int  size)
    //    - вивід масиву
    //    void printArray(const int arr[], int  size)
    //    - пошук лівого від’ємного(повертати індекс, якщо   знайдено, інакше повертати - 1
    //        int indFirst(const int arr[], int  size)
    //    - пошук правого від’ємного у масиві
    //        int indLast(const int arr[], int  size)
    //    - обертання частини масиву(left, right - індекси лівого та правого елементів частини масиву
    //            reversePartArray(int arr[], int  left, int right)


    //const int SIZE_ARR = 10;
    //int arr[SIZE_ARR];
    //fillArray(arr, SIZE_ARR);
    //cout << "Array before reverse: ";
    //printArray(arr, SIZE_ARR);

    //int left = indFirst(arr, SIZE_ARR);
    //int right = indLast(arr, SIZE_ARR);

    //if (left != -1 && right != -1 && left < right)
    //    reversePartArray(arr, left + 1, right - 1);

    //cout << "Array after reverse: ";
    //printArray(arr, SIZE_ARR);


    //5. Визначити функції для обробки квадратних цілих матриць 5х5:

    //-Заповнення матриці випадковими числами, за замовчуванням з відрізку[0..100];
    //-Вивід елементів матриці
    //    - Обчислення за двома матрицями  їх суми(третя матриця), сума обчислюється за формулою Cij = Aij + Bij,
    //    де А, В – вхідні матриці, С – результуюча.
    //    void sumMatrix(const int  a[][SIZE], const int b[][SIZE], int c[][SIZE])
    //    - Множення матриці на ціле число, при цьому кожен елемент матриці множиться на задане ціле  Аij = number ?Aij

    int a[SIZE1][SIZE1], b[SIZE1][SIZE1], c[SIZE1][SIZE1];
    fillMatrix(a);
    fillMatrix(b);

    cout << "\nMatrix A:\n";
    printMatrix(a);

    cout << "\nMatrix B:\n";
    printMatrix(b);

    sumMatrix(a, b, c);
    cout << "\nSum of matrix A + B:\n";
    printMatrix(c);

    multiplyMatrix(a, 2);
    cout << "\nMatrix A multiplying 2:\n";
    printMatrix(a);














}

