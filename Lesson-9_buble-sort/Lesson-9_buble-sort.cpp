
#include <iostream>
using namespace std;


// �������� ������������� ������ ������� ������ (Selection Sort)
void sortSelSort(int arr[], int size);


template <typename T>
void printArray(const T arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "\t" << arr[i];
	}cout << endl;
}


int main()
{
	int arr[]{ 10, 22, 33, -4, -55, 123, 11 }; // 7 elements

	printArray(arr, size(arr));

	//sortSelSort(arr, size(arr));
	bubbleSort(arr, size(arr));
	cout << "Sorted array : \n";
	printArray(arr, size(arr));


}



void sortSelSort(int arr[], int size)
{
	for (int step = 0; step < size; step++)
	{
		int min = arr[step];//�������� �������� �� 0-������
		int indexMin = step;//������ ���������� 
		for (int i = step; i < size; i++)
		{
			if (arr[i] < min)
			{
				min = arr[i];
				indexMin = i;
			}
		}
		arr[indexMin] = arr[step]; // ���� ������ �� step-��������� �� ���������
		arr[step] = min;
		/*printArray(arr, size); */
	}
}


void bubbleSort(int arr[], int size)
{
	bool isSwap = true;
	for (int i = 0; i < size - 1 && isSwap == true; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (arr[j + 1] > arr[j + 1]) // ���� ���� ������� � ���� ������ �������� ����� �������
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				isSwap = true;
				//swap(arr[j], arr[j + 1]);

			}
		}
		printArray(arr, size);
	}
}


void bubbleSort2(int arr[], int size)
{
	bool needSort = true;
	int last = size - 1;
	while (needSort)
	{
		needSort = false;
		for (size_t i = 0; i < length; i++)
		{

		}
	}
	for (int i = 0; i < size - 1 && isSwap == true; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (arr[j + 1] > arr[j + 1]) // ���� ���� ������� � ���� ������ �������� ����� �������
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				isSwap = true;
				//swap(arr[j], arr[j + 1]);

			}
		}
		printArray(arr, size);
	}
}




//���������� ��������� ���������� �� �������