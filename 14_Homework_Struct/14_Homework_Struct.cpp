

#include <iostream>
#include <string>
using namespace std;


struct WashingMachine
{
    string brand;
    string color;
    float width;
    float depth;
    float height;
    int power;
    int spinSpeed;
    int heatingTemp;
};

void PrintWashingMachine(const WashingMachine& wm)
{
    cout << "\n========== Washing Machine ===========\n";
    cout << "Brand : " << wm.brand << endl;
    cout << "Color : " << wm.color << endl;
    cout << "Width : " << wm.width << " cm\n";
    cout << "Depth : " << wm.depth << " cm\n";
    cout << "Height : " << wm.height << " cm\n";
    cout << "Power : " << wm.power << " W\n";
    cout << "Spin Speed : " << wm.spinSpeed << " spin/minute\n";
    cout << "Heating temperature : " << wm.heatingTemp << " C\n";
}

struct Iron
{
    string brand;
    string model;
    string color;
    int minTemp;
    int maxTemp;
    bool steam;
    int power;
};

void PrintIron(const Iron& iron)
{
    cout << "\n========== Iron ===========\n";
    cout << "Brand : " << iron.brand << endl;
    cout << "Model : " << iron.model << endl;
    cout << "Color : " << iron.color << endl;
    cout << "Min temperature : " << iron.minTemp << " C\n";
    cout << "Max temperature : " << iron.maxTemp << " C\n";
    cout << "Steam supply : ";
    if (iron.steam)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    cout << endl;
    cout << "Power : " << iron.power << " W\n";
}

struct Boiler
{
    string brand;
    string color;
    int power;
    float volume;
    int temp;
};

void PrintBoiler(const Boiler& b)
{
    cout << "\n========== Boiler ===========\n";
    cout << "Brand : " << b.brand << endl;
    cout << "Color : " << b.color << endl;
    cout << "Power : " << b.power << " W\n";
    cout << "Volume : " << b.volume << " l\n";
    cout << "Heat temperature : " << b.temp << " C\n";
}

union CarNumber
{
    int numeric;
    char text[9];
};

struct Car
{
    string color;
    string model;
    bool isNumeric;
    CarNumber number;
};

bool isValidNumberString(const string& str)
{
    if (str.length() != 5) return false;
    for (char c : str)
    {
        if (!isdigit(c)) return false;
    }
    return true;
}

bool isValidText(const string& str)
{
    if (str.length() != 8) return false;
    for (char c : str)
    {
        if (!isalnum(c)) return false;
    }
    return true;
}

void EnterCar(Car& car)
{
    cout << "\n========== Car ===========\n";
    cout << "Color : ";
    cin >> car.color;
    cout << "Model : ";
    cin >> car.model;

    int type;
    while (true)
    {
        cout << "For Enter Car number (1 - numbers(5 elements), 2 - letters(8-elements)) :";
        cin >> type;
        if (type == 1)
        {
            string numberStr;
            cout << "Enter 5-element car number : ";
            cin >> numberStr;

            if (isValidNumberString(numberStr))
            {
                car.isNumeric = true;
                car.number.numeric = stoi(numberStr);
                break;
            }
            else
            {
                cout << "Wrong car-number format\n";
            }

        }
        else if (type == 2)
        {
            string text;
            cout << "Enter a text number (up to 8 characters) : ";
            cin >> text;

            if (isValidText(text))
            {
                car.isNumeric = false;
                strcpy_s(car.number.text, sizeof(car.number.text), text.c_str());
                break;
            }
            else
            {
                cout << "Car number is to long? try again\n";
            }

        }
        else
        {
            cout << "Wrong choice\n";
        }

    }
}

void printCar(const Car& car)
{
    cout << "\n========== Car information ===========\n";
    cout << "Color : " << car.color << endl;
    cout << "Model : " << car.model << endl;
    cout << "Car number : ";
    if (car.isNumeric)
    {
        cout << car.number.numeric;
    }
    else
    {
        cout << car.number.text;
    }
    cout << endl;
}

void editCar(Car& car)
{
    cout << "\n========== Edit Car information ===========\n";
    EnterCar(car);
}

void printAllCars(Car cars[], int size)
{
    for (int i = 0; i < size; i++) {
        cout << "\n========== Car N " << i + 1 << " ==========";
        printCar(cars[i]);
    }
}

void findCarByNumber(Car cars[], int size)
{
    cout << "\nEnter number to search : ";
    string search;
    cin >> search;

    bool found = false;
    for (int i = 0; i < size; i++)
    {
        if (cars[i].isNumeric && to_string(cars[i].number.numeric) == search)
        {
            cout << "\nFind car N " << i + 1 << ":\n";
            printCar(cars[i]);
            found = true;
        }
        else if (!cars[i].isNumeric && strcmp(cars[i].number.text, search.c_str()) == 0)
        {
            cout << "\nFind car N " << i + 1 << ":\n";
            printCar(cars[i]);
            found = true;
        }
    }

    if (!found) {
        cout << "There is no car with such number\n";
    }
}

int main()
{
    
    //Завдання 1. Реалізувати структуру «Пральна машинка»
    //(фірма, колір, ширина, довжина, висота, потужність, швид -
    //    кість віджиму, температура нагріву).Створіть екземпляр
    //    структури і проілюструйте роботу з ним(і мейні створити
    //        об * єкт, задати значення для всіх полів, вивести на екран.)

    WashingMachine wm = { "Bosch", "White", 60, 55, 85, 2000, 1200, 90 };
    PrintWashingMachine(wm);


    //Завдання 2. Реалізувати структуру «Праска»(фірма,
    //    модель, колір, мінімальна температура, максимальна
    //    температура, подача пари так / ні, потужність).Створіть
    //    екземпляр структури і проілюструйте роботу з ним.

    Iron iron = { "Philips", "GC4909", "Blue", 120, 220, true, 2600 };
    PrintIron(iron);

    //Завдання 3. Реалізувати структуру «Бойлер»(фірма,
    //    колір, потужність, обсяг, температура нагріву).Створіть
    //    екземпляр структури і проілюструйте роботу з ним.

    Boiler boiler = { "Ariston", "White", 1500, 80, 75 };
    PrintBoiler(boiler);

    //Додаткове завдання на додаткові 12 балів
    //    Завдання 4
    //    Реалізувати структуру "Машина" (колір, модель, номер).Номер машини може бути
    //    або п'ятизначним номером, або словом до 8 символів.
    //    Рекомендації: номер реалізувати як об'єднання.
    //    Створити екземпляр структури "Машина" і реалізувати для нього такі функції :
    //Заповнення машини;
    //Друк машини.
    //    Створити масив із 10 екземплярів структури "Машина" і реалізувати для нього такі функції :
    //Редагувати машину;
    //Друк усіх машин;
    //Пошук машини за номером.

    Car cars[10];
    for (int i = 0; i < 10; i++)
    {
        EnterCar(cars[i]);
    }

    printAllCars(cars, 10);
    findCarByNumber(cars, 10);
    editCar(cars[1]);
    printAllCars(cars, 10);
















}

