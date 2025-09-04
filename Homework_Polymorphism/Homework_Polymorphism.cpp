#include <iostream>
using namespace std;

class Animal
{
protected:
    string species;
    double speed;
    double weight;
    string habitat;

public:
    Animal(string sp, double spd, double w, string hab) : species(sp), speed(spd), weight(w), habitat(hab) {}

    virtual void Move()
    {
        cout << species << " moves at speed " << speed << " km/h." << endl;
    }
    virtual void Say()
    {
        cout << species << " makes a sound " << endl;
    }
    virtual void Show()
    {
        cout << "Species: " << species << endl;
        cout << "Speed: " << speed << endl;
        cout << "Weight: " << weight << endl;
        cout << "Habitat: " << habitat << endl;
    }

};

class Bird : public Animal
{
protected:
    double wingspan;

public:
    Bird(string sp, double spd, double w, string hab, double wing) : Animal(sp, spd, w, hab), wingspan(wing) {}

    void Move() override
    {
        cout << species << " flies at speed " << speed << " km/h." << endl;
    }

    void Show() override
    {
        Animal::Show();
        cout << "Wingspan: " << wingspan << " m" << endl;
    }
};

class Reptile : public Animal
{
protected:
    bool poisonous;

public:
    Reptile(string sp, double spd, double w, string hab, bool pois) : Animal(sp, spd, w, hab), poisonous(pois) {}

    void Move() override
    {
        cout << species << " crawls at speed " << speed << " km/h." << endl;
    }

    void Show() override
    {
        Animal::Show();
        cout << "Poisonous: " << (poisonous ? "Yes" : "No") << endl;
    }
};

class Fish : public Animal
{
protected:
    double length;

public:
    Fish(string sp, double spd, double w, string hab, double len) : Animal(sp, spd, w, hab), length(len) {}

    void Move() override
    {
        cout << species << " swims at speed " << speed << " km/h." << endl;
    }

    void Show() override
    {
        Animal::Show();
        cout << "Length: " << length << " m" << endl;
    }
};

class Eagle : public Bird
{
public:
    Eagle() : Bird("Eagle", 120, 6.5, "Mountains", 2.2) {}

    void Say() override
    {
        cout << species << " screams: \"Kiiii!\"" << endl;
    }
};

class Crocodile : public Reptile
{
public:
    Crocodile() : Reptile("Crocodile", 15, 500, "Rivers, swamps", false) {}

    void Say() override
    {
        cout << species << " growls!" << endl;
    }
};

class Shark : public Fish
{
public:
    Shark() : Fish("Shark", 40, 800, "Ocean", 6.0) {}

    void Say() override
    {
        cout << species << " deadly no sound" << endl;
    }
};

int main()
{
    Animal* zooAnimals[3] = {
        new Eagle(),
        new Crocodile(),
        new Shark()
    };

    const int size = 3;

    for (int i = 0; i < size; i++)
    {
        zooAnimals[i]->Show();
        zooAnimals[i]->Move();
        zooAnimals[i]->Say();
        cout << "---------------------------" << endl;
        delete zooAnimals[i];
    }

}

