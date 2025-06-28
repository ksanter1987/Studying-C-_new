
#include <iostream>
using namespace std;



//Task 1
void sortArray(int arr[], int size, int param = 1)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (param)
            {
                if (arr[j] < arr[j + 1]) swap(arr[j], arr[j + 1]);
            }
            else
            {
                if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void showArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}



//Task 2
void sortBetweenNegatives(int arr[], int size)
{
    int left = -1, right = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0) {
            left = i;
            break;
        }
    }
    for (int i = size - 1; i >= 0; i--)
    {
        if (arr[i] < 0)
        {
            right = i;
            break;
        }
    }

    if (left != -1 && right != -1 && left < right - 1)
    {
        for (int i = left + 1; i < right - 1; i++)
        {
            for (int j = i + 1; j < right; j++)
            {
                if (arr[i] > arr[j]) swap(arr[i], arr[j]);
            }
        }
    }
}


//Task 3

void randomArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int j = rand() % size;
        swap(arr[i], arr[j]);
    }
}

void sortingArrayPos(int arr[], int size, int pos)
{
    for (int i = 0; i < pos - 1; i++)
    {
        for (int j = i + 1; j < pos; j++)
        {
            if (arr[i] < arr[j]) swap(arr[i], arr[j]);
        }
    }

    for (int i = pos + 1; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j]) swap(arr[i], arr[j]);
        }
    }
}


int main()
{
    srand(time(0));


    //Task 1
    //1. Дан масив чисел розмірністю 10 елементів.Написа -
    //    ти функцію, яка сортує масив за зростанням або за
    //    спаданням, залежно від третього параметра функції.
    //    Якщо він дорівнює 1, сортування йде за спаданням,
    //    якщо 0, то за зростанням.Перші 2 параметри функ -
    //    ції — це масив і його розмір, третій параметр за за -
    //    мовчуванням дорівнює 1.

    int arr1[10];
    for (int i = 0; i < 10; i++)
        arr1[i] = rand() % 100 - 50;

    cout << "Before sorting:\n";
    showArray(arr1, 10);
    sortArray(arr1, 10, 0); 
    cout << "Sort 1:\n";
    showArray(arr1, 10);
    sortArray(arr1, 10);
    cout << "Sort 2:\n";
    showArray(arr1, 10);


    //Task 2
    //2. Дан масив випадкових чисел у діапазоні від - 20 до
    //    + 20. Необхідно знайти позиції крайніх від'ємних еле-
    //    ментів(найлівішого від'ємного елемента і найправі-
    //        шого від'ємного елемента) і впорядкувати елементи,
    //        що знаходяться між ними.

    int arr2[10];
    for (int i = 0; i < 10; i++)
        arr2[i] = rand() % 41 - 20;
    cout << "\nArray:\n";
    showArray(arr2, 10);
    sortBetweenNegatives(arr2, 10);
    cout << "After sorting:\n";
    showArray(arr2, 10);


    //Task 3
    //На додаткові 12 балів:
    //3. Дан масив із 20 цілих чисел зі значеннями від 1 до 20.
    //    Необхідно :
    //    ■ написати функцію, що розкидає елементи масиву
    //    довільним чином;
    //■ створити випадкове число з того ж діапазону і знайти
    //    позицію цього випадкового числа в масиві;
    //■*** відсортувати елементи масиву, що знаходяться зліва
    //    від знайденої позиції за спаданням, а елементи ма -
    //    сиву, що знаходяться справа від знайденої позиції,
    //    за зростанням.


    int arr3[20];
    for (int i = 0; i < 20; i++)
        arr3[i] = i + 1;

    randomArray(arr3, 20);
    cout << "\nRandomed array:\n";
    showArray(arr3, 20);

    int randomNumber = rand() % 20 + 1;
    cout << "Random number: " << randomNumber << endl;

    int pos = -1;
    for (int i = 0; i < 20; i++)
    {
        if (arr3[i] == randomNumber)
        {
            pos = i;
            break;
        }
    }
    if (pos != -1)
    {
        sortingArrayPos(arr3, 20, pos);
        cout << "Array after sorting:\n";
        showArray(arr3, 20);
    }
    else
    {
        cout << "Number not found.\n";
    }































}

