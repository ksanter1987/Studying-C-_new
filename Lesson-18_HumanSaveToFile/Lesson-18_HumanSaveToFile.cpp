

#include <iostream>
#include <fstream>
using namespace std;

const char* FILENAME = "D://HumanData.txt";

struct Human
{
    char name[50];
    char surname[50];
    int age;
    void Fill()
    {
        cout << "Enter name : "; cin >> name;
        cout << "Enter surname : "; cin >> surname;
        cout << "Enter age : "; cin >> age;
    }
    void Show()
    {
        cout << "Name : " << name << " . Surname : " << surname << ". Age : " << age << endl;
    }
    void SaveToFile()
    {
        ofstream out(FILENAME, ios_base::app);
        out << name;
        out << ":";
        out << surname;
        out << ":";
        out << age;
        out << "|";
        cout << "Save to file";
        out.close();
    }

    void FillFromFile(char* nameF, char* surF, int ageF)
    {
        strcpy_s(name, nameF);
        strcpy_s(surname, surF);
        age = ageF;
    }
    void Copy(Human h)
    {
        strcpy_s(name, strlen(h.name) + 1, h.name);
        strcpy_s(surname, strlen(h.surname) + 1, h.surname);
        age = h.age;
    }

};

//void Fill(Human &h)
//{
//    cout << "Enter name : "; cin >> h.name;
//    cout << "Enter surname : "; cin >> h.surname;
//    cout << "Enter age : "; cin >> h.age;
//}


void ReadFromFile(Human* &h, int& size)
{
    ifstream in(FILENAME);
    char buff_name[255];
    char buff_surname[255];
    char buff_age[255];
    while (!in.eof())
    {
        in.getline(buff_name, 255, ':');
        if (in.eof())break;
        in.getline(buff_surname, 255, ':');
        in.getline(buff_age, 255, '|');

        int age = atoi(buff_age); // atoi ====> char=====>int
        Human read;
        read.FillFromFile(buff_name, buff_surname, age);
        size++;
        Human* temp = new Human[size];
        for (int i = 0; i < size - 1; i++)
        {
            temp[i].Copy(h[i]);
        }
        temp[size - 1] = read;
        delete[]h;
        h = temp;

    }
}




int main()
{
    //Human h;
    //h.Fill();
    //h.SaveToFile();

    int size = 0;
    Human* h = new Human[size];
    ReadFromFile(h, size);
    for (int i = 0; i < size; i++)
    {
        h[i].Show();
    }


















}


