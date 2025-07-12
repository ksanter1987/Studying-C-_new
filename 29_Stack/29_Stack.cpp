
#include <iostream>
using namespace std;

class MyClass
{
    //default constructor
    // //copy constructor
    //default destructor
    //operator =
public:
    MyClass() = default;
    MyClass(const MyClass& other) = delete;

};

class Stack
{
    enum { EMPTY = -1, FULL = 9 };

    int arr[FULL + 1]; //10
    int topIndex;

public:
    //delete default
    Stack()
    {
        topIndex = EMPTY;
    }
    ~Stack() = default;  //деструктор з пустими дужками
    bool IsFull()
    {
        return topIndex == FULL;
    }
    bool Push(int value)
    {
        if (!IsFull())
        {
            topIndex++;
            arr[topIndex] = value;
            return true;
        }
        return false;
    }
    bool IsEmpty()
    {
        return topIndex == EMPTY;
    }
    int Pop()
    {
        if (!IsEmpty())
        {
            return arr[topIndex--];
        }
        return 0;
    }
    void Clear()
    {
        topIndex = EMPTY;
    }
    int Peek()
    {
        if (!IsEmpty())
        {
            return arr[topIndex];
        }
    }
    int GetSize()
    {
        return topIndex + 1;
    }
    void Print()
    {
        for (int i = 0; i <= topIndex; i++)
        {
            cout << arr[i] << " ";
        }cout << endl;
    }
};


int main()
{
    Stack st;
    st.Push(10);
    st.Push(20);
    st.Push(30);
    st.Push(40);
    st.Push(50);
    cout << "Size : " << st.GetSize() << endl;
    st.Print();
    cout << "Last element : " << st.Peek() << endl;

    while (!st.IsEmpty())
    {
        cout << "Delete element : " << st.Pop() << endl;

    }
}


