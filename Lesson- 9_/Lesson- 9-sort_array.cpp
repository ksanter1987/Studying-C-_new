
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
	int arr[] { 10, 22, 33, -4, -55, 123, 11 }; // 7 elements

	printArray(arr, size(arr));

	sortSelSort(arr, size(arr));
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
	