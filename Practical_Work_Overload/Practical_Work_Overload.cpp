
#include <iostream>
#include <iomanip>
using namespace std;

class Time {
    int hours;
    int minutes;
    int seconds;

    void standartTime() {
        int total = convertToSec();
        hours = total / 3600;
        minutes = (total / 60) % 60;
        seconds = total % 60;
    }

public:
    Time() : hours(0), minutes(0), seconds(0) {}
    explicit Time(int h, int m, int s) : hours(h), minutes(m), seconds(s)
    {
        standartTime();
    }
    explicit Time(int totalSeconds)
    {
        hours = totalSeconds / 3600;
        minutes = (totalSeconds / 60) % 60;
        seconds = totalSeconds % 60;
    }
    int convertToSec() const
    {
        return hours * 3600 + minutes * 60 + seconds;
    }
    void print() const
    {
        cout << setfill('0') << setw(2) << hours << ":" << setfill('0') << setw(2) << minutes << ":" << setfill('0') << setw(2) << seconds << endl;
    }
    void addSec()
    {
        seconds++;
        standartTime();
    }
    Time operator +(const Time& other) const
    {
        return Time(this->convertToSec() + other.convertToSec());
    }
    Time operator -(const Time& other) const
    {
        int total = this->convertToSec() - other.convertToSec();
        if (total < 0) total = 0;
        return Time(total);
    }
    Time operator *(int number) const
    {
        return Time(this->convertToSec() * number);
    }
    Time operator /(int number) const
    {
        return Time(this->convertToSec() / number);
    }
    bool operator >(const Time& other) const
    {
        return this->convertToSec() > other.convertToSec();
    }
    bool operator <(const Time& other) const
    {
        return this->convertToSec() < other.convertToSec();
    }
    bool operator >=(const Time& other) const
    {
        return this->convertToSec() >= other.convertToSec();
    }
    bool operator <=(const Time& other) const
    {
        return this->convertToSec() <= other.convertToSec();
    }
    bool operator ==(const Time& other) const
    {
        return this->convertToSec() == other.convertToSec();
    }
    bool operator !=(const Time& other) const
    {
        return this->convertToSec() != other.convertToSec();
    }

};

int main()
{
    Time t1(5555);
    cout << "t1 = "; t1.print();

    Time t2(2, 5, 0);
    cout << "t2 = "; t2.print();

    Time t3 = t1 + t2;
    cout << "t1 + t2 = "; t3.print();

    Time t4 = t1 - t2;
    cout << "t1 - t2 = "; t4.print();

    Time t5 = t2 - t1;
    cout << "t2 - t1 = "; t5.print();

    Time t6 = t1 * 3;
    cout << "t1 * 3 = "; t6.print();

    Time t7 = t6 / 3;
    cout << "t6 / 3 = "; t7.print();


    Time t8(11, 59, 59);
    cout << "t8 = "; t8.print();
    cout << "t8 + 1s = "; t8.addSec(); t8.print();

    cout << boolalpha;
    cout << "t1 > t2: " << (t1 > t2) << endl;
    cout << "t1 == t2: " << (t1 == t2) << endl;
    cout << "t1 != t2: " << (t1 != t2) << endl;















}

