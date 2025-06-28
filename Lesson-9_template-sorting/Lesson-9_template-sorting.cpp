
#include <iostream>
#include <iomanip>
using namespace std;



template <typename T>
void printArray(const T arr[], int size)
{
	for (int i = 0; i < size; i++) {
		cout << setw(4) << arr[i] << "\t";
	}
	cout << endl;
	cout << endl;
}

template <typename T>
void sortSelSort(T arr[], int size)
{
	for (int step = 0; step < size; step++)
	{
		T min = arr[step];
		int indexMin = step;
		for (int i = step + 1; i < size; i++)
		{
			if (arr[i] < min)
			{
				min = arr[i];
				indexMin = i;
			}
		}
		T temp = arr[step];
		arr[step] = arr[indexMin];
		arr[indexMin] = temp;
	}
}


template <typename T>
void bubbleSort(T arr[], int size)
{
	bool isSwap;
	for (int i = 0; i < size - 1; i++)
	{
		isSwap = false;
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
				isSwap = true;
			}
		}
	}
}


int main()
{
	int arr[]{ 10, 22, 33, -4, -55, 123, 11 };

	cout << "Start array:\n ";
	printArray(arr, size(arr));
	sortSelSort(arr, size(arr));
	cout << "Selection sort:\n ";
	printArray(arr, size(arr));
	bubbleSort(arr, size(arr));
	cout << "Bubble sort:\n ";
	printArray(arr, size(arr));
	cout << endl;
}


