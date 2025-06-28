
#include <iostream>
#include <fstream>
using namespace std;

class Point
{
private:
    float x, y, z;

public:
    void inputFromKeyboard()
    {
        cout << "Enter x: "; cin >> x;
        cout << "Enter y: "; cin >> y;
        cout << "Enter z: "; cin >> z;

    }
    void printPoint()
    {
        cout << "Point coordinates: (" << x << ", " << y << ", " << z << ")\n";
    }

    float getX()
    {
        return x;
    }
    float getY()
    {
        return y;
    }
    float getZ()
    {
        return z;
    }

    void setX(float value)
    {
        x = value;
    }
    void setY(float value)
    {
        y = value;
    }
    void setZ(float value)
    {
        z = value;
    }

    void saveToFile(string& filename)
    {
        ofstream file(filename);
        if (file.is_open())
        {
            file << x << " " << y << " " << z;
            file.close();
            cout << "Point is saved to file\n";
        }
        else
        {
            cout << "File is not opened\n";
        }
    }
    void loadFromFile(string& filename)
    {
        ifstream file(filename);
        if (file.is_open())
        {
            file >> x >> y >> z;
            file.close();
            cout << "Point coordinates are load from file\n";
        }
        else
        {
            cout << "File is not opened";
        }
    }

};

int main()
{
    //Реалізуйте клас «Точка».Необхідно зберігати координати
    //    x, y, z в змінних - членах класу.Реалізуйте функції - члени
    //    класу для введення даних, виведення даних, реалізуйте
    //    аксесор для доступу до змінних - членів, реалізуйте збереження в файл і завантаження даних з файлу.

    Point p;

    cout << "\n============ Input from keyboard ================\n" << endl;
    p.inputFromKeyboard();


    cout << "\n=============== Print point =======================\n" << endl;
    p.printPoint();

    string filename = "point.txt";

    cout << "\n================ Save to file ====================\n" << endl;
    p.saveToFile(filename);

    cout << "\n================ Load from file ====================\n" << endl;
    Point p2;
    p2.loadFromFile(filename);
    p2.printPoint();









}


