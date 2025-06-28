// 04_Cycles Array
//

#include <iostream>
using namespace std;    

int main()
{
	//while
	//for
	//do while

  //  int i = 0;
  //  while (i < 0)
  //  {
  //      cout << i << " ";
  //      i++;
  //  }
  //  cout << endl;

  //  int x = 0;
  //  do
  //  {
		//cout << x << " ";
		//x++;
  //  } while (x < 10);

  //  for (int i = 0; i < 10; i++)
  //  {
  //      cout << i << " ";
  //  }






	//int train[3];
	//train[0] = 2;
	//train[1] = 4;
	//train[2] = 3;
	//cout << train[0] << endl; 
	//cout << train[1] << endl; 
	//cout << train[2] << endl;




	//int arr1[50];

  /*  const int size = 5;*/
	/*int size = 5;*/
	//cout << "Enter size of array: ";
	//cin >> size;
	//==============1================
 //   int arr[size]; // empty
	//for (int i = 0; i < length; i++)
	//{
	//	cout << arr[i] << " ";
	//}
	//cout << endl;


	////==============2================
	//int arr[size] = { 1, 2, 3, 4, 5 };
	//for (int i = 0; i < size; i++)
	//{
	//	cout << arr[i] << " ";
	//}
	//cout << endl;


	////==============3================
	//int arr2[size] = { 1, 2 };
	//for (int i = 0; i < size; i++)
	//{
	//	cout << arr2[i] << " ";
	//}
	//cout << endl;


	////==============4================

	//int arr3[size] = {};
	//for (int i = 0; i < size; i++)
	//{
	//	cout << arr3[i] << " ";
	//}
	//cout << endl;

	//for (int i = 0; i < size; i++)
	//{
	//	cout << "Enter element in array by index [" << i << "]" << endl;
	//	cin >> arr3[i];
	//}

	//for (int i = 0; i < size; i++)
	//{
	//	cout << arr3[i] << " ";
	//}
	//cout << endl;

	//написати прогнраму, яка знаходить суму всіх відємних значень у масиві
	//Написати програму, яка знаходить мінімальне й мак -
	//	симальне значення в масиві і виводить їх на екран.

	//const int SIZE = 10;
	//int ARR[SIZE] = { 1, -5, 4, -7, 3, -6, 2, -1, 17, 21 };
	//for (int i = 0; i < SIZE; i++)
	//{
	//	cout << ARR[i] << " ";
	//}
	//cout << endl;

	//int summa = 0;
	//int max = 0;
	//int min = 0;
	//for (int i = 0; i < SIZE; i++)
	//{
	//	if (ARR[i] < 9)
	//	{
	//		summa += ARR[i];
	//	}
	//	if (ARR[i] > max)
	//	{
	//		max = ARR[i];
	//	}
	//	if (ARR[i] < min)
	//	{
	//		min = ARR[i];
	//	}
	//}


	//cout << "Summa negative elements = " << summa << endl;
	//cout << "Max element = " << max << endl;
	//cout << "Min element = " << min << endl;




	//const int SIZE = 10;
	//int ARR[SIZE] = { -1, -5, -4, -7, -3, -6, -2, -1, -17, -21 };
	//for (int i = 0; i < SIZE; i++)
	//{
	//	cout << ARR[i] << " ";
	//}
	//cout << endl;

	//int summa = 0;
	//int max = ARR[0];
	//int min = ARR[0];
	//for (int i = 0; i < SIZE; i++)
	//{
	//	if (ARR[i] < 9)
	//	{
	//		summa += ARR[i];
	//	}
	//	if (ARR[i] > max)
	//	{
	//		max = ARR[i];
	//	}
	//	if (ARR[i] < min)
	//	{
	//		min = ARR[i];
	//	}
	//}


	//cout << "Summa negative elements = " << summa << endl;
	//cout << "Max element = " << max << endl;
	//cout << "Min element = " << min << endl;



	//1.Оголосити одновимірний масив з 10 елементів типу int.
	//	Заповнити його значеннями з клавіатури, вивести на екран та
	//	підрахувати добуток елементів масиву

	//const int size1 = 10;
	//int arr1[size1];
	//for (int i = 0; i < size1; i++)
	//{
	//	cout << "Enter element in array by index [" << i << "]" << endl;
	//	cin >> arr1[i];

	//}
	//int dobutok = 1;
	//for (int i = 0; i < size1; i++)
	//{
	//	cout << arr1[i] << " ";
	//	
	//	dobutok *= arr1[i];
	//}
	//cout << "Dobutok = " << dobutok << endl;
	//cout << endl;

	//2.Оголосити одновимірний масив з 7 елементів типу int.
	//	Заповнити його випадковими значеннями в діапазоні[-12.. + 50]
	//	та вивести на екран.
	//	Підрахувати кількість відємних та додатніх елементів масиву.

	//const int size2 = 7;
	//int arr2[size2] = { 21, -15, 42, -74, 3, -62, 22 };
	//int min = 0;
	//int max = 0;
	//for (int i = 0; i < size2; i++)
	//{
	//	cout << arr2[i] << " ";
	//	if (arr2[i] < 0)
	//	{
	//		min++;
	//	}
	//	else
	//	{
	//		max++;
	//	}
	//	
	//}
	//cout << endl;
	//cout << "Negative elements = " << min << endl;
	//cout << "Positive elements = " << size2 - min << endl;


//3.Оголосити, проініціалізувати початковими значеннями та вивести
//одновимірний масив з 7 елементів типу long.Визначити суму парних елементів масиву

	//const int size3 = 7;
	//long arr3[size3] = { 21, -15, 42, -74, 3, -62, 22 };
	//int summa_even = 0;
	//for (int i = 0; i < size3; i++)
	//{
	//	cout << arr3[i] << " ";
	//	if (arr3[i] % 2 == 0)
	//	{
	//		summa_even += arr3[i];
	//	}
	//}
	//cout << endl;
	//cout << "Summa even elements = " << summa_even << endl;


//5.Дано одновимірний масив.Замінити всі від’ємні елементи їх модулями.
//if (arr[i] < 0) arr[i] = arr[i] * -1;

	//const int size5 = 7;
	//int arr5[size5] = { 21, -15, 42, -74, 3, -62, 22 };
	//for (int i = 0; i < size5; i++)
	//{
	//	if (arr5[i] < 0)
	//	{
	//		arr5[i] = arr5[i] * -1;
	//	}
	//	cout << arr5[i] << " ";
	//}
	//cout << endl;


//
//4.Утворити одновимірний масив розміром 30. ///1 2 3 3
//Заповнити його числами, які є степенями 2: (1, 2, 4, 8, 16, 32, ....)
//Вивести елементи масиву на екран у прямому і оберненому порядку.


	const int size4 = 30;
	int arr4[size4];
	int step = 1;
	for (int i = 0; i < size4; i++)
	{
		arr4[i] = step;
		step *= 2;
		cout << arr4[i] << " ";
	}
	cout << endl;
	for (int i = size4 - 1; i >= 0; i--)
	{
		cout << arr4[i] << " ";
	}










}













