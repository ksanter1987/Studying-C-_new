
#include <iostream>
using namespace std;

class Date
{
    int day;
    int month;
    int year;

    int DaysInMonth(int m, int y) const
    {
        if (m == 2)
            return (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0)) ? 29 : 28;
        else if (m == 4 || m == 6 || m == 9 || m == 11)
            return 30;
        return 31;
    }
    void Normalize()
    {
        while (day > DaysInMonth(month, year))
        {
            day -= DaysInMonth(month, year);
            month++;
            if (month > 12)
            {
                month = 1;
                year++;
            }
        }

        while (day <= 0)
        {
            month--;
            if (month < 1)
            {
                month = 12;
                year--;
            }
            day += DaysInMonth(month, year);
        }

        while (month > 12)
        {
            month -= 12;
            year++;
        }

        while (month < 1)
        {
            month += 12;
            year--;
        }
    }

public:
    Date() : day(1), month(1), year(2000) {}
    Date(int d, int m, int y) : day(d), month(m), year(y)
    {
        Normalize();
    }
    void Print() const
    {
        cout << (day < 10 ? "0" : "") << day << "." << (month < 10 ? "0" : "") << month << "." << year << endl;
    }
    Date& operator +=(int days)
    {
        day += days;
        Normalize();
        return *this;
    }
    Date& operator -=(int days)
    {
        day -= days;
        Normalize();
        return *this;
    }
    void operator ()(int d)
    {
        *this += d;
    }
    void operator ()(int m, int d)
    {
        month += m;
        day += d;
        Normalize();
    }
    void operator ()(int y, int m, int d)
    {
        year += y;
        month += m;
        day += d;
        Normalize();
    }

    int ToInt() const
    {
        return year * 10000 + month * 100 + day;
    }

    friend bool operator ==(const Date& a, const Date& b)
    {
        return a.day == b.day && a.month == b.month && a.year == b.year;
    }
    friend bool operator !=(const Date& a, const Date& b)
    {
        return !(a == b);
    }
    friend bool operator <(const Date& a, const Date& b)
    {
        return a.ToInt() < b.ToInt();
    }
    friend bool operator >(const Date& a, const Date& b)
    {
        return b < a;
    }
    friend Date& operator ++(Date& d)
    {
        d += 1;
        return d;
    }
    friend Date operator ++(Date& d, int)
    {
        Date temp = d;
        d += 1;
        return temp;
    }
    friend Date& operator --(Date& d)
    {
        d -= 1;
        return d;
    }
    friend Date operator --(Date& d, int)
    {
        Date temp = d;
        d -= 1;
        return temp;
    }
};

int main()
{
    Date date(28, 2, 2024);
    cout << "Starting date: ";
    date.Print();

    ++date;
    cout << "After ++: ";
    date.Print();

    date++;
    cout << "After post++: ";
    date.Print();

    --date;
    cout << "After --: ";
    date.Print();

    date -= 3;
    cout << "After decreasing: ";
    date.Print();

    date += 10;
    cout << "After increasing: ";
    date.Print();

    date(0, 1);
    cout << "After adding  day: ";
    date.Print();

    date(0, 1, 5);
    cout << "After adding  month and day: ";
    date.Print();

    Date compare_date(5, 3, 2024);
    cout << (date > compare_date ? "date > comparing date\n" : "date <= comparing date\n");
}

