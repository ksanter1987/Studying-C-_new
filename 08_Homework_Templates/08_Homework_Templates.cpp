#include <iostream>
#include <iomanip>
using namespace std;







//Завдання 1
//Написати функцію або шаблон функції, яка сортує масив за зростанням або за спаданням методом вибору(Selection Sort),
//залежно від третього параметра функції.
//Якщо він дорівнює true, сортування йде за зростанням, якщо false — за спаданням.
//Перші 2 параметри функції — це масив і його розмір, третій параметр за замовчуванням дорівнює true.

template <typename T>
void selectionSort(T arr[], int size, bool direction = true)
{
    for (int i = 0; i < size - 1; i++)
    {
        int selected = i;
        for (int j = i + 1; j < size; j++)
        {
            if ((direction && arr[j] < arr[selected]) || (!direction && arr[j] > arr[selected]))
            {
                selected = j;
            }
        }
        T temp = arr[i];
        arr[i] = arr[selected];
        arr[selected] = temp;
    }
}

//Завдання 2
//Написати функцію або шаблон функції, яка сортує першу половину масиву за спаданням, а другу — за зростанням,
//використовуючи алгоритм бульбашки або камінця.

template <typename T>
void bubbleSortHalf(T arr[], int size)
{
    int half = size / 2;
    for (int i = 0; i < half - 1; i++)
    {
        for (int j = 0; j < half - 1 - i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = half; i < size - 1; i++)
    {
        for (int j = half; j < size - 1 - (i - half); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

//Завдання 3
//У функцію передається масив випадкових чисел у діапазоні від - 20 до + 20.
//Необхідно знайти позиції крайніх від'ємних елементів (найлівішого від'ємного елемента і найправішого від'ємного елемента) 
//і відсортувати елементи, що знаходяться між ними.
//
//Додатково написати функції пошуку першого від'ємного (найлівішого) та останнього від'ємного(найправішого) елемента.
//Функції повертають індекс знайденого від'ємного або -1 при невдалому пошуку. 
//Використати ці функції для пошуку крайніх від'ємних елементів у масиві.

int findFirstNegative(const int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0) return i;
    }
    return -1;
}

int findLastNegative(const int arr[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        if (arr[i] < 0) return i;
    }
    return -1;
}

void sortBetweenNegatives(int arr[], int size)
{
    int left = findFirstNegative(arr, size);
    int right = findLastNegative(arr, size);
    if (left != -1 && right != -1 && left < right)
    {
        for (int i = left + 1; i < right; i++)
        {
            for (int j = left + 1; j < right - (i - left - 1); j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
}


//Додаткове завдання.
//Завдання 4
//Написати шаблони  функцій  для виконання таких завдань :
//? Заповнення квадратної матриці з клавіатури;
//? Вивід матриці на екран;
//? Визначення максимального й мінімального елемента
//на головній діагоналі матриці;
//? Сортування елементів за зростанням окремо для
//кожного рядка матриці.
//
//Перевірити роботу щаблонів функції для матриць різного типу(наприклад int, double, char)

template <typename T>
void inputMatrix(T matrix[][5], int size)
{
    cout << "Enter matrix elements " << size << "x" << size << ":\n";
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            cin >> matrix[i][j];
}

template <typename T>
void printMatrix(T matrix[][5], int size)
{
    cout << "Matrix:\n";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << setw(5) << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

template <typename T>
void minMaxDiagonal(T matrix[][5], int size, T& minVal, T& maxVal)
{
    minVal = matrix[0][0];
    maxVal = matrix[0][0];
    for (int i = 1; i < size; i++)
    {
        if (matrix[i][i] < minVal) minVal = matrix[i][i];
        if (matrix[i][i] > maxVal) maxVal = matrix[i][i];
    }
}

template <typename T>
void sortRows(T matrix[][5], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            for (int k = 0; k < size - j - 1; k++)
            {
                if (matrix[i][k] > matrix[i][k + 1])
                {
                    T temp = matrix[i][k];
                    matrix[i][k] = matrix[i][k + 1];
                    matrix[i][k + 1] = temp;
                }
            }
        }
    }
}


int main()
{

    srand(time(0));
    
    //Завдання 1
//Написати функцію або шаблон функції, яка сортує масив за зростанням або за спаданням методом вибору(Selection Sort),
//залежно від третього параметра функції.
//Якщо він дорівнює true, сортування йде за зростанням, якщо false — за спаданням.
//Перші 2 параметри функції — це масив і його розмір, третій параметр за замовчуванням дорівнює true.

    cout << "\n=== Task 1 ===\n";
    int arr1[10];
    for (int i = 0; i < 10; i++)
        arr1[i] = rand() % 100 - 50;
    cout << "Before sorting (selection): ";
    for (int i = 0; i < 10; i++) cout << arr1[i] << " ";
    cout << endl;
    selectionSort(arr1, 10, true);
    cout << "After sorting (increase): ";
    for (int i = 0; i < 10; i++) cout << arr1[i] << " ";
    cout << endl;


//Завдання 2
//Написати функцію або шаблон функції, яка сортує першу половину масиву за спаданням, а другу — за зростанням,
//використовуючи алгоритм бульбашки або камінця.

    cout << "\n=== Task 2 2 ===\n";
    int arr2[10];
    for (int i = 0; i < 10; i++)
        arr2[i] = rand() % 100;
    cout << "Before sorting halfes: ";
    for (int i = 0; i < 10; i++) cout << arr2[i] << " ";
    cout << endl;
    bubbleSortHalf(arr2, 10);
    cout << "After sorting halfes: ";
    for (int i = 0; i < 10; i++) cout << arr2[i] << " ";
    cout << endl;


//Завдання 3
//У функцію передається масив випадкових чисел у діапазоні від - 20 до + 20.
//Необхідно знайти позиції крайніх від'ємних елементів (найлівішого від'ємного елемента і найправішого від'ємного елемента) 
//і відсортувати елементи, що знаходяться між ними.
//
//Додатково написати функції пошуку першого від'ємного (найлівішого) та останнього від'ємного(найправішого) елемента.
//Функції повертають індекс знайденого від'ємного або -1 при невдалому пошуку. 
//Використати ці функції для пошуку крайніх від'ємних елементів у масиві.

    cout << "\n=== Task 3 ===\n";
    int arr3[10];
    for (int i = 0; i < 10; i++)
        arr3[i] = rand() % 41 - 20;
    cout << "Before sorting between negatives: ";
    for (int i = 0; i < 10; i++) cout << arr3[i] << " ";
    cout << endl;
    sortBetweenNegatives(arr3, 10);
    cout << "After sorting between negatives: ";
    for (int i = 0; i < 10; i++) cout << arr3[i] << " ";
    cout << endl;

//Додаткове завдання.
//Завдання 4
//Написати шаблони  функцій  для виконання таких завдань :
//? Заповнення квадратної матриці з клавіатури;
//? Вивід матриці на екран;
//? Визначення максимального й мінімального елемента
//на головній діагоналі матриці;
//? Сортування елементів за зростанням окремо для
//кожного рядка матриці.
//
//Перевірити роботу щаблонів функції для матриць різного типу(наприклад int, double, char)

    cout << "\n=== Task 4 ===\n";
    int matrix[5][5];
    inputMatrix(matrix, 5);
    cout << "Matrix before rows sorting:\n";
    printMatrix(matrix, 5);
    int minVal, maxVal;
    minMaxDiagonal(matrix, 5, minVal, maxVal);
    cout << "Min diagonal: " << minVal << ", Max diagonal: " << maxVal << endl;
    cout << endl;
    sortRows(matrix, 5);
    cout << "Matrix after rows sorting:\n";
    printMatrix(matrix, 5);


















}

