
#include <iostream>
#include <fstream>
using namespace std;

class Stack
{
    int* arr;
    int capacity;
    int topIndex;

public:
    Stack(int size = 10)
    {
        capacity = size;
        arr = new int[capacity];
        topIndex = -1;
    }

    ~Stack()
    {
        delete[] arr;
    }

    bool IsFull() const
    { 
        return topIndex == capacity - 1;
    }
    bool IsEmpty() const
    { 
        return topIndex == -1;
    }

    bool Push(int value)
    {
        if (!IsFull())
        {
            arr[++topIndex] = value;
            return true;
        }
        return false;
    }

    int Pop()
    {
        if (!IsEmpty())
            return arr[topIndex--];
        return 0;
    }

    int Peek() const
    {
        if (!IsEmpty())
            return arr[topIndex];
        throw runtime_error("Stack is empty!");
    }

    int GetSize() const
    { 
        return topIndex + 1;
    }

    void Clear()
    { 
        topIndex = -1;
    }

    void Print() const
    {
        for (int i = 0; i <= topIndex; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    void SaveToFile(const string& filename) const
    {
        ofstream fout(filename);
        if (!fout) throw runtime_error("Cannot open file!");
        fout << capacity << " " << GetSize() << endl;
        for (int i = 0; i <= topIndex; i++)
            fout << arr[i] << " ";
        fout << endl;
        fout.close();
    }

    void LoadFromFile(const string& filename)
    {
        ifstream fin(filename);
        if (!fin) throw runtime_error("Cannot open file!");

        int size, count;
        fin >> size >> count;

        delete[] arr;
        capacity = size;
        arr = new int[capacity];
        topIndex = -1;

        for (int i = 0; i < count; i++)
        {
            int value;
            fin >> value;
            Push(value);
        }

        fin.close();
    }
};

int main()
{
    Stack st(10);

    st.Push(10);
    st.Push(20);
    st.Push(30);
    st.Push(40);
    st.Push(50);

    cout << "Stack: ";
    st.Print();
    cout << "Size: " << st.GetSize() << endl;
    cout << "Top element: " << st.Peek() << endl;

    st.SaveToFile("stack.txt");

    st.Clear();
    cout << "After Clear: ";
    st.Print();

    st.LoadFromFile("stack.txt");
    cout << "After Load: ";
    st.Print();

}


