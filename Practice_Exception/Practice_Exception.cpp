#include <iostream>
using namespace std;


class MyException : public exception
{
public:
    MyException(const char* message) : exception(message) {}
};

class Stack
{
    enum { EMPTY = -1 };
    int* arr;
    int maxSize;
    int topIndex;
public:

    Stack() = delete;
    Stack(int size) : maxSize(size), topIndex(EMPTY)
    {
        if (size <= 0)
            throw exception("Stack size must be positive");

        arr = new int[size];
    }

    ~Stack()
    {
        if (arr != nullptr)
            delete[]arr;
    }

    bool IsFull()const
    {
        return topIndex == maxSize - 1;
    }
    void Push(int value)
    {
        if (IsFull())
            throw MyException("Stack is full");
        arr[++topIndex] = value;
    }
    bool IsEmpty()const
    {
        return topIndex == EMPTY;
    }
    int Pop()
    {
        if (IsEmpty())
            throw MyException("Stack is empty");
        return arr[topIndex--];
    }
    void Clear()
    {
        topIndex = EMPTY;
    }
    int Peek() const
    {
        if (IsEmpty())
            throw MyException("Stack is empty, no element to peek!");
        return arr[topIndex];
    }
    int GetSize()const
    {
        return topIndex + 1;
    }
    void Print()const
    {
        for (int i = 0; i <= topIndex; i++)
        {
            cout << arr[i] << " ";
        }cout << endl;
    }
};

int main()
{
    try
    {
        Stack st(5);
        st.Push(10);
        st.Push(20);
        st.Push(30);
        st.Push(40);
        st.Push(50);

        cout << "Size : " << st.GetSize() << endl;
        st.Print();
        cout << "Last element  : " << st.Peek() << endl;

        cout << "Extra push -> ";
        st.Push(60);

        while (!st.IsEmpty())
        {
            cout << "Delete element : " << st.Pop() << endl;
        }

        cout << "Size : " << st.GetSize() << endl;

        cout << "Try pop from empty stack -> ";
        st.Pop();
    }
    catch (const exception& ex)
    {
        cout << "Error: " << ex.what() << endl;
    }
    catch (...)
    {
        cout << "Unknown error " << endl;
    }
}