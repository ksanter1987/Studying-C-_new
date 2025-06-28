// Lesson -5_MatrixRandom.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//int start = 0;
	//cout << "Enter number :";
	//cin >> start;
	//time(0); // 01.01.1970
    //time(NULL); // 01.01.1970
    srand(time(NULL));
 //   int a;
 //   a = rand(); //0........32767
	//cout << a << endl;
 //   a = rand(); //0........32767
 //   cout << a << endl;
 //   a = rand(); //0........32767
 //   cout << a << endl;
 //   //int start = 0;

 //   // 0........23

	////0.......x ----> rand() % x  0......x
 //   for (int i = 0; i < 10; i++)
 //   {
 //       a = rand() % 23; //100/23 =4  4*23=92 100-92=8
 //       cout << a << endl;
 //   }

 //   for (int i = 0; i < 10; i++)
 //   {
 //       a = rand() % 100; //100/23 =4  4*23=92 100-92=8
 //       cout << a << endl;
 //   }


	/////x........y ----> rand() % (y-x+1) + x
 //   for (int i = 0; i < 10; i++)
 //   {
 //       //a = rand()y - x +x
 //       //11 - 16 16-11=4 //rand()%4-------> 0 1 2 3 4
 //       //rand()%5 +11
 //       //a = rand()%(y-x) +x
 //       a = rand() % 23; //100/23 =4  4*23=92 100-92=8
 //       cout << a << endl;
 //   }


	//const int size = 10;
	//int arr[size]{};
 //   for (int i =0; i < size; i++)
 //   {
 //       arr[i] = rand() % 10;
	//	cout << arr[i] << " ";
 //   }
	////cout << endl;

	////==========================1======================================
 //   const int row = 3;
 //   const int col = 4;
 //   int matrix[row][col];//empty
 //   for (int i = 0; i < row; i++)
 //   {
 //       for (int j = 0; j < col; j++)
 //       {
 //           cout << matrix[i][j] << " ";
 //       }
	//	cout << endl;
 //   }

 //   //=============2================
 //   const int row = 3;
 //   const int col = 4;
 //   int matrix[row][col]{};//empty
 //   for (int i = 0; i < row; i++)
 //   {
 //       for (int j = 0; j < col; j++)
 //       {
 //           cout << matrix[i][j] << " ";
 //       }
 //       cout << endl;
 //   }


	////=============3================
 //   const int row = 3;
 //   const int col = 4;
 //   int matrix[row][col]{ {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };//empty
 //   for (int i = 0; i < row; i++)
 //   {
 //       for (int j = 0; j < col; j++)
 //       {
 //           cout << matrix[i][j] << " ";
 //       }
 //       cout << endl;
 //   }

	//	//=============3================
	//const int row = 3;
	//const int col = 4;
	//int matrix[row][col]{ {1,2,3,4}, {5,6,7,8} };//0
	//for (int i = 0; i < row; i++)
	//{
	//	for (int j = 0; j < col; j++)
	//	{
	//		cout << matrix[i][j] << " ";
	//	}
	//	cout << endl;
	//}



	////=============3================
	//const int row = 3;
	//const int col = 4;
	//int matrix[row][col]{ {1,2}, {3,4,5,6} };//0
	//for (int i = 0; i < row; i++)
	//{
	//	for (int j = 0; j < col; j++)
	//	{
	//		cout << matrix[i][j] << " ";
	//	}
	//	cout << endl;
	//}


	////=============5================
	const int row = 5;
	const int col = 8;
	int matrix[row][col];//0
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			matrix[i][j] = rand() % 100;
			/*matrix[i][j] = rand() % 90 + 10;*/
			cout << setw(5) << matrix[i][j];
			/*cout << left << setw(5) << matrix[i][j];*/
		}
		cout << endl;
	}

	////Написати програму, яка у двовимірному масиві зна-
	//ходить максимальний елемент кожного рядка.

	//const int row = 5;
	//const int col = 8;
	//int matrix[row][col];
	int max;
	for (int i = 0; i < row; i++)
	{
		max = matrix[i][0];
		for (int j = 0; j < col; j++)
		{
			if (matrix[i][j] > max)
			{
				max = matrix[i][j];
			}
		}
		cout << "Max elements in row [" << i << "] = " << max << endl;
	}







}


