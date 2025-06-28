
#include <iostream>
#include <ctime>
using namespace std;

class Array {
private:
    long* arr;
    int size;

public:
    Array() : arr(nullptr), size(0) {}
    Array(int s)
    {
        size = s;
        arr = new long[size];
        for (int i = 0; i < size; i++)
            arr[i] = 0;
    }
    Array(const Array& other)
    {
        size = other.size;
        arr = new long[size];
        for (int i = 0; i < size; i++)
            arr[i] = other.arr[i];
    }
    ~Array()
    {
        delete[] arr;
    }
    
    void fillRandom(int min = 1, int max = 100)
    {
        srand(time(0));
        for (int i = 0; i < size; i++)
            arr[i] = min + rand() % (max - min + 1);
    }
    void print() const
    {
        if (size == 0)
        {
            cout << "Array is empty\n";
            return;
        }
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << '\n';
    }
    void addElement(long value)
    {
        long* newArr = new long[size + 1];
        for (int i = 0; i < size; i++)
            newArr[i] = arr[i];
        newArr[size] = value;
        delete[] arr;
        arr = newArr;
        size++;
    }
    void removeByIndex(int index)
    {
        if (index < 0 || index >= size)
        {
            cout << "Wrong index\n";
            return;
        }
        if (size == 1)
        {
            delete[] arr;
            arr = nullptr;
            size = 0;
            return;
        }
        long* newArr = new long[size - 1];
        for (int i = 0, j = 0; i < size; i++)
        {
            if (i != index)
                newArr[j++] = arr[i];
        }
        delete[] arr;
        arr = newArr;
        size--;
    }
    void removeByValue(long value)
    {
        int count = 0;
        for (int i = 0; i < size; i++)
            if (arr[i] == value)
                count++;
        if (count == 0)
        {
            cout << "Value not found\n";
            return;
        }
        long* newArr = new long[size - count];
        for (int i = 0, j = 0; i < size; i++)
            if (arr[i] != value)
                newArr[j++] = arr[i];
        delete[] arr;
        arr = newArr;
        size -= count;
    }
    void sortAscending()
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
    void sortDescending()
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
    long getMin() const
    {
        if (size == 0)
        {
            cout << "Array is empty\n";
            return 0;
        }
        long min = arr[0];
        for (int i = 1; i < size; i++)
            if (arr[i] < min)
                min = arr[i];
        return min;
    }
    long getMax() const
    {
        if (size == 0)
        {
            cout << "Array is empty\n";
            return 0;
        }
        long max = arr[0];
        for (int i = 1; i < size; i++)
            if (arr[i] > max)
                max = arr[i];
        return max;
    }
    double getAverage() const
    {
        if (size == 0) return 0;
        long sum = 0;
        for (int i = 0; i < size; i++)
            sum += arr[i];
        double average = (double)sum / size;
        return average;
    }
    int getSize() const
    {
        return size;
    }
    Array& setValue(int index, long value)
    {
        if (index >= 0 && index < size)
            this->arr[index] = value;
        return *this;
    }
};

int main()
{
    cout << "Default array : ";
    Array arr_default;
    arr_default.print();

    Array arr(10);
    cout << "Parameterized array : ";
    arr.print();
    arr.fillRandom();
    cout << "Normal array: ";
    arr.print();

    cout << "Copy array : ";
    Array arr1 = arr;
    arr1.print();


    arr.addElement(777);
    cout << "After adding 777: ";
    arr.print();

    arr.removeByIndex(5);
    cout << "After remove by index 5: ";
    arr.print();

    arr.removeByValue(777);
    cout << "After deleting 777: ";
    arr.print();

    arr.sortAscending();
    cout << "Sort by ascending: ";
    arr.print();

    arr.sortDescending();
    cout << "Sort by descending: ";
    arr.print();

    cout << "Minimum: " << arr.getMin() << endl;
    cout << "Maximum: " << arr.getMax() << endl;
    cout << "Average: " << arr.getAverage() << endl;



}


