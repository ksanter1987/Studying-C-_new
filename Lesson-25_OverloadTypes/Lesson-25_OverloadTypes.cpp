

#include <iostream>
using namespace std;

class Rectangle
{
    int h, w;
public:
    Rectangle() :h(0), w(0){}
    Rectangle(int size) :h(size), w(size){}
    Rectangle(int h, int w) :h(h), w(w){}
    void Print()const
    {
        cout << "Height = " << h << endl;
        cout << "Width = " << w << endl;
    }
    //operator typename(){}
    //operator typename()const
    operator int()
    {
        return h * w;
    }

};
class Square
{
    int side;
public:
    Square() : h(0), w(0) {}
    Square(int size) : h(size), w(size) {}
    Square(int h, int w) : h(h), w(w){}
    void Print()const
    {
        cout << "Height = " << h << endl;
        cout << "Width = " << w << endl;
    }
    operator Rectangle()
    {

    }
   
};


int main()
{
    // int string bool char float double
    int value = 9; // int ------> int
    //standart to standart
    double b = value; // int -----> double 9.0000000000000000

    //standart to abstract
    Rectangle rect(5, 10); //int ------> Rectangle

    //standart to abstract
    Square sq(7); //int-----> Square

    //abstract to standart
    value = (int) rect; //implicite
    cout << "Area"

































}


