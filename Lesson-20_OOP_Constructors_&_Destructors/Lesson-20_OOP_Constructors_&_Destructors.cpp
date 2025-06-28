

#include <iostream>
using namespace std;

struct PIB
{
    string name;
    string surname;
    string lastname;
};

struct Date
{
    int day;
    int month;
    int year;
};

class Student
{
private:
    PIB fullname;
    Date birthdate;
    string phone;
    string city;
    string country;
    string university;
    string city_university;
    string country_university;
    string group;
    int* marks;
    int markCount;
    float average;

    void setAverage()
    {
        int summa = 0;
        for (int i = 0; i < markCount; i++)
        {
            summa += marks[i];
        }
        this->average = (float)summa / markCount;
    }

public:
    //ctor + TAB  = constructor
    Student()
    {
        cout << "Default constructor" << endl;
        fullname.name = "no name";
        fullname.surname = "no surname";
        fullname.lastname = "no lastname";
        birthdate.day = 0;
        birthdate.month = 0;
        birthdate.year = 0;
        phone = "no phone";
        city = "no city";
        country = "no country";
        university = "no university";
        city_university = "no city_university";
        country_university = "no country_university";
        group = "no group";
        marks = nullptr;
        markCount = 0;
        average = 0;
    }
    //parametrized constructor
    Student(string n, string l, string s)
    {
        cout << "parametrized constructor" << endl;
        fullname.name = n;
        fullname.surname = s;
        fullname.lastname = l;
        birthdate.day = 0;
        birthdate.month = 0;
        birthdate.year = 0;
        phone = "no phone";
        city = "no city";
        country = "no country";
        university = "no university";
        city_university = "no city_university";
        country_university = "no country_university";
        group = "no group";
        marks = nullptr;
        markCount = 0;
        average = 0;
        
    }

    Student(string n, string l, string s, Date b)
    {
        cout << "parametrized constructor" << endl;
        fullname.name = n;
        fullname.surname = s;
        fullname.lastname = l;
        birthdate = b;
        phone = "no phone";
        city = "no city";
        country = "no country";
        university = "no university";
        city_university = "no city_university";
        country_university = "no country_university";
        group = "no group";
        marks = nullptr;
        markCount = 0;
        average = 0;
    }
    Student(PIB pib, Date b, string p, string c, string country, string u, string u_ci, string u_country, string group)
    {
        cout << "parametrized constructor" << endl;
        this->fullname = pib;
        this->birthdate = b;
        this->phone = p;
        this->city = c;
        this->country = country;
        this->university = u;
        this->city_university = u_ci;
        this->country_university = u_country;
        this->group = group;
        this->marks = nullptr;
        this->markCount = 0;
        this->average = 0;
    }
    Student(const Student &other)
    {
        this->fullname = other.fullname;
        this->birthdate = other.birthdate;
        this->city = other.city;
        this->country = other.country;
        
        this->markCount = other.markCount;
        /*this->marks = other.marks;*/
        this->marks = new int[other.markCount];
        for (int i = 0; i < markCount; i++)
        {
            this->marks[i] = other.marks[i];
        }
        this->average = other.average;

    }
    void setName(string name)
    {
        fullname.name = name;
    }
    void setSurname(string surname)
    {
        fullname.surname = surname;
    }
    void setLastname(string lastname)
    {
        fullname.lastname = lastname;
    }
    void setBirthday(Date date)
    {
        /*birthdate.day = date.day;
        birthdate.month = date.month;
        birthdate.year = date.year;*/
        birthdate = date;
    }
    void AddMark(int mark)
    {
        markCount++;
        int* temp = new int[markCount];
        for (int i = 0; i < markCount - 1; i++)
        {
            temp[i] = marks[i];
        }
        temp[markCount - 1] = mark;
        if (marks != nullptr)
            delete[]marks;
        marks = temp;
        setAverage();
    }

    void Delete()
    {
        if (marks != nullptr)
            delete[]marks;
    }


    void Initialize()
    {
        fullname.name = "no name";
        fullname.surname = "no surname";
        fullname.lastname = "no lastname";
        birthdate.day = 0;
        birthdate.month = 0;
        birthdate.year = 0;
        phone = "no phone";
        city = "no city";
        country = "no country";
        university = "no university";
        city_university = "no city_university";
        country_university = "no country_university";
        group = "no group";
        marks = nullptr;
        markCount = 0;
        average = 0;
    }

    void Print()
    {
        cout << "Full name : " << fullname.name << " " << fullname.surname << " " << fullname.lastname << endl;
        cout << "Birthdate : " << birthdate.day << " " << birthdate.month << " " << birthdate.year << endl;
        cout << "Phone : " << phone << endl;
        cout << "City : " << city << endl;
        cout << "Country : " << country << endl;
        cout << "University : " << university << endl;
        cout << "City university : " << city_university << endl;
        cout << "Country University : " << country_university << endl;
        cout << "Group : " << group << endl;
        cout << "Marks : ";
        for (int i = 0; i < markCount; i++)
        {
            cout << marks[i] << " ";
        }cout << endl;
        cout << "Average mark : " << average << endl;

    }
    ~Student()
    {
        cout << " Destructor " << fullname.name << endl;
    }

};

class User {};

int main()
{
    User user; // default constructor

    Student student;
    /*student.Initialize();*/
    
    student.setName("Olga");
    student.setSurname("Ivanchuk");
    student.setLastname("Mykolaivna");
    student.setBirthday({ 11,8,2000 });
    student.AddMark(12);
    student.AddMark(8);
    student.AddMark(4);
    student.AddMark(2);

    student.Print();

    //student.Delete();

    cout << "===================================================" << endl;
    Student st1("Ira", "Ilchuk", "Petrivna"); // parametrized constructor
    st1.AddMark(11);
    st1.AddMark(10);
    st1.AddMark(10);
    st1.Print();
    //st1.Delete();

    cout << "===================================================" << endl;
    Student st2("Oleg", "Mukoluk", "Petrivich", {1,1,1995}); // parametrized constructor
    st2.Print();

    cout << "===================================================" << endl;
    Student st3({ "Lilia", "Vunnuchuk", "Vasilivna" }, { 7,12,2000 }, "+38097838383", "Rivne", "Ukraine", "NUVGP", "Rivne", "Ukraine", "PD111"); // parametrized constructor
    st3.Print();

    cout << "Copy object" << endl;


    // Copy constructor
    Student copy(student);
    copy.Print();

























}

