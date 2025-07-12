
#include <iostream>
using namespace std;

class CharStackStatic
{
    enum { EMPTY = -1, FULL = 9 };
    char arr[FULL + 1];
    int topIndex;

public:
    CharStackStatic()
    {
        topIndex = EMPTY;
    }
    ~CharStackStatic() = default;

    bool IsFull() const
    {
        return topIndex == FULL;
    }
    bool IsEmpty() const
    {
        return topIndex == EMPTY;
    }
    bool Push(char value)
    {
        if (!IsFull())
        {
            arr[++topIndex] = value;
            return true;
        }
        return false;
    }
    char Pop()
    {
        if (!IsEmpty())
        {
            return arr[topIndex--];
        }
        return '\0';
    }
    char Peek() const
    {
        if (!IsEmpty())
        {
            return arr[topIndex];
        }
        return '\0';
    }
    int GetSize() const
    {
        return topIndex + 1;
    }
    void Clear()
    {
        topIndex = EMPTY;
    }
    void Print() const
    {
        for (int i = 0; i <= topIndex; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

class CharStackDynamic
{
    enum { EMPTY = -1 };
    char* arr;
    int maxSize;
    int topIndex;

public:
    CharStackDynamic() = delete;
    CharStackDynamic(int size) : maxSize(size), topIndex(EMPTY)
    {
        arr = new char[maxSize];
    }
    ~CharStackDynamic()
    {
        delete[] arr;
    }
    bool IsEmpty() const
    {
        return topIndex == EMPTY;
    }
    bool IsFull() const
    {
        return topIndex == maxSize - 1;
    }
    void Resize()
    {
        int newSize = maxSize * 2;
        char* newArr = new char[newSize];

        for (int i = 0; i <= topIndex; i++)
        {
            newArr[i] = arr[i];
        }

        delete[] arr;
        arr = newArr;
        maxSize = newSize;
    }
    bool Push(char value)
    {
        if (IsFull())
        {
            Resize();
        }
        arr[++topIndex] = value;
        return true;
    }
    char Pop()
    {
        if (!IsEmpty())
        {
            return arr[topIndex--];
        }
        return '\0';
    }
    char Peek() const
    {
        if (!IsEmpty())
        {
            return arr[topIndex];
        }
        return '\0';
    }
    int GetSize() const
    {
        return topIndex + 1;
    }
    void Clear()
    {
        topIndex = EMPTY;
    }
    void Print() const
    {
        for (int i = 0; i <= topIndex; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};



int main()
{
    cout << "----------Statick Stack------------" << endl;
    CharStackStatic s1;
    s1.Push('A');
    s1.Push('B');
    s1.Push('C');
    s1.Print();
    cout << "Upper: " << s1.Peek() << endl;
    cout << "Size: " << s1.GetSize() << endl;

    while (!s1.IsEmpty())
    {
        cout << "Delete: " << s1.Pop() << endl;
    }

    s1.Clear();
    cout << "Is clear? " << (s1.IsEmpty() ? "Yes" : "No") << endl;


    cout << "\n----------Dynamic Stack------------" << endl;
    CharStackDynamic s2(3);

    for (char c = 'X'; c <= 'Z'; c++)
    {
        s2.Push(c);
    }

    s2.Push('W');
    s2.Push('Q');
    s2.Print();

    cout << "Upper: " << s2.Peek() << endl;
    cout << "Size: " << s2.GetSize() << endl;

    s2.Clear();
    cout << "Is clear ? " << (s2.IsEmpty() ? "Yes" : "No") << endl;
    s2.Push('Z');
    s2.Print();


}


