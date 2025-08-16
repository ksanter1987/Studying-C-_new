
#include <iostream>
using namespace std;

class Passport
{
protected:
    string fullName;
    string idNumber;
    string nationality;

public:
    Passport() : fullName("No name"), idNumber("No ID"), nationality("Ukraine") {}
    Passport(string fn, string id, string nat = "Ukraine") : fullName(fn), idNumber(id), nationality(nat) {}

    void Print()
    {
        cout << "Passport of citizen of Ukraine" << endl;
        cout << "Full Name: " << fullName << endl;
        cout << "ID number: " << idNumber << endl;
        cout << "Nationality: " << nationality << endl;
    }
};

class ForeignPassport : public Passport
{
private:
    string foreignPassNumber;
    string* visas;
    int visaCount;
    int visaCapacity;

public:
    ForeignPassport() : Passport(), foreignPassNumber("No FP"), visaCount(0), visaCapacity(3)
    {
        visas = new string[visaCapacity];
    }
    ForeignPassport(string fn, string id, string nat, string fpNum) : Passport(fn, id, nat), foreignPassNumber(fpNum), visaCount(0), visaCapacity(3)
    {
        visas = new string[visaCapacity];
    }
    ~ForeignPassport()
    {
        delete[] visas;
    }

    void AddVisa(string visa)
    {
        if (visaCount >= visaCapacity)
        {
            visaCapacity *= 2;
            string* newVisas = new string[visaCapacity];
            for (int i = 0; i < visaCount; i++)
            {
                newVisas[i] = visas[i];
            }
            delete[] visas;
            visas = newVisas;
        }
        visas[visaCount++] = visa;
    }

    void Print()
    {
        Passport::Print();
        cout << "Foreign Passport number: " << foreignPassNumber << endl;
        if (visaCount == 0)
        {
            cout << "No visas" << endl;
        }
        else
        {
            cout << "Visas:" << endl;
            for (int i = 0; i < visaCount; i++)
            {
                cout << "- " << visas[i] << endl;
            }
        }
    }
};

int main()
{
    Passport p1;
    Passport p2("Ivan Ivanov", "ID123456");
    ForeignPassport fp1;
    ForeignPassport fp2("Petro Petrenko", "ID654321", "Ukraine", "FP987654");
    fp2.AddVisa("Poland");
    fp2.AddVisa("USA");
    fp2.AddVisa("Canada");
    fp2.AddVisa("Germany");


    p1.Print();
    cout << endl;
    p2.Print();
    cout << endl;
    fp1.Print();
    cout << endl;
    fp2.Print();
}

