

#include <iostream>
using namespace std;

class Student
{
protected:
    string name;
    int age;
    string university;

public:
    Student() :name("No name"), age(0), university("No university") {}
    Student(string n, int a, string u) : name(n), age(a), university(u) {}

    void Print()
    {
        cout << "Student: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "University: " << university << endl;
    }

};

class Aspirant : public Student
{
private:
    string aspirantTheme;

public:
    Aspirant() :Student(), aspirantTheme("None") {}
    Aspirant(string n, int a, string u, string theme):Student(n, a, u), aspirantTheme(theme) {}

    void Print()
    {
        Student::Print();
        cout << "PhD theme : " << aspirantTheme << endl;
    }
};

int main()
{
    Student st1;
    Student st2("Ivan Ivanov", 20, "KPI");
    Aspirant asp1;
    Aspirant asp2("Petro Petrenko", 25, "LPI", "AI");



    st1.Print();
    cout << endl;
    st2.Print();
    cout << endl;
    asp1.Print();
    cout << endl;
    asp2.Print();






}


