
#include <iostream>
using namespace std;

class Date
{

    int day;
    int month;
    int year;
   /* const int baseYear = 1991;*/
    const int baseYear;
public: 
    Date() : day(0), month(0), year(0), baseYear(1991) {}

    Date(int day, int month, int year, int base):baseYear(base), day(day), month(month), year(year){}
    void setDay(int newDay)
    {
        day = newDay;
    }
    int getDay()
    {
        return day++;
    }
    int getDay()const
    {
        return day;
    }
    void print()const
    {
        cout << day << " / " << month << " / " << year << endl;
        cout << "Base Year : " << baseYear << endl;
    }
};


int main()
{
    const int a = 10;
    

    Date d; //default
    const int size = 10;
    const string str{ "hello" };
    const int days[] = { 31,31,28 };
    //days[2] = 29;
    int independenceYear;
    cout << "Enter independence year : ";
    cin >> independenceYear;

    Date eventDate = { 21,7,2025, independeceDay };
    cout << "Day : " << eventDate.getDay() << endl;
    eventDate.setDay(20);
    cout << "Day : " << eventDate.getDay() << endl;
    
    const Date independenceDay = { 24,8.2025 };
    cout << "Day : " << independenceDay.getDay() << endl;
    //independenceDay.setDay(12);
    cout << "Day : " << independenceDay.getDay() << endl;
































}


