

#include <iostream>
using namespace std;



class Airplane
{
    string model;
    string type;
    int passengers;
    int maxPassengers;

public:
    Airplane()
    {
        model = "Empty";
        type = "Empty";
        passengers = 0;
        maxPassengers = 0;
    }
    Airplane(string m, string t, int p, int maxP)
    {
        model = m;
        type = t;
        passengers = p;
        maxPassengers = maxP;
    }

    void print()const
    {
        cout << "Model : " << model << ", Type : " << type << ", Passengers : " << passengers << ", Maximum passengers : " << maxPassengers << endl;
    }
    
    Airplane& operator ++()
    {
        if (passengers < maxPassengers)
        {
            ++passengers;
        }
        else {
            cout << "It's maximum passengers\n";
        }
        return *this;
    }

    Airplane& operator --()
    {
        if (passengers > 0)
        {
            --passengers;
        }
        else {
            cout << "No passengers in airplane\n";
        }
        return *this;
    }

    void operator ()(int add_passengers)
    {
        if (passengers + add_passengers <= maxPassengers)
        {
            passengers += add_passengers;
        }
        else {
            cout << "Overlimit of passengers\n";
        }
    }

    friend bool operator ==(const Airplane& a1, const Airplane& a2);
    friend bool operator >(const Airplane& a1, const Airplane& a2);

};

bool operator ==(const Airplane& a1, const Airplane& a2)
{
    return a1.type == a2.type;
}
bool operator >(const Airplane& a1, const Airplane& a2)
{
    return a1.maxPassengers > a2.maxPassengers;
}

int main()
{
    Airplane a1("Boeing 737", "Passenger", 100, 150);
    Airplane a2("Boeing 747", "Passenger", 150, 200);
    Airplane a3;

    a1.print();
    a2.print();
    a3.print();

    if (a1 == a2)
        cout << "Airplanes Same type\n";
    else
        cout << "Airplanes Different type\n";

    if (a1 > a2)
        cout << "More passengers in a1\n";
    else
        cout << "More passengers in a2 (or equal)\n";

    ++a1;
    a1.print();

    --a2;
    a2.print();

    a1(10);
    a1.print();

    a1(99);
    a1.print();
}

