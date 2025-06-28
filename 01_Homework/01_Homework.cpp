#include <iostream>
#include <windows.h>
using namespace std;



void main()
{
	SetConsoleOutputCP(CP_UTF8);


	/*Завдання 1*/
	cout << "\033[38;5;208mЗавдання N1\033[0m\n" << endl;
	cout << "\033[36mI" << endl;
	cout << "\tlove" << endl;
	cout << "\t\tyou" << endl;
	cout << "\t\t\tC++!\033[0m" << endl;
	cout << "\n\n\n" << endl;


	/*Завдання 2*/
	/*були проблеми з кодуванням, тому замість ... використав \xE2\x80\xA6 з бібліотекою <windows.h>*/
	cout << "\033[38;5;208mЗавдання N2\033[0m\n" << endl;
	cout << "\033[35m\t\xE2\x80\xA6:::RESUME:::\xE2\x80\xA6\n" << endl;
	cout << "Name:\t\t\tIvan" << endl;
	cout << "Surname:\t\tIvanov" << endl;
	cout << "Last name:\t\tIvanovich\n" << endl;
	cout << "Date of birth:\t\t22.06.06" << endl;
	cout << "City:\t\t\tRivne" << endl;
	cout << "Age:\t\t\t17\n" << endl;
	cout << "Hobby:\t\t\tC++\n" << endl;
	cout << "::\xE2\x80\xA6\xE2\x80\xA6\xE2\x80\xA6\xE2\x80\xA6\xE2\x80\xA6\xE2\x80\xA6\xE2\x80\xA6\xE2\x80\xA6...................\xE2\x80\xA6\xE2\x80\xA6::\033[0m" << endl;
	cout << "\n\n\n" << endl;



	/*Завдання 3*/
	cout << "\033[38;5;208mЗавдання N3\033[0m\n" << endl;
	cout << "\t\033[36mЩе не вмерла України, ні слава, ні воля," << endl;
	cout << "\tЩе нам, браття молодії, усміхнеться доля." << endl;
	cout << "\tЗгинуть наші вороженьки, як роса на сонці," << endl;
	cout << "\tЗапануєм і ми, браття, у своїй сторонці.\033[0m\n" << endl;
	cout << "\t\t\033[33mДушу й тіло ми положим за нашу свободу," << endl;
	cout << "\t\tІ покажем, що ми, браття, козацького роду.\033[0m\n\n" << endl;
	cout << "\t\033[36mСтанем, браття, в бій кривавий від Сяну до Дону," << endl;
	cout << "\tВ ріднім краю панувати не дамо нікому;" << endl;
	cout << "\tЧорне море ще всміхнеться, дід Дніпро зрадіє," << endl;
	cout << "\tЩе у нашій Україні доленька наспіє.\033[0m\n\n" << endl;
	cout << "\t\t\033[33mДушу й тіло ми положим за нашу свободу," << endl;
	cout << "\t\tІ покажем, що ми, браття, козацького роду.\033[0m\n\n" << endl;
	cout << "\t\033[36mА завзяття, праця щира свого ще докаже," << endl;
	cout << "\tЩе ся волі в Україні піснь гучна розляже," << endl;
	cout << "\tЗа Карпати відоб'ється, згомонить степами," << endl;
	cout << "\tУкраїни слава стане поміж народами.\033[0m\n\n" << endl;
	cout << "\t\t\033[33mДушу й тіло ми положим за нашу свободу," << endl;
	cout << "\t\tІ покажем, що ми, браття, козацького роду.\033[0m\n\n" << endl;
	cout << "\n\n\n" << endl;



	/*Завдання 4*/
	cout << "\033[38;5;208mЗавдання N4\033[0m\n" << endl;
	cout << "\t\033[31mEvery\t(Каждый)\033[0m" << endl;
	cout << "\t\t\033[38;5;208mhunter\t(охотник)\033[0m" << endl;
	cout << "\t\t\t\033[33mwants\t(желает)\033[0m" << endl;
	cout << "\t\t\t\t\033[32mto know\t(знать)\033[0m" << endl;
	cout << "\t\t\t\t\t\033[36mwhere\t(где)\033[0m" << endl;
	cout << "\t\t\t\t\t\t\033[34mis\t(сидит)\033[0m" << endl;
	cout << "\t\t\t\t\t\t\t\033[35mthe pheasant\t(фазан)\033[0m" << endl;
	cout << "\n\n\n" << endl;


	/*Завдання 5*/
	cout << "\033[38;5;208mЗавдання N5\033[0m\n" << endl;
	cout << "\t\t\t\t\t\033[32mОГОЛОШЕННЯ" << endl;
	cout << "\t\t\t\t    Продам автомобіль" << endl;
	cout << "\t\t\t   Марка: MITSUBISHI OUTLANDER 2004" << endl;
	cout << "\t\t\t\t      Перший власник" << endl;
	cout << "\t\t\t\t    Тел. 097-962-00-84" << endl;
	cout << "\t\t\t\t    097\t\t| 097 |" << endl;
	cout << "\t\t\t\t    962\t\t| 962 |" << endl;
	cout << "\t\t\t\t    00\t\t| 00  |" << endl;
	cout << "\t\t\t\t    84\t\t| 84  |\033[0m" << endl;
	cout << "\n\n\n" << endl;


}