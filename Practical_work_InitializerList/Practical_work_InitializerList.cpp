
#include <iostream>
using namespace std;

template <typename T>
class Array
{
    T* arr;
    int size;
public:
    Array()
    {
        arr = nullptr;
        size = 0;
    }
    Array(int size)
    {
        this->size = size;
        arr = new T[size]{};
    }
    Array(const initializer_list<T> list)
    {
        this->size = list.size();
        arr = new T[size];
        int i = 0;
        for (T elem : list)
        {
            arr[i++] = elem;
        }
    }
    void Fill(const initializer_list<T> list)
    {
        if (arr != nullptr)
        {
            delete[] arr;
        }

        this->size = list.size();
        arr = new T[size];
        int i = 0;
        for (T elem : list)
        {
            arr[i++] = elem;
        }
    }
    ~Array()
    {
        if (arr != nullptr)
        {
            delete[] arr;
        }
    }
    void Print() const
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    T& operator[](int index)const
    {
        return arr[index];
    }
    int getSize() const
    {
        return size;
    }

};

template <typename T>
T Max(const Array<T>& arr)
{
    T maxVal = arr[0];
    for (int i = 1; i < arr.getSize(); i++)
    {
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }
    return maxVal;
}

template <typename T>
T Min(const Array<T>& arr)
{
    T minVal = arr[0];
    for (int i = 1; i < arr.getSize(); i++)
    {
        if (arr[i] < minVal)
            minVal = arr[i];
    }
    return minVal;
}

template <typename T>
void Sort(Array<T>& arr)
{
    int n = arr.getSize();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

template <typename T>
int BinarySearch(const Array<T>& arr, T key)
{
    int left = 0;
    int right = arr.getSize() - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

template <typename T>
void Replace(Array<T>& arr, int index, T newValue)
{
    if (index >= 0 && index < arr.getSize())
        arr[index] = newValue;
    else
        cout << "Invalid index\n";
}
void Replace(Array<string>& arr, int index, const char* newValue)
{
    if (index >= 0 && index < arr.getSize())
        arr[index] = string(newValue);
    else
        cout << "Invalid index\n";
}

int main()
{
    Array<int> a1({ 1, 2, 3, 4, 5 });
    a1.Print();

    a1[1] = 100;
    a1.Print();

    Array<string> a2({ "a1", "b2", "c3" });
    a2.Print();

    a2.Fill({ "aaaaa", "bbbbb", "cccccc"});
    a2.Print();

    cout << "\n\n\n";

    Array<int> a = { 5, 3, 8, 2, 9 };
    cout << "Original array: ";
    a.Print();

    cout << "Max: " << Max(a) << endl;
    cout << "Min: " << Min(a) << endl;

    Sort(a);
    cout << "Sorted array: ";
    a.Print();

    int index = BinarySearch(a, 8);
    cout << "Search number 8 : ";
    if (index != -1)
        cout << "Number at index: " << index << endl;
    else
        cout << "Number not found\n";    
    
    int index1 = BinarySearch(a, 4);
    cout << "Search number 4 : ";
    if (index1 != -1)
        cout << "Number at index: " << index1 << endl;
    else
        cout << "Number not found\n";

    Replace(a, 2, 100);
    cout << "After replace: ";
    a.Print();

    
    Replace(a2, 1, "XXXXXXXXXX");
    cout << "After replace: ";
    a2.Print();
}


