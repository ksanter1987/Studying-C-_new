

#include <iostream>
using namespace std;




//void printArray(const double arr[], int size);



// template = ������ �������, ������ �������, �� ����� ����� ���� ����������� �������� �������
template <typename T>
void printArray(const T arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "\t" << arr[i];
	}
	cout << endl;
}

template <typename T>
T maxArray(const T arr[], int size)
{
	T max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}

	}
	return max;
}
// 1) ��������� ������� ������� ������, 
// 2) ������ (�� ��������)




// ��������� �������, ��� ������� ������
char maxArray(const char arr[], int size)
{
	cout << "Worked char maxArray(const char arr[], int size) ";
	char max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (tolower(arr[i]) > tolower(max))
		{
			max = arr[i];
		}

	}
	return max;
}




int main()
{
	const int SIZEA = 5;
	double a[SIZEA]{ 10.4, 2.8, -5.11, 6.2, 99.7 };
	printArray(a, SIZEA);// ��������� ������ ����� ������ �������, ������, �� ����� �������� ���� double, ��������� ������� ��������� �������, ��� ���� �� ��� T = double
	cout << "Max = " << maxArray(a, SIZEA) << endl;


	const int SIZEB = 7;
	double b[SIZEB]{ 1, 2, 5, 62, 80, 44, 33}; //T = int
	printArray(b, SIZEB);
	cout << "Max = " << maxArray(b, SIZEB) << endl;


	const int SIZEC = 5;
	string c[SIZEC]{ "apple","yogurt", "pizza", "cola", "orange" };
	printArray(c, SIZEC);
	cout << "Max = " << maxArray(c, SIZEC) << endl;



	const int SIZED = 5;
	char d[SIZED]{ 'a', 'Z', 'b', 'y','M' };
	printArray(d, SIZED); // T = char
	cout << "Max = " << maxArray(d, SIZED) << endl; //�������� �������
	cout << "Max = " << maxArray<char>(d, SIZED) << endl; //���� ��������� ������� �� ������

}

//void printArray(const double arr[], int size);
//{
//	for (int i = 0; i < size; i++)
//	{
//		cout << "\t" << arr[i];
//	}cout << endl;
//}



// ��������� ������� ������� ��� ������ ���������� � ���� �����, � ����� �����, � ������������ ����� �� � ����������� �����
// ���������� ������ ������� ��� ���� int, double, string, char