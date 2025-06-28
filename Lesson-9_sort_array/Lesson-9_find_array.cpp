
#include <iostream>
using namespace std;


// алгоритм прямого(лінійного пошуку
int searchValue(int value, const int arr[], int size);


int main()
{
	int arr[]{ 10, 22, 33, -4, -55, 123, 11 }; // 7 elements
	int key;
	cout << "Enter value to search : ";
	cin >> key;

	int index = searchValue(key, arr, size(arr)); //size(arr) = 7
	if (index == -1)
	{
		cout << "Key " << key << " not found\n";
	}
	else
		cout << "Key " << key << " found in index " << index << "\n";

}



int searchValue(int value, const int arr[], int size)
{
    int index = -1;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == value)
		{
			index = i;
			break; //return i
		}
	}
	return index; //return -1
}