#include <iostream>
using namespace std;

class Pizza
{
public:
    virtual void MakePizza() = 0;
    virtual ~Pizza() {}
};

class MilanPizza : public Pizza
{
    void MakePizza() override
    {
        cout << "Making Milan pizza" << endl;
    }
};

class GreekPizza : public Pizza
{
public:
    void MakePizza() override
    {
        cout << "Making Greek pizza" << endl;
    }
};

class Sauce
{
public:
    virtual void MakeSauce() = 0;
    virtual ~Sauce() {}
};

class MilanSauce : public Sauce
{
    void MakeSauce() override
    {
        cout << "Making Milan sauce" << endl;
    }
};

class GreekSauce : public Sauce
{
public:
    void MakeSauce() override
    {
        cout << "Making Greek sauce" << endl;
    }
};

class Factory
{
public:
    virtual Pizza* CreatePizza() = 0;
    virtual Sauce* CreateSauce() = 0;
    virtual ~Factory() {}
};

class MilanFactory : public Factory
{
public:
    Pizza* CreatePizza() override
    {
        return new MilanPizza();
    }
    Sauce* CreateSauce() override
    {
        return new MilanSauce();
    }
};

class GreekFactory : public Factory
{
public:
    Pizza* CreatePizza() override
    {
        return new GreekPizza();
    }
    Sauce* CreateSauce() override
    {
        return new GreekSauce();
    }
};

int main()
{
    Factory* factory = nullptr;
    Pizza* pizza = nullptr;
    Sauce* sauce = nullptr;

    int choice;
    do
    {
        cout << "\n=== MENU ===\n";
        cout << "1. Make Milan pizza and sauce\n";
        cout << "2. Make Greek pizza and sauce\n";
        cout << "0. Exit\n";
        cout << "Your choice: ";
        cin >> choice;

        delete pizza;
        delete sauce;
        delete factory;

        pizza = nullptr;
        sauce = nullptr;
        factory = nullptr;

        switch (choice)
        {
        case 1:
            factory = new MilanFactory();
            pizza = factory->CreatePizza();
            sauce = factory->CreateSauce();
            system("cls");
            pizza->MakePizza();
            sauce->MakeSauce();
            break;
        case 2:
            factory = new GreekFactory();
            pizza = factory->CreatePizza();
            sauce = factory->CreateSauce();
            system("cls");
            pizza->MakePizza();
            sauce->MakeSauce();
            break;
        case 0:
            system("cls");
            cout << "Have a nice day!!!" << endl;
            break;
        default:
            system("cls");
            cout << "Wrong choice! Try again." << endl;
            break;
        }

    } while (choice != 0);
    
    delete pizza;
    delete sauce;
    delete factory;
}


