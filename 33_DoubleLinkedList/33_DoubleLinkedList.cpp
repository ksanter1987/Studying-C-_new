

#include <iostream>
using namespace std;




class List
{
    struct Node
    {
        Node* prev;
        int value;
        Node* next;
        Node(Node* prev, int value, Node* next) :prev(prev), value(value), next(next) {}
    };
private:

    Node* head;
    Node* tail;
public:
    List()
    {
        head = nullptr;
        tail = nullptr;
    }
    bool IsEmpty()
    {
        return head == nullptr;
    }

    void AddToHead(int value)
    {
        Node* newNode = new Node(nullptr, value, head);
        if (IsEmpty())
        {
            head = tail = newNode;
        }
        head->prev = newNode;
        head = newNode;
    }
    void Print()
    {
        Node* current = head;
        while (current != nullptr)
        {
            cout << current->value << " ";
            current = current->next;
        }
        cout << endl;
    }
    ~List()
    {
        Node* current = nullptr;
        while (head != nullptr)
        {
            current = head;
            head = head->next;
            delete current;
        }
    }
    void AddToTail(int value)
    {
        Node* newNode = new Node(tail, value, nullptr);
        if (head == nullptr)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    int getElement(int pos)
    {
        Node* current = head;
        int i = 1;
        while (current != nullptr)
        {
            if (pos == i) return current->value;
            current = current->next;
            i++;
        }
        return -1;
    }
    int operator[](int pos)
    {
        Node* current = head;
        int i = 1;
        while (current != nullptr)
        {
            if (pos == i) return current->value;
            current = current->next;
            i++;
        }
        return -1;
    }
    void DeleteFromTail()
    {
        if (head == nullptr) return;
        if (head->next == nullptr)
        {
            delete head;
            head = tail = nullptr;
        }
        else
        {
            tail = tail->prev;
            delete tail->next;
            tail->next = nullptr;
        }

    }
    void DeleteFromHead()
    {
        if (head == nullptr) return;
        Node* temp = head;
        head = head->next;
        delete temp;
    }

};

int main()
{
    List l;
    for (int i = 0; i < 10; i++)
    {
        l.AddToHead(i);
    }
    l.Print();

    l.AddToTail(100);
    l.AddToTail(200);
    l.AddToTail(300);
    l.Print();

    l.DeleteFromTail();
    l.DeleteFromTail();
    l.DeleteFromTail();
    l.Print();

}

