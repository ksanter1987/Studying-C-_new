
#include <iostream>
#include <string>
using namespace std;

class Engine
{
    int horsepower;
public:
    Engine(int hp = 100) : horsepower(hp) {}
    void Show() const { cout << "  Engine: " << horsepower << " h.p." << endl; }
};

class Body
{
    string type;
public:
    Body(string t = "sedan") : type(t) {}
    void Show() const { cout << "  Body: " << type << endl; }
};

class Wheels
{
    int count, size;
public:
    Wheels(int c = 4, int s = 16) : count(c), size(s) {}
    void Show() const { cout << "  Wheels: " << count << " units, size " << size << "\"" << endl; }
};

class Doors
{
    int count;
public:
    Doors(int c = 4) : count(c) {}
    void Show() const { cout << "  Doors: " << count << " units" << endl; }
};

class Transmission
{
    string type;
public:
    Transmission(string t = "manual") : type(t) {}
    void Show() const { cout << "  Transmission: " << type << endl; }
};

class Lights
{
    int count;
public:
    Lights(int c = 2) : count(c) {}
    void Show() const { cout << "  Lights: " << count << " units" << endl; }
};

class Driver
{
    string firstName, lastName;
    int age, experience;
public:
    Driver(string fn, string ln, int a, int exp) : firstName(fn), lastName(ln), age(a), experience(exp) {}

    void Show() const
    {
        cout << "  Driver: " << firstName << " " << lastName << ", age: " << age << ", experience: " << experience << " years" << endl;
    }
};

class Car
{
    string brand, model;
    Engine engine;
    Body body;
    Wheels wheels;
    Doors doors;
    Transmission transmission;
    Lights lights;
    Driver* driver;
public:
    Car(string b, string m, Engine e, Body bo, Wheels w, Doors d, Transmission t, Lights l)
        : brand(b), model(m), engine(e), body(bo), wheels(w), doors(d), transmission(t), lights(l), driver(nullptr) {}

    Car(string b, string m, Engine e, Body bo, Wheels w, Doors d, Transmission t, Lights l, Driver* dr)
        : brand(b), model(m), engine(e), body(bo), wheels(w), doors(d), transmission(t), lights(l), driver(dr) {}

    void AddDriver(Driver* dr) { driver = dr; }

    void Show() const
    {
        cout << "=== Car ===" << endl;
        cout << "Brand: " << brand << ", Model: " << model << endl;
        engine.Show();
        body.Show();
        wheels.Show();
        doors.Show();
        transmission.Show();
        lights.Show();

        if (driver != nullptr) driver->Show();
        else cout << "  Driver: absent" << endl;

        cout << "==================" << endl;
    }
};

int main()
{
    Driver d1("Ivan", "Ivanenko", 35, 10);

    Car car1("Toyota", "Camry", Engine(200), Body("sedan"), Wheels(4, 17), Doors(4), Transmission("automatic"), Lights(4));
    car1.Show();

    car1.AddDriver(&d1);
    car1.Show();

    Car car2("BMW", "X5", Engine(300), Body("SUV"), Wheels(4, 19), Doors(5), Transmission("automatic"), Lights(6), &d1);
    car2.Show();

    Driver* d2 = new Driver("Petro", "Petrenko", 28, 5);

    Car car3("Audi", "A6", Engine(250), Body("sedan"), Wheels(4, 18), Doors(4), Transmission("manual"), Lights(4));
    car3.AddDriver(d2);
    car3.Show();

    delete d2;


}

