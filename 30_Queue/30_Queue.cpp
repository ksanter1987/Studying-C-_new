

#include <iostream>
#include <conio.h>
using namespace std;

class Queue
{
    int* arr;
    int maxSize;
    int topIndex;
public:
    Queue(int maxSize)
    {
        this->maxSize = maxSize;
        arr = new int[maxSize];
        topIndex = 0;
    }
    ~Queue()
    {
        if (arr != nullptr)
            delete[]arr;
    }
    bool IsFull()
    {
        return topIndex == maxSize;
    }
    bool IsEmpty()
    {
        return topIndex == 0;
    }
    void Enqueue(int value)
    {
        if (!IsFull())
            arr[topIndex++] = value;
    }
    //int Dequeue() //Simple queue
    //{
    //    if (!IsEmpty())
    //    {
    //        int first = arr[0];
    //        for (int i = 0; i < topIndex; i++)
    //        {
    //            arr[i] = arr[i + 1];
    //            topIndex--;
    //            return first;
    //        }
    //    }
    //}
    int Dequeue()//cycle queue
    {
        if (!IsEmpty())
        {
            int first = arr[0];
            for (int i = 0; i < topIndex; i++)
            {
                arr[i] = arr[i + 1];
                //topIndex--;

                return first;
            }
        }
    }
    int GetCount()
    {
        return topIndex;
    }
    void Clear()
    {
        topIndex = 0;
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
    srand(time(0));
    Queue q(25);
    for (int i = 0; i < 18; i++)
    {
        q.Enqueue(rand() % 50);
    }
    q.Print();

    while (!q.IsEmpty())
    {
        cout << "Element : " << q.Dequeue() << endl;
        _getch();
        //int choice = _getch();
        //cout << choice << " ";
    }
    cout << "Size : " << q.GetCount() << endl;
}


