#include <iostream>
using namespace std;


class Person //absratct
{
protected:
    string name;

public:
    Person() :name("no name"){}
    Person(string name) :name(name) {}


    virtual void Print()const
    {
        cout << "Name : " << name << endl;

    }

    virtual ~Person() = 0 {};

};

class Aspirant : public Person
{
    string* subjects;
    int countSub;
public:
    Aspirant() : subjects(nullptr), countSub(0), Person() {}
    Aspirant(string name, initializer_list<string> list) : Person(name)
    {
        countSub = list.size();
        subjects = new string[countSub];
        int i = 0;
        for (string s : list)
        {
            subjects[i] = s;
            i++;
        }
    }

    void Print()const override
    {
        Person::Print();
        cout << "Subject : ";
        for (int i = 0; i < countSub; i++)
        {
            cout << subjects[i] << " , ";
        }cout << "\n----------------------------------------------" << endl;

    }
    ~Aspirant()
    {
        if (subjects != nullptr)
            delete[]subjects;
    }
};


int main()
{
    srand(time(0));
    /*Person st("Vasia");
    st.Print();*/

   /* Aspirant a("Inna", { "Main page", "Ui/UX Design", "Trends in internet" });
    a.Print();*/

    cout << "________________________________________________________" << endl;

    Person* students[3]
    {
        /*new Person("Vasia"),*/
        new Aspirant("Inna", { "Main page", "Ui/UX Design", "Trends in internet"}),
        new Aspirant("Oleg", {"C++", "C#"})
    };
    for (int i = 0; i < 3; i++)
    {
        students[i]->Print();
        delete students[i];
    }


}


