#include <iostream>
using namespace std;
//struct


struct Date
{
    //int int int char[] char[]
    int day; 
    int month;
    int year;
    char day_name[15];
    char day_month[15];
};

struct Person {
    char name[20];
    char surname[20];
    int age;
    char gender[20];
    int salary;
    Date birthday;
    Date hiredate;
};

void Input(Person& p)
{
    cout << "Enter name : "; cin >> p.name;
    cout << "Enter surname : "; cin >> p.surname;
    cout << "Enter Age : "; cin >> p.age;
    cout << "Enter gender : "; cin >> p.gender;
    cout << "Enter salary : "; cin >> p.salary;
    cout << "Enter birthday date : "; cin >> p.birthday.day;
    cout << "Enter birthday month : "; cin >> p.birthday.month;
    cout << "Enter birthday year : "; cin >> p.birthday.year;
    cout << "Enter hiredate date : "; cin >> p.hiredate.day;
    cout << "Enter hiredate month : "; cin >> p.hiredate.month;
    cout << "Enter hiredate year : "; cin >> p.hiredate.year;
}

void Show(Person p) {
    cout << "Name : " << p.name << endl;
    cout << "Surname : " << p.surname << endl;
    cout << "Age : " << p.age << endl;
    cout << "Gender : " << p.gender << endl;
    cout << "Salary : " << p.salary << endl;
    cout << "Birthday : " << p.birthday.day << "/" << p.birthday.month <<  "/" << p.birthday.year << endl;
    cout << "Hiredate : " << p.hiredate.day << "/" << p.hiredate.month << "/" << p.hiredate.year << endl;
}

int main()
{
    int a = 5;
    //Date date;
    //date.day = 10;
    //date.month = 5;
    //date.year = 2025;
    //date.day_name = "saturday";

    Person Nick = { "Nick", "Tomson", 22, "male", 30000, {10,05,2002}, {10,05,2025} };


    //Show(Nick);
    //Input(Nick);
    //Show(Nick);









 /*   Date date = { 10, 5, 2025, "saturday", "May" };
    cout << "-------------------- Day today : -------------------------" << endl;
    cout << "Day : " << date.day << endl;
    cout << "Month : " << date.month << endl;
    cout << "Year : " << date.year << endl;
    cout << "Day name : " << date.day_name << endl;
    cout << "Month name : " << date.day_month << endl;

    cout << "Enter your birthday date : " << endl;
    cout << "Enter day : "; cin >> date.day;
    cout << "Enter month : "; cin >> date.month;
    cout << "Enter year : "; cin >> date.year;
    cout << "Enter day name : "; cin >> date.day_name;
    cout << "Enter month name : "; cin >> date.day_month;

    cout << "-------------------- Day of birthday : -------------------------" << endl;
    cout << "Day : " << date.day << endl;
    cout << "Month : " << date.month << endl;
    cout << "Year : " << date.year << endl;
    cout << "Day name : " << date.day_name << endl;
    cout << "Month name : " << date.day_month << endl;*/


    Date birthday;
    Date copy;
    copy = birthday;       

    Date* ptr = nullptr;
    ptr = &birthday;
    cout << ptr->day << endl;
    cout << ptr->month << endl;
    cout << ptr->year << endl;






















}
