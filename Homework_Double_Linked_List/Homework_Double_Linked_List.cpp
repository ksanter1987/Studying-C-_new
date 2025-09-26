
#include <iostream>
using namespace std;

struct Vagon
{
    int number;
    int seats;
    int passengers;

    Vagon() : number(0), seats(0), passengers(0) {}
    Vagon(int n, int s, int p) : number(n), seats(s), passengers(p) {}

    void Show() const
    {
        cout << "Vagon N" << number << " | Seats: " << seats << " | Passengers: " << passengers << endl;
    }
};

class VagonNode
{
public:
    Vagon data;
    VagonNode* prev;
    VagonNode* next;

    VagonNode(const Vagon& v) : data(v), prev(nullptr), next(nullptr) {}
};

class VagonList
{
private:
    VagonNode* head;
    VagonNode* tail;
    int size;

public:
    VagonList() : head(nullptr), tail(nullptr), size(0) {}

    VagonList(const VagonList& other) : head(nullptr), tail(nullptr), size(0)
    {
        VagonNode* current = other.head;
        while (current)
        {
            PushBack(current->data);
            current = current->next;
        }
    }

    ~VagonList()
    {
        while (head)
        {
            DeleteFromHead();
        }
    }

    void PushFront(const Vagon& v)
    {
        VagonNode* node = new VagonNode(v);
        if (!head)
        {
            head = tail = node;
        }
        else
        {
            node->next = head;
            head->prev = node;
            head = node;
        }
        size++;
    }

    void PushBack(const Vagon& v)
    {
        VagonNode* node = new VagonNode(v);
        if (!tail)
        {
            head = tail = node;
        }
        else
        {
            tail->next = node;
            node->prev = tail;
            tail = node;
        }
        size++;
    }

    void DeleteFromHead()
    {
        if (!head) return;
        VagonNode* temp = head;
        if (head == tail)
        {
            head = tail = nullptr;
        }
        else
        {
            head = head->next;
            head->prev = nullptr;
        }
        delete temp;
        size--;
    }

    void DeleteFromTail()
    {
        if (!tail) return;
        VagonNode* temp = tail;
        if (head == tail)
        {
            head = tail = nullptr;
        }
        else
        {
            tail = tail->prev;
            tail->next = nullptr;
        }
        delete temp;
        size--;
    }

    void InsertAt(int index, const Vagon& v)
    {
        if (index < 0 || index > size) return;

        if (index == 0)
        {
            PushFront(v);
        }
        else if (index == size)
        {
            PushBack(v);
        }
        else
        {
            VagonNode* current = head;
            for (int i = 0; i < index; i++)
                current = current->next;

            VagonNode* node = new VagonNode(v);
            node->prev = current->prev;
            node->next = current;

            current->prev->next = node;
            current->prev = node;
            size++;
        }
    }

    void DeleteAt(int index)
    {
        if (index < 0 || index >= size) return;

        if (index == 0)
        {
            DeleteFromHead();
        }
        else if (index == size - 1)
        {
            DeleteFromTail();
        }
        else
        {
            VagonNode* current = head;
            for (int i = 0; i < index; i++)
                current = current->next;

            current->prev->next = current->next;
            current->next->prev = current->prev;
            delete current;
            size--;
        }
    }

    void Show() const
    {
        VagonNode* current = head;
        while (current)
        {
            current->data.Show();
            current = current->next;
        }
    }

    int GetSize() const {
        return size;
    }
};

class Train
{
private:
    string model;
    int countVagons;
    VagonList vagons;

public:
    Train() : model("Unknown"), countVagons(0) {}

    Train(const string& m) : model(m), countVagons(0) {}

    Train(const Train& other)
    {
        model = other.model;
        countVagons = other.countVagons;
        vagons = other.vagons;
    }

    void AddVagonToFront(const Vagon& v)
    {
        vagons.PushFront(v);
        countVagons++;
    }

    void AddVagonToBack(const Vagon& v)
    {
        vagons.PushBack(v);
        countVagons++;
    }

    void DeleteVagonFromFront()
    {
        if (countVagons > 0)
        {
            vagons.DeleteFromHead();
            countVagons--;
        }
    }

    void DeleteVagonFromBack()
    {
        if (countVagons > 0)
        {
            vagons.DeleteFromTail();
            countVagons--;
        }
    }

    void InsertVagonAt(int index, const Vagon& v)
    {
        if (index < 0 || index > countVagons) return;
        vagons.InsertAt(index, v);
        countVagons++;
    }

    void DeleteVagonAt(int index)
    {
        if (index < 0 || index >= countVagons) return;
        vagons.DeleteAt(index);
        countVagons--;
    }

    void Show() const
    {
        cout << "Train: " << model << " | Number of vagons: " << countVagons << endl;
        vagons.Show();
    }
};

int main()
{
    Train t("Intercity");
    t.AddVagonToBack(Vagon(1, 60, 45));
    t.AddVagonToBack(Vagon(2, 55, 50));
    t.AddVagonToFront(Vagon(0, 50, 48));
    t.Show();
    cout << "--------------------------" << endl;

    t.DeleteVagonFromFront();
    t.Show();
    cout << "--------------------------" << endl;

    t.InsertVagonAt(1, Vagon(5, 70, 60));
    t.Show();
    cout << "--------------------------" << endl;

    t.DeleteVagonAt(1);
    t.Show();
    cout << "--------------------------" << endl;

    cout << "\n--- Train copy ---\n";
    Train copy = t;
    copy.Show();




}

