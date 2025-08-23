

#include <iostream>
using namespace std;

class Animal //abstract
{
    string name;
    string place;
    float weight;

public:
    Animal() :name("no name"), place("no place"), weight(0) {}
    Animal(string n, string p, float w) :name(n), place(p)
    {
        this->weight; w > 0 ? w : 0;
    }
    
    void Print()const
    {
        cout << "Name : " << name << endl;
        cout << "Place : " << place << endl;
        cout << "Weight : " << weight << endl;
    }

    //pure virtual method
    virtual void MakeSound()const = 0;

    virtual void Move()const
    {
        cout << "I am moving........" << endl;
    }

    //Animal()
    //{

    //}

    
};
class Lion : public Animal
{
    float runSpeed;
public:
    Lion() :runSpeed(0), Animal() {}
    Lion(string n, string p, float w, float r) : runSpeed(r), Animal(n, p, w) {}
    void MakeSound()const override
    {
        cout << "RRRRRRRRrrrrrrrrrrrrrrrrr" << endl;
    }
    void Move()const
    {
        cout << "A am running with speed : " << runSpeed << "km/h" << endl;
    }

};
class Duck : public Animal
{
    float flyHeight;
public:
    Duck() :flyHeight(0), Animal() {}
    Duck(string n, string p, float w, float f) :flyHeight(f), Animal(n, p, w) {}

    void MakeSound()const override
    {
        cout << "I am swimming and flying up to : " << flyHeight << " m" << endl;
    }
};


class Reptile : public Animal
{
    float swimDeep;
public:
    Reptile() :swimDeep(0), Animal() {};
    Reptile(string n, string p, float w, float s) :swimDeep(s), Animal(n, p, w) {}
    void Move()const
    {
        cout << "I am crawling and swimming up to : " << swimDeep << " m" << endl;
    }

};
class Snake :public Reptile
{
public:
    Snake() :Reptile() {}
    Snake(string n, string p, float w, float d) :Reptile(n, p, w, d) {}
    void MakeSound()const override
    {
        cout << "sssssssssssssssssssssssssssssssss" << endl;
    }

};
class Test
{
public:
    Test()
    {

    }
    void Print()
    {

    }
};
void RollCall(Animal& a)
{
    a.MakeSound();
    a.Move();
}

int main()
{
    //Test t;
    //t.Print();


    //Animal a("some animal", "Flat", 5);
    Lion l("Simba", "Africa", 190, 80);
    l.MakeSound();
    l.Move();
    l.Print();

    Duck duck("Donald", "Lake", 1.5, 50);
    duck.MakeSound();
    duck.Move();
    duck.Print();

    Snake snake("Piton", "Amazonka", 75, 2);
    snake.MakeSound();
    snake.Move();
    snake.Print();

    Animal* zoo[2]{
        &l, &duck
    };

    
    RollCall(l);
    RollCall(duck);
    RollCall(snake);




}


