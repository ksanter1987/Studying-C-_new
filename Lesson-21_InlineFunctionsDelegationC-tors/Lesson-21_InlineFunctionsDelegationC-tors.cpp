
#include <iostream>
using namespace std;
#define Num 0
struct Point {
    int x;
    int y;
};

inline void Hello()
{
    cout << "Hello world" << endl;
}


class Human
{
private:
    string name;
    int age;
    int weight;
    static int countHuman;
public:
    
    // default constructor version 1
    //Human()
    //{
    //    this->name = "no name";
    //    this->age = 0;
    //    this->weight = 0;
    //}
     
    // default constructor version 2
    Human() :name("no name"), age(0), weight(0) { countHuman++; }
    
    // default constructor version 3
   /* Human() :name{ "no name" }, age{ 0 }, weight{ 0 } {}*/
  
    Human(string name):Human()
    {
        this->name = name;
        /*this->age = 0;
        this->weight = 0;*/
    }
    Human(string name, int age):Human(name)
    {
        /*this->name = name;*/
        this->age = age;
        this->weight = 0;
    }
    Human(string name, int age, int weight):Human(name, age)
    {
        /*this->name = name;
        this->age = age;*/
        this->weight = weight;
    }
    //Human(int age)
    //{
    //    this->name = "no name";
    //    this->age = age;
    //    this->weight = 0;
    //}
    //Human(int weight)
    //{
    //    this->name = "no name";
    //    this->age = 0;
    //    this->weight = weight;
   /* }*/

    static int getCountHuman()
    {
        return countHuman;
    }
    void Show()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Weight : " << weight << endl;
    }
    ~Human()
    {
        delete[]
    }
};
void SomeFunction()
{
    static int a = 0;
    a++;
    cout << a << endl;
}
int Human::countHuman = 0;

int main()
{
    SomeFunction();
    SomeFunction();
    SomeFunction();


    cout << "Count of Human : " << Human::getCountHuman() << endl;


    Human h1;
    h1.Show();
    cout << "Count of Human : " << h1.getCountHuman() << endl;
    cout << endl;

    Human h2("Oleg");
    h2.Show();
    cout << "Count of Human : " << h2.getCountHuman() << endl;
    cout << endl;

    Human h3("Petro", 25);
    h3.Show();
    cout << "Count of Human : " << h3.getCountHuman() << endl;
    cout << endl;

    if (true)
    {
        Human h4("Olga", 15, 65);
        h4.Show();
        cout << "Count of Human : " << h4.getCountHuman() << endl;
    }
 /*   Human h4("Olga", 15, 65);
    h4.Show();*/
    /*cout << "Count of Human : " << h4.getCountHuman() << endl;*/
    cout << endl;

    /*Human::countHuman = 0;*/
    cout << "Count of Human : " << h1.getCountHuman() << endl;
    cout << "Count of Human : " << h2.getCountHuman() << endl;
    cout << "Count of Human : " << h3.getCountHuman() << endl;
    cout << "Count of Human : " << h4.getCountHuman() << endl;

    //const int a = 100;
    //cout << "Hello world" << endl; //Hello();
    //cout << Hello << endl;
    //cout << a << endl;
    //cout << Num << endl;

   // int a;
   // int b = 10;
   // int c = 3.33;
   ///* cout << a << endl;*/
   // cout << b << endl;
   // cout << c << endl;

   // int numbers[2];
   // cout << numbers[0] << endl;
   // numbers[0] += 2;
   // cout << numbers[0] << endl;


   // int number = 5.33; // ініціалізація з копіюванням;
   // int value(15.6); // пряма ініціалізація;
   // double size{3.33}; // уніфікована ініціалізація; перевіряє
   // cout << number << endl;
   // cout << value << endl;
   // cout << size << endl;


   // int answer{ 35 };
   // const float goodTemp{ 36.6 };
   // int grades[4]{ 10,11,12 };     // == int grades[4] = {10,11,12}
   // int matrix[2][2] = { {1,2},{3,4} };
   // int* ptr{ nullptr };
   // int& link{ answer };


   // Point p{ 78,12 };






























}

