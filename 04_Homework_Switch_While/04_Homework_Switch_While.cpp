
#include <iostream>
using namespace std;

int main()
{
    
   /* switch*/

    /*1. Дано країна.Вивести назву столиці. (5 countries)*/

	//int country;
	//cout << "Enter country: \n\n1 - Ukraine \n2 - Denmark \n3 - Norway \n4 - Germany \n5 - Poland\n\n";
	//cin >> country;
	//switch (country)
	//{
	//case 1:
	//	cout << "The capital of Ukraine is Kyiv" << endl;
	//	break;
	//case 2:
	//	cout << "The capital of Denmark is Copenhagen" << endl;
	//	break;
	//case 3:
	//	cout << "The capital of Norway is Oslo" << endl;
	//	break;
	//case 4:
	//	cout << "The capital of Germany is Berlin" << endl;
	//	break;
	//case 5:
	//	cout << "The capital of Poland is Warsaw" << endl;
	//	break;
	//default:
	//	cout << "There is no such country" << endl;
	//}


	/*2.Дано номер дня тижня(1 – понеділок і т.д.).Визначити чи це вихідний день.*/

	//enum week { Monday = 1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };
	//int day;
	//cout << "Enter day of the week: ";
	//cin >> day;
	//if (day < 1 || day > 7)
	//{
	//	cout << "Enter the correct day of the week" << endl;
	//}
	//else
	//{
	//	switch (day)
	//	{
	//	case Saturday:
	//		cout << "Saturday is a day off" << endl;
	//		break;
	//	case Sunday:
	//		cout << "Sunday is a day off" << endl;
	//		break;
	//	default:
	//		cout << "This is a working day" << endl;
	//	}
	//}
	//cout << endl;
	

	//3.Дано курс корабля(північ, південь, захід, схід).Як
	//	зміниться курс корабля після команди «назад» ?

	//enum course { North = 1, South, West, East };
	//int course;
	//cout << "Enter course of the ship: \n\n1 - North \n2 - South \n3 - West \n4 - East\n\n";
	//cin >> course;
	//switch (course)
	//{
	//case North:
	//	cout << "After the \"BACK\" command The ship's course will change from NORTH to SOUTH" << endl;
	//	break;
	//case South:
	//	cout << "After the \"BACK\" command The ship's course will change from SOUTH to NORTH" << endl;
	//	break;
	//case West:
	//	cout << "After the \"BACK\" command The ship's course will change from WEST to EAST" << endl;
	//	break;
	//case East:
	//	cout << "After the \"BACK\" command The ship's course will change from EAST to WEST" << endl;
	//	break;
	//default:
	//	cout << "Enter the correct course of the ship" << endl;
	//}

	//4.Дано тварина(номер тварини. 1 – жираф. 2 – орел.тощо). (7 animals)
	//	Вивести клас, до якого відноситься тварина(хижак, травоїдна).

	/*4.1*/
/*	enum animal { Giraffe = 1, Eagle, Lion, Antelope, Tiger, Koala, Wolf };
	int animal;
	cout << "Enter animal: \n\n1 - Giraffe \n2 - Eagle \n3 - Lion \n4 - Antelope \n5 - Tiger \n6 - Koala \n7 - Wolf\n\n";
	cin >> animal;
	switch (animal)
	{
	case Giraffe: case Antelope: case Koala:
		cout << "This animal is a herbivore" << endl;
		break;
	case Eagle: case Lion: case Tiger: case Wolf:
		cout << "This animal is a predator" << endl;
		break;
	default:
		cout << "Enter the correct animal" << endl;
	}*/	

	/*4.2*/
	//enum animal { Giraffe = 1, Eagle, Lion, Antelope, Tiger, Koala, Wolf };
	//int animal;
	//cout << "Enter animal: \n\n1 - Giraffe \n2 - Eagle \n3 - Lion \n4 - Antelope \n5 - Tiger \n6 - Koala \n7 - Wolf\n\n";
	//cin >> animal;
	//switch (animal)
	//{
	//case Giraffe:
	//	cout << "Giraffe is a herbivore" << endl;
	//	break;
	//case Eagle:
	//	cout << "Eagle is a predator" << endl;
	//	break;
	//case Lion:
	//	cout << "Lion is a predator" << endl;
	//	break;
	//case Antelope:
	//	cout << "Antelope is a herbivore" << endl;
	//	break;
	//case Tiger:
	//	cout << "Tiger is a predator" << endl;
	//	break;
	//case Koala:
	//	cout << "Koala is a herbivore" << endl;
	//	break;
	//case Wolf:
	//	cout << "Wolf is a predator" << endl;
	//	break;
	//default:
	//	cout << "Enter the correct animal" << endl;
	//}
	


	//While
	//1.Вивести на екран цілі числа від 1 до 100. - while

	//int i = 1;
	//while (i <= 100)
	//{
	//	cout << i << "  ";
	//	i++;
	//}

	/*2.Вивести на екран додатні парні числа, які не перевищують 200,
		та їх кількість. - while*/

	//int i = 0;
	//int count = 0;
	//while (i <= 200)
	//{
	//	if (i % 2 == 0 && i > 0)
	//	{
	//		cout << i << "  ";
	//		count++;
	//	}
	//	i++;
	//}
	//cout << endl;
	//cout << "Count of positive even numbers in diapasone 0...200  = " << count << endl;


	/*3.Дано N(N > 0).Вводяться N чисел.Знайти суму парних серед цих чисел. - while*/

	//int N;
	//int i = 0;
	//int sum = 0;
	//cout << "Enter N: ";
	//cin >> N;
	//if (N <= 0)
	//{
	//	cout << "Enter the correct N" << endl;
	//}
	//else
	//{
	//	while (i < N)
	//	{
	//		int number;
	//		cout << "Enter number: ";
	//		cin >> number;
	//		if (number % 2 == 0)
	//		{
	//			sum += number;
	//		}
	//		i++;
	//	}
	//cout << "Sum of even numbers = " << sum << endl;
	//}

	//4.Вводяться 10 чисел. Знайти суму та середнє арифметичне цих чисел. - while

	//int i = 0;
	//float sum = 0;
	//float average;
	//while (i < 10)
	//{
	//	float number;
	//	cout << "Enter number: ";
	//	cin >> number;
	//	sum += number;
	//	i++;
	//}
	//average = sum / 10;
	//cout << "Sum of numbers = " << sum << endl;
	//cout << "Average of numbers = " << average << endl;


	//5.Скласти програму обчислення суми квадратів перших n - непарних чисел.Вивести на екран, крім суми квадратів і самі непарні числа і їх квадрати. - do..while

	//int n;
	//cout << "Enter n: ";
	//cin >> n;
	//if (n <= 0)
	//{
	//	cout << "Enter the correct n" << endl;
	//}
	//else
	//{
	//	int i = 1;
	//	int sum = 0;
	//	do
	//	{
	//		if (i % 2 != 0)
	//		{
	//			cout << "Odd number = " << i << "  Square of odd number = " << i * i << endl;
	//			sum += i * i;
	//		}
	//		i++;
	//	} while (i <= n);
	//	cout << "Sum of squares of the " << n << " odd numbers = " << sum << endl;
	//}


	/*6.Вивести на екран цілі числа : 100 99 98 97...3 2 1. - do..while*/

	//int i = 100;
	//do
	//{
	//	cout << i << "  ";
	//	i--;
	//} while (i >= 1);


	/*7.Написати програму яка обчислює суму семи чисел, які вводяться з клавіатури. - do..while*/

	//int i = 0;
	//int sum = 0;
	//do
	//{
	//	int number;
	//	cout << "Enter number: ";
	//	cin >> number;
	//	sum += number;
	//	i++;
	//} while (i < 7);
	//cout << "Sum of 7 numbers = " << sum << endl;


	/*8.Вивести на екран цілі числа від 14 до 123. - while*/

	//int i = 14;
	//while (i <= 123)
	//{
	//	cout << i << "  ";
	//	i++;
	//}


	/*9.Вивести на екран додатні непарні числа, які не перевищують 100. - while*/

	//int i = 1;
	//while (i <= 100)
	//{
	//	if (i % 2 != 0)
	//	{
	//		cout << i << "  ";
	//	}
	//	i++;
	//}

























}


