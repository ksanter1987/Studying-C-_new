
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Abonent
{
private:
    string name;
    string homePhone;
    string workPhone;
    string mobilePhone;
    string additionalInfo;
    static int abonentCount;

public:
    Abonent() : Abonent("no name", "no home phone", "no work phone", "no work phone", "no info") {}
    Abonent(string n, string h, string w, string m, string info)
    {
        name = n;
        homePhone = h;
        workPhone = w;
        mobilePhone = m;
        additionalInfo = info;
        abonentCount++;
    }

    void Print() const
    {
        cout << "\nName: " << name
            << "\nHome Phone: " << homePhone
            << "\nWork Phone: " << workPhone
            << "\nMobile Phone: " << mobilePhone
            << "\nAdditional Information: " << additionalInfo << endl;
    }

    string getName() const { return name; }
    string getMobilePhone() const { return mobilePhone; }

    void SaveToFile(const string& filename) const
    {
        ofstream fout(filename);
        if (fout.is_open())
        {
            fout << name << endl;
            fout << homePhone << endl;
            fout << workPhone << endl;
            fout << mobilePhone << endl;
            fout << additionalInfo << endl;
            fout.close();
        }
    }
    void LoadFromFile(const string& filename)
    {
        ifstream fin(filename);
        if (fin.is_open())
        {
            getline(fin, name);
            getline(fin, homePhone);
            getline(fin, workPhone);
            getline(fin, mobilePhone);
            getline(fin, additionalInfo);
            fin.close();
        }
    }

    static int GetCount() { return abonentCount; }
};

int Abonent::abonentCount = 0;

class PhoneBook
{
private:
    Abonent* abonents;
    int countAbonent;

public:
    PhoneBook()
    {
        abonents = nullptr;
        countAbonent = 0;
    }

    void Add(const Abonent& a)
    {
        Abonent* temp = new Abonent[countAbonent + 1];
        for (int i = 0; i < countAbonent; i++)
        {
            temp[i] = abonents[i];
        }
        temp[countAbonent] = a;
        delete[] abonents;
        abonents = temp;
        countAbonent++;
    }
    void Delete(string phone)
    {
        int index = -1;
        for (int i = 0; i < countAbonent; i++)
        {
            if (abonents[i].getMobilePhone() == phone)
            {
                index = i;
                break;
            }
        }
        if (index == -1)
        {
            cout << "Abonent is not found" << endl;
            return;
        }
        Abonent* temp = new Abonent[countAbonent - 1];
        for (int i = 0, j = 0; i < countAbonent; i++)
        {
            if (i != index)
            {
                temp[j++] = abonents[i];
            }
        }
        delete[] abonents;
        abonents = temp;
        countAbonent--;
        cout << "Abonent is deleted" << endl;
    }
    void SearchByName(string name)
    {
        for (int i = 0; i < countAbonent; i++)
        {
            if (abonents[i].getName() == name)
            {
                abonents[i].Print();
                return;
            }
        }
        cout << "Abonent is not found" << endl;
    }
    void SearchByPhone(string phone)
    {
        for (int i = 0; i < countAbonent; i++)
        {
            if (abonents[i].getMobilePhone() == phone)
            {
                abonents[i].Print();
                return;
            }
        }
        cout << "Abonent is not found" << endl;
    }
    void ShowAll()
    {
        if (countAbonent == 0)
        {
            cout << "Phonebook is empty" << endl;
            return;
        }
        for (int i = 0; i < countAbonent; i++)
        {
            abonents[i].Print();
        }
    }

    ~PhoneBook()
    {
        delete[] abonents;
    }
};

int main()
{
    PhoneBook pb;

    Abonent a1("Ivan Ivanov", "62-45-67", "067-000-0000", "093-123-4567", "Some information");
    Abonent a2("Petro Petrov", "62-76-54", "066-111-2222", "097-765-4321", "Something about");

    pb.Add(a1);
    pb.Add(a2);

    cout << "\nPhonebook with all abonents:" << endl;
    pb.ShowAll();

    cout << "\nSearch by name:" << endl;
    pb.SearchByName("Ivan Ivanov");

    cout << "\Search by mobile phone:" << endl;
    pb.SearchByPhone("093-123-4567");

    cout << "\nDeleting by mobile phone:" << endl;
    pb.Delete("093-123-4567");

    cout << "\nPhonebook after deleting:" << endl;
    pb.ShowAll();

    a2.SaveToFile("abonent.txt");

    Abonent loaded;
    loaded.LoadFromFile("abonent.txt");
    cout << "\nRead from file:" << endl;
    loaded.Print();

}


