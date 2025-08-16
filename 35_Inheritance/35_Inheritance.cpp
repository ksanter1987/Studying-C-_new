
#include <iostream>
using namespace std;


class Enemy
{
protected:
    string name;
    int health;
    float strength;
    int speed;
    const static int maxHealth = 100;

public:
    Enemy() : name("no name"), health(maxHealth), strength(0), speed(0) {}
    Enemy(string n, float s, int sp):name(n), health(0), strength(s), speed(sp) {}
    
    void Print()const
    {
        cout << "Name : " << name << endl;
        cout << "Health : " << health << endl;
        cout << "Strength : " << strength << endl;
        cout << "Speed : " << speed << endl;
    }
    void DecreaseHealth(int value)
    {
        if (health - value < 0)
            health = 0;
        else
            health -= value;
    }
    bool IsAlive()const
    {
        return health > 0;
    }
};


//Inheritance
//class Child : [spetificator]
//[spetificator] - private, public, protected
class Dragon : public Enemy
{
    float armor;
public:
    Dragon() :armor(0), Enemy() {}
    Dragon(string n, float s, float sp, float a) :armor(a), Enemy(n, s, sp) {}

    float Attack()
    {
        cout << "Attacking with strength " << strength << endl;
        return strength;
    }
    void Kick(int damage)
    {
        cout << "Getting damage " << damage << endl;
        DecreaseHealth(damage - armor);
        cout << "Health after kick : " << health << "%" << endl;
    }
    void Print()
    {
        cout << "--------------------- Dragon--------------" << endl;
        Enemy::Print();
        cout << "Armor : " << armor << endl;
    }

};
class Monster : Enemy
{
    float turboSpeed;
public:
    Monster() :turboSpeed(0), Enemy() {}
    Monster(string n, float s, int sp, float r) :turboSpeed(r), Enemy(n, s, sp) {}
    void Print()
    {
        cout << "-----------Monster ----------------" << endl;
        Enemy::Print();
        cout << "Run speed : " << turboSpeed << endl;
    }
};


int main()
{
    
    Enemy e;
    Dragon bob("Bob", 10,35,3); d.Print();
    Dragon boss("Boss", 14,50,5); d.Print();
    int i = 1;


    do
    {
        cout << "--------- Round [ " << i << " ]"
        boss.Kick(bob.Attack());
        bob.Kick(boss.Attack());

        boss.Print();
        bob.Print();
        i++;
    } while (bob.IsAlive&&boss.IsAlive);

    Monster m("Tom",1, 15, 150)


















}
