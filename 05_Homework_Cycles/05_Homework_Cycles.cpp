
#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;

int main()
{
	SetConsoleOutputCP(65001);


	/*Домашнє завдання 1*/
	/*Завдання 1. Вивести на екран фігури, заповнені зірочками.*/
	/*Діалог з користувачем реалізувати за допомогою меню.*/


	/*int figure;
	int size;
	while (true)
	{
		cout << "Введіть тип фігури: \n\n1  - а\n2  - б\n3  - в\n4  - г\n5  - д\n6  - е\n7  - ж\n8  - з\n9  - и\n10 - к\n\n0  - Вихід з програми\n\n";
		cin >> figure;
		switch (figure)
		{
		case 1:
			cout << "Введіть розмір фігури: ";
			cin >> size;
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{
					if (i <= j)
					{
						cout << "* ";
					}
					else
					{
						cout << "  ";
					}
				}
				cout << endl;
			}
			break;
		case 2:
			cout << "Введіть розмір фігури: ";
			cin >> size;
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{
					if (i >= j)
					{
						cout << "* ";
					}
					else
					{
						cout << "  ";
					}
				}
				cout << endl;
			}
			break;
		case 3:
			cout << "Введіть розмір фігури: ";
			cin >> size;
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{
					if (i <= j && (i + j) <= (size - 1))
					{
						cout << "* ";
					}
					else
					{
						cout << "  ";
					}
				}
				cout << endl;
			}
			break;
		case 4:
			cout << "Введіть розмір фігури: ";
			cin >> size;
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{
					if (i >= j && (i + j) >= (size - 1))
					{
						cout << "* ";
					}
					else
					{
						cout << "  ";
					}
				}
				cout << endl;
			}
			break;
		case 5:
			cout << "Введіть розмір фігури: ";
			cin >> size;
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{
					if ((i <= j && (i + j) <= (size - 1)) || (i >= j && (i + j) >= (size - 1)))
					{
						cout << "* ";
					}
					else
					{
						cout << "  ";
					}
				}
				cout << endl;
			}
			break;
		case 6:
			cout << "Введіть розмір фігури: ";
			cin >> size;
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{
					if ((i >= j && (i + j) <= (size - 1)) || (i <= j && (i + j) >= (size - 1)))
					{
						cout << "* ";
					}
					else
					{
						cout << "  ";
					}
				}
				cout << endl;
			}
			break;
		case 7:
			cout << "Введіть розмір фігури: ";
			cin >> size;
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{
					if (i >= j && (i + j) <= (size - 1))
					{
						cout << "* ";
					}
					else
					{
						cout << "  ";
					}
				}
				cout << endl;
			}
			break;
		case 8:
			cout << "Введіть розмір фігури: ";
			cin >> size;
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{
					if (i <= j && (i + j) >= (size - 1))
					{
						cout << "* ";
					}
					else
					{
						cout << "  ";
					}
				}
				cout << endl;
			}
			break;
		case 9:
			cout << "Введіть розмір фігури: ";
			cin >> size;
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{
					if ((i + j) <= (size - 1))
					{
						cout << "* ";
					}
					else
					{
						cout << "  ";
					}
				}
				cout << endl;
			}
			break;
		case 10:
			cout << "Введіть розмір фігури: ";
			cin >> size;
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{
					if ((i + j) >= (size - 1))
					{
						cout << "* ";
					}
					else
					{
						cout << "  ";
					}
				}
				cout << endl;
			}
			break;
		case 0:
			exit(0);
			break;
		default:
			cout << "Введіть фігуру з переліку" << endl;
			break;
		}
	}*/






	/*Домашнє завдання 2*/
	//Завдання 1.
	//Користувач вводить число.Визначити кількість цифр у цьому числі, порахувати їхню суму та середнє
	//арифметичне.Визначити кількість нулів у цьому числі.
	//Спілкування з користувачем організувати через меню.

	//int number;
	//cout << "Enter number: ";
	//cin >> number;
	//if (number == 0)
	//{
	//	cout << "Кількість цифр: 1\nСума цифр: 0\nСереднє арифметичне: 0\nКількість нулів: 1\n";
	//	return 0;
	//}
	//int menu;
	//while (true)
	//{
	//	cout << endl;
	//	cout << "1 - кількість цифр\n2 - сума цифр\n3 - середнє арифметичне цифр\n4 - кількість нулів\n\n0 - Вихід\n";
	//	cout << endl << endl;
	//	cin >> menu;
	//	int temp_number = number;
	//	int count = 0, sum = 0, zero = 0;
	//	int digit;
	//	switch (menu)
	//	{
	//	case 1:
	//		while (temp_number != 0)
	//		{
	//			temp_number /= 10;
	//			count++;
	//		}
	//		cout << endl;
	//		cout << "Кількість цифр: " << count << endl << endl;
	//		break;
	//	case 2:
	//		while (temp_number != 0)
	//		{
	//			digit = temp_number % 10;
	//			sum += digit;
	//			temp_number /= 10;
	//		}
	//		cout << endl;
	//		cout << "Сума цифр: " << sum << endl;
	//		break;
	//	case 3:
	//		while (temp_number != 0)
	//		{
	//			digit = temp_number % 10;
	//			sum += digit;
	//			temp_number /= 10;
	//			count++;
	//		}
	//		cout << endl;
	//		cout << "Середнє арифметичне цифр: " << (double)sum / count << endl;
	//		break;

	//	case 4:
	//		while (temp_number != 0)
	//		{
	//			digit = temp_number % 10;
	//			if (digit == 0)
	//			{
	//				zero++;
	//			}
	//			temp_number /= 10;
	//		}
	//		cout << endl;
	//		cout << "Кількість нулів: " << zero << endl;
	//		break;

	//	case 0:
	//		exit(0);

	//	default:
	//		cout << endl;
	//		cout << "Невірний вибір. Спробуйте ще раз.\n";
	//	}
	//}



	//Завдання 2.
	//Написати програму, яка виводить на екран
	//шахову дошку із заданим розміром клітинки.

	//int menu, cell, board;

	//while (true)
	//{
	//	cout << "\n1 - Створіть шахову дошки\n\n0 - Вихід з програми\n\n\n";
	//	cin >> menu;
	//	switch (menu)
	//	{
	//	case 1:
	//		cout << "\nВведіть розмір клітинки : ";
	//		cin >> cell;
	//		cout << "Введіть розмір дошки : ";
	//		cin >> board;
	//		for (int row = 0; row < board * cell; row++)
	//		{
	//			for (int col = 0; col < board * cell; col++)
	//			{
	//				if (((row / cell) + (col / cell)) % 2 == 0)
	//				{
	//					cout << setw(2) << '*';
	//				}
	//				else
	//				{
	//					cout << setw(2) << '-';
	//				}
	//			}
	//			cout << endl;
	//			
	//		}
	//		break;
	//	case 0:
	//		cout << "Завершення програми";
	//		exit(0);
	//		break;
	//	default:
	//		cout << "\nВиберіть необхідний варіант\n";
	//	}
	//}




	//На + 12 балів :
	// 
	//7.Напишіть програму знаходження суми чисел менше 50 і кратних 4, використовуючи всі два типи циклів.

	//int	sum_for = 0, sum_while = 0;
	//for (int i = 4; i < 50; i+=4)
	//{
	//	sum_for += i;
	//}
	//int i = 4;
	//while (i < 50)
	//{
	//	sum_while += i;
	//	i += 4;
	//}
	//cout << "Сума чисел менше 50 і кратних 4 (for): " << sum_for << endl;
	//cout << "Сума чисел менше 50 і кратних 4 (while): " << sum_while << endl;


	//8. Вивести на екран усі числа від нуля до введеного користувачем числа.

	//int number;
	//cout << "Введіть число :";
	//cin >> number;
	//if (number >= 0)
	//{
	//	for (int i = 0; i <= number; i++)
	//		{
	//			cout << i << " ";
	//		}
	//}
	//else
	//{
	//	for (int i = 0; i >= number; i--)
	//	{
	//		cout << i << " ";
	//	}
	//}
	


	//9. Користувач вводить дві межі діапазону, ви -
	//вести на екран усі числа з цього діапазону.Передбачити,
	//щоб користувач міг вводити межі діапазону в довільному
	//порядку.
	//
	//вивести всі парні числа з діапазону.
	//вивести всі непарні числа з діапазону.
	//вивести всі числа, кратні семи.


	//int number1, number2;
	//cout << "Введіть перше число : ";
	//cin >> number1;
	//cout << "Введіть друге число : ";
	//cin >> number2;
	//if (number1 > number2)
	//{
	//	int temp;
	//	temp = number1;
	//	number1 = number2;
	//	number2 = temp;
	//}
	//cout << "\nВсі числа у діапазоні [" << number1 << ", " << number2 << "] : " << endl;
	//for (int i = number1; i <= number2; i++)
	//{
	//	cout << i << " ";
	//}
	//cout << "\n\nПарні числа у діапазоні [" << number1 << ", " << number2<< "]:" << endl;
	//for (int i = number1; i <= number2; i++)
	//{
	//	if (i % 2 == 0)
	//	{
	//		cout << i << " ";
	//	}
	//}
	//cout << "\n\nНепарні числа у діапазоні [" << number1 << ", " << number2 << "]:" << endl;
	//for (int i = number1; i <= number2; i++)
	//{
	//	if (i % 2 != 0)
	//	{
	//		cout << i << " ";
	//	}
	//}
	//cout << "\n\nЧисла кратні 7 у діапазоні [" << number1 << ", " << number2 << "]:" << endl;
	//for (int i = number1; i <= number2; i++)
	//{
	//	if (i % 7 == 0)
	//	{
	//		cout << i << " ";
	//	}
	//}
	//cout << endl;



	//10. Користувач вводить дві межі діапазону.По -
	//рахувати суму всіх чисел діапазону.


	//int number1, number2, sum = 0;
	//cout << "Введіть перше число : ";
	//cin >> number1;
	//cout << "Введіть друге число : ";
	//cin >> number2;
	//if (number1 > number2)
	//{
	//	int temp;
	//	temp = number1;
	//	number1 = number2;
	//	number2 = temp;
	//}
	//for (int i = number1; i <= number2; i++)
	//{
	//	sum += i;
	//}
	//cout << "\n\nСума всіх чисел у діапазоні [" << number1 << ", " << number2 << "] дорівнює :" << sum << endl;
	//cout << endl;


	//11. Користувач з клавіатури вводить числа.По -
	//рахувати їхню суму і вивести на екран, щойно користувач
	//введе нуль.

	//int number, sum = 0;
	//cout << "Введіть будь-яку кількіть чисел, введений 0 завершує програму) : " << endl;
	//while (true)
	//{
	//	cin >> number;
	//	if (number == 0)
	//	{
	//		break;
	//	}
	//	sum += number;
	//}
	//cout << "Сума чисел становить : " << sum << endl;























}

