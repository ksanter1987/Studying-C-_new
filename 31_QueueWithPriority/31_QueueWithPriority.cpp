

#include <iostream>
using namespace std;

struct Element
{
    char arr;
    int priority;
};

class Queue
{
    Element* arr;
    int size;
public:
    Queue() :arr(nullptr), size(0) {}
    ~Queue()
    {
        delete[]arr;
    }
    void Enqueue(Element el)
    {
        int index = 0;
        while (index < size && arr[index].priority < el.priority) { index++; }
        size++;
        Element* temp = new Element[size];
        for (int i = index; i < size; i++)
        {
            temp[i + 1] = arr[i];
        }
        if (arr != nullptr)
            delete[]arr;
        arr = temp;
    }
    bool IsEmpty()
    {
        return size == 0;
    }
    Element Dequeue()
    {
        if (!IsEmpty())
        {
            Element first = arr[0];
            for (int i = 0; i < size-1; i++)
            {
                arr[i] = arr[i + 1];
            }
            size--;
            return first;
        }
    }
    void Print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i].value << " : " << arr[i].priority;
        }cout << endl;
    }
};


int main()
{
    Queue q;
    Element el = { "A", 1 };
    q.Enqueue(el);
    q.Enqueue(Element{ "B",8 });
    q.Enqueue(Element{ "c", 3 });
    q.Enqueue(Element{ "k", 2 });
    q.Enqueue(Element{ "N", 12 });
    q.Print();
    q.Enqueue(Element{ "D", 42 });



}

