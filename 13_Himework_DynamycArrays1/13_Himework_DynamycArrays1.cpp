
#include <iostream>
using namespace std;



void addElementPosition(int*& arr, int& size, int element, int position)
{
    if (position < 0 || position > size)
    {
        cout << "Incorrect position" << endl;
        return;
    }
    int* newArr = new int[size + 1];
    for (int i = 0; i < position; i++)
    {
        newArr[i] = arr[i];
    }
    newArr[position] = element;
    for (int i = position; i < size; i++)
    {
        newArr[i + 1] = arr[i];
    }
    delete[] arr;
    arr = newArr;
    size++;
}

void printArray(int* arr, int size)
{
    cout << "\t\t";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n" << endl;
}




int main()
{
    //Додати новий елемент до одновимірного масиву по певній позиції
    //    Позицію вказує користувач

    int size = 7;
    int* arr = new int[size] {10, 20, 30, 40, 50, 60, 70};

    cout << "Initial array:\n";
    printArray(arr, size);

    int element, position;
    cout << "Enter new element: ";
    cin >> element;

    cout << "Enter position (0.." << size << "): ";
    cin >> position;

    addElementPosition(arr, size, element, position);

    cout << "\nNew array:\n";
    printArray(arr, size);

    delete[] arr;















}


