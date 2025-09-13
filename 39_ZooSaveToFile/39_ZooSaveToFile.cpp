#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Animal
{
    string name;
    string place;
    float weight;
public:
    Animal() :name("no name"), place("no place"), weight(0) {}
    Animal(string n, string p, float w) :name(n), place(p)
    {
        this->weight = w > 0 ? w : 0;
    }
    void Print()const
    {
        cout << "Name : " << name << endl;
        cout << "Place : " << place << endl;
        cout << "Weight : " << weight << endl;
    }
    friend ofstream& operator <<(ofstream& out, Animal& animal);
    friend ifstream& operator >>(ifstream& out, Animal& animal)
};
ofstream& operator <<(ofstream& out, Animal& animal)
{
    out << animal.name << " " << animal.place << " " << animal.weight;
    return out;
}
ifstream& operator >>(ifstream& in, Animal& animal)
{
    in >> animal.name >> animal.place >> animal.weight;
    return in;
}
class Zoo
{
    string name;
    Animal* animals;
    int countAnimals;
public:
    Zoo(string name) :name(name), animals(nullptr), countAnimals(0) {}
    void AddAnimal(Animal a)
    {
        Animal* temp = new Animal[countAnimals + 1];
        for (int i = 0; i < countAnimals; i++)
        {
            temp[i] = animals[i];
        }
        temp[countAnimals] = a;
        countAnimals++;
        if (animals != nullptr)
            delete[]animals;
        animals = temp;
    }
    void ShowInfo()
    {
        cout << "\n\nName Zoo " << name << endl;
        for (int i = 0; i < countAnimals; i++)
        {
            animals[i].Print();
            cout << endl;
        }
    }
    ~Zoo()
    {
        if (animals != nullptr)
            delete[]animals;
    }
    void SaveToFile()
    {
        ofstream out("zoo.txt", ios_base::out);
        out << name << endl;
        out << countAnimals << endl;
        for (int i = 0; i < countAnimals; i++)
        {
            out << animals[i] << endl;
        }
        out.close();
        cout << "Save to file" << endl;
    }
    void ReadFromFile()
    {
        ifstream in("zoo.txt", ios_base::in);
        getline(in, name)
        /*in >> name; cin >> name*/
        in >> countAnimals;
        animals = new Animal[countAnimals];
        for (int i = 0; i < countAnimals; i++)
        {
            in >> animals[i];
        }
    }

    void SaveToFileBinary()
    {
        ofstream out("zoo.bin", ios_base::out| ios_base::binary);
        out.write((char*)&name, sizeof(name));
        out.write((char*)&countAnimals, sizeof(countAnimals));
        for (int i = 0; i < countAnimals; i++)
        {
            out.write((char*)&animals[i], sizeof(animals[i]));
        }
        out.close();
        cout << "Save to file" << endl;
    }
    void ReadFromFileBinary()
    {
        ifstream in("zoo.bin", ios_base::in | ios_base::binary);
        in.read((char*)&name, sizeof(name));
        in.read((char*)&countAnimals, sizeof(countAnimals));
        animals = new Animal[countAnimals];
        for (int i = 0; i < countAnimals; i++)
        {
            in.read((char*)&animals[i], sizeof(animals[i]));
        }
        in.close();
    }
};


int main()
{
    Animal an("Tom", "flat", 5);
    an.Print();


    Zoo zoo("Rivne zoo");
    zoo.AddAnimal(an);
    zoo.AddAnimal(Animal("Lion", "Africa", 150));
    zoo.AddAnimal(Animal("Turtle", "Africa", 50));
    zoo.AddAnimal(Animal("Elephant", "Africa", 1500));
    zoo.ShowInfo();
    zoo.SaveToFile();
    zoo.SaveToFileBinary();
    Zoo zoo("Test");
    zoo.ReadFromFile();
    zoo.ReadFromFileBinary();
    zoo.ShowInfo();



}

