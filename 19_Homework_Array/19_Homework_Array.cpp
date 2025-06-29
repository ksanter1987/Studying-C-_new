
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Array
{
private:
    long* arr;
    int size;

public:
    Array() : arr(nullptr), size(0) {}
    explicit Array(int s)
    {
        size = s;
        arr = new long[size];
        for (int i = 0; i < size; i++)
        {
            arr[i] = 0;
        }
    }
    Array(const Array& other)
    {
        size = other.size;
        arr = new long[size];
        for (int i = 0; i < size; i++)
        {
            arr[i] = other.arr[i];
        }
    }
    ~Array()
    {
        delete[]arr;
    }


    void FillRandom(int min = 0, int max = 100)
    {
        srand(time(0));
        for (int i = 0; i < size; i++)
        {
            arr[i] = rand() % (max - min + 1) + min;
        }
    }
    void FillFromKeyboard()
    {
        for (int i = 0; i < size; i++)
        {
            cout << "Enter element [" << i << "]: ";
            cin >> arr[i];
        }
    }
    void Print() const
    {
        if (size == 0)
        {
            cout << "Array is empty!" << endl;
            return;
        }
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void Add(long value)
    {
        long* temp = new long[size + 1];
        for (int i = 0; i < size; i++)
            temp[i] = arr[i];
        temp[size] = value;
        delete[]arr;
        arr = temp;
        size++;
    }
    void DeleteByIndex(int index)
    {
        if (index < 0 || index >= size)
        {
            cout << "Invalid index!" << endl;
            return;
        }
        if (size == 1)
        {
            delete[]arr;
            arr = nullptr;
            size = 0;
            return;
        }
        long* temp = new long[size - 1];
        for (int i = 0, j = 0; i < size; i++)
        {
            if (i != index)
                temp[j++] = arr[i];
        }
        delete[]arr;
        arr = temp;
        size--;
    }
    void DeleteByValue(long value)
    {
        int index = -1;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == value)
            {
                index = i;
                break;
            }
        }
        if (index != -1)
            DeleteByIndex(index);
        else
            cout << "Value not found!" << endl;
    }
    void SortAscending()
    {
        for (int i = 0; i < size - 1; i++)
        {
            for (int j = 0; j < size - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    long temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
    void SortDescending()
    {
        for (int i = 0; i < size - 1; i++)
        {
            for (int j = 0; j < size - i - 1; j++)
            {
                if (arr[j] < arr[j + 1])
                {
                    long temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
    long Min() const
    {
        if (size == 0) return 0;
        long min = arr[0];
        for (int i = 1; i < size; i++)
            if (arr[i] < min) min = arr[i];
        return min;
    }
    long Max() const
    {
        if (size == 0) return 0;
        long max = arr[0];
        for (int i = 1; i < size; i++)
            if (arr[i] > max) max = arr[i];
        return max;
    }
    double Average() const
    {
        if (size == 0) return 0;
        long sum = 0;
        for (int i = 0; i < size; i++)
            sum += arr[i];
        return (double)sum / size;
    }

    int GetSize() const { return size; }

    Array* GetThis() { return this; }
};

int main()
{
    Array arrKeyboard(5);
    cout << "Enter 3 elements : " << endl;
    arrKeyboard.FillFromKeyboard();
    cout << "Array from key board: ";
    arrKeyboard.Print();


    Array arr(5);
    cout << "Default array: ";
    arr.Print();
    arr.FillRandom(10, 99);
    cout << "Initial array: ";
    arr.Print();

    arr.Add(77);
    cout << "After adding element: ";
    arr.Print();

    arr.DeleteByValue(77);
    cout << "After deleting by value: ";
    arr.Print();

    arr.SortAscending();
    cout << "Sorted ascending: ";
    arr.Print();

    arr.SortDescending();
    cout << "Sorted descending: ";
    arr.Print();

    cout << "Min: " << arr.Min() << endl;
    cout << "Max: " << arr.Max() << endl;
    cout << "Average: " << arr.Average() << endl;

    Array copy = arr;
    cout << "Copied array: ";
    copy.Print();


}


