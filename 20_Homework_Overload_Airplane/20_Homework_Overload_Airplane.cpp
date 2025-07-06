
#include <iostream>
using namespace std;


class Airplane
{
    string model;
    string type;
    int passengers;
    int maxPassengers;
public:
    Airplane() : model("Empty"), type("Empty"), passengers(0), maxPassengers(0) {}
    Airplane(string m, string t, int p, int maxP) : model(m), type(t), passengers(p), maxPassengers(maxP) {}

    void print() const
    {
        cout << "Model : " << model
            << ", Type : " << type
            << ", Passengers : " << passengers
            << ", Maximum passengers : " << maxPassengers << endl;
    }
    Airplane& operator ++()
    {
        if (passengers < maxPassengers)
            ++passengers;
        else
            cout << "It's maximum passengers\n";
        return *this;
    }
    Airplane& operator --()
    {
        if (passengers > 0)
            --passengers;
        else
            cout << "No passengers in airplane\n";
        return *this;
    }
    void operator()(int add_passengers)
    {
        if (passengers + add_passengers <= maxPassengers)
            passengers += add_passengers;
        else
            cout << "Overlimit of passengers\n";
    }
    operator string() const
    {
        return model;
    }
    friend bool operator ==(const Airplane& a1, const Airplane& a2);
    friend bool operator >(const Airplane& a1, const Airplane& a2);

    friend ostream& operator <<(ostream& out, const Airplane& a)
    {
        out << "Model: " << a.model << ", Type: " << a.type << ", Passengers: " << a.passengers << ", Max: " << a.maxPassengers;
        return out;
    }
    friend istream& operator >>(istream& in, Airplane& a)
    {
        cout << "Enter model: ";
        in >> a.model;
        cout << "Enter type: ";
        in >> a.type;
        cout << "Enter current passengers: ";
        in >> a.passengers;
        cout << "Enter max passengers: ";
        in >> a.maxPassengers;
        return in;
    }


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
    Airplane a2;
    cin >> a2;

    cout << a1 << endl;
    cout << a2 << endl;

    string model = a1;
    cout << "String object: " << model << endl;
}

