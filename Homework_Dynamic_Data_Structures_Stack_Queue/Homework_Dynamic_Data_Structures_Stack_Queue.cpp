#include <iostream>
#include <string>
using namespace std;

struct Document
{
    string filename;
    string role;
    Document() : filename(""), role("") {}
    Document(const string& f, const string& r) : filename(f), role(r) {}
};

template <typename T>
class PriorityQueue
{
private:
    struct Node
    {
        T data;
        int priority;
        Node* next;
        Node(const T& d, int p) : data(d), priority(p), next(nullptr) {}
    };
    Node* head;

public:
    PriorityQueue() : head(nullptr) {}
    ~PriorityQueue()
    {
        clear();
    }

    bool isEmpty() const
    {
        return head == nullptr;
    }

    void clear()
    {
        while (head)
        {
            Node* tmp = head;
            head = head->next;
            delete tmp;
        }
    }

    void enqueue(const T& value, int priority)
    {
        Node* node = new Node(value, priority);
        if (!head)
        {
            head = node;
            return;
        }
        if (priority > head->priority)
        {
            node->next = head;
            head = node;
            return;
        }
        Node* cur = head;
        while (cur->next && cur->next->priority >= priority)
        {
            cur = cur->next;
        }
        node->next = cur->next;
        cur->next = node;
    }

    bool dequeue(T& out)
    {
        if (!head) return false;
        Node* tmp = head;
        out = head->data;
        head = head->next;
        delete tmp;
        return true;
    }

    bool peek(T& out, int& outPriority) const
    {
        if (!head) return false;
        out = head->data;
        outPriority = head->priority;
        return true;
    }

    template <typename Fn>
    void forEach(Fn fn) const
    {
        Node* cur = head;
        while (cur)
        {
            fn(cur->data, cur->priority);
            cur = cur->next;
        }
    }
};

void printRoleMenu()
{
    cout << "Choose your role:" << endl;
    cout << " 1) Guest           (priority 1)" << endl;
    cout << " 2) Administrator   (priority 2)" << endl;
    cout << " 3) Manager         (priority 3)" << endl;
    cout << " 4) Director        (priority 4)" << endl;
    cout << " 5) Custom priority (enter number)" << endl;
}


int roleToPriorityAndName(int choice, string& roleOut)
{
    if (choice == 1)
    {
        roleOut = "Guest";
        return 1;
    }
    else if (choice == 2)
    {
        roleOut = "Administrator";
        return 2;
    }
    else if (choice == 3)
    {
        roleOut = "Manager";
        return 3;
    }
    else if (choice == 4)
    {
        roleOut = "Director";
        return 4;
    }
    else
    {
        roleOut = "Guest";
        return 1;
    }
}

int readIntSafe()
{
    int x;
    while (!(cin >> x))
    {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Invalid input. Try again: ";
    }
    cin.ignore(10000, '\n');
    return x;
}

string readLineSafe()
{
    string s;
    getline(cin, s);
    return s;
}

int main()
{
    PriorityQueue<Document> queue;

    while (true)
    {
        cout << "\n=== Printer Queue Menu ===\n";
        cout << "1) Add document to queue\n";
        cout << "2) Print next (highest priority)\n";
        cout << "3) Show queue\n";
        cout << "4) Clear queue\n";
        cout << "0) Exit\n";
        cout << "Choose option: ";

        int option = readIntSafe();

        if (option == 0)
        {
            cout << "Goodbye!\n";
            break;
        }
        else if (option == 1)
        {
            cout << "Enter filename: ";
            string filename = readLineSafe();

            printRoleMenu();
            cout << "Enter role option (1-5): ";
            int roleOpt = readIntSafe();

            int priority = 1;
            string role = "Guest";

            if (roleOpt >= 1 && roleOpt <= 4)
            {
                priority = roleToPriorityAndName(roleOpt, role);
            }
            else if (roleOpt == 5)
            {
                cout << "Enter custom priority: ";
                priority = readIntSafe();
                role = "Custom";
            }
            else
            {
                cout << "Unknown role. Set to Guest (1).\n";
                priority = 1;
                role = "Guest";
            }

            Document doc(filename, role);
            queue.enqueue(doc, priority);
            cout << "Added: '" << filename << "' as " << role << " (priority " << priority << ")\n";
        }
        else if (option == 2)
        {
            if (queue.isEmpty())
            {
                cout << "Queue is empty. Nothing to print.\n";
            }
            else
            {
                Document printing;
                bool ok = queue.dequeue(printing);
                if (ok)
                {
                    cout << "Printing: '" << printing.filename << "' by " << printing.role << endl;
                }
            }
        }
        else if (option == 3)
        {
            if (queue.isEmpty())
            {
                cout << "Queue is empty.\n";
            }
            else
            {
                cout << "\n-- Current queue --\n";
                int idx = 1;
                queue.forEach([&idx](const Document& d, int pr){cout << idx++ << ") priority=" << pr << " | file='" << d.filename << "'" << " | role=" << d.role << "\n";});
            }
        }
        else if (option == 4)
        {
            queue.clear();
            cout << "Queue cleared.\n";
        }
        else
        {
            cout << "Unknown option. Try again.\n";
        }
    }

}


