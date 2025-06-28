

#include <iostream>
using namespace std;




//void printArray(const double arr[], int size);



// template = шаблон функції, зразок функції, на основі якого потім створюються конкретні функції
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
// 1) конкретна функція перекриє шаблон, 
// 2) шаблон (це пріорітети)




// конкретна функція, яка перекриє шаблон
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
	printArray(a, SIZEA);// компілятор бачить тільки шаблон функції, бачить, що масив передано типу double, компілятор згенерує конкретну функцію, яка буде на типі T = double
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
	cout << "Max = " << maxArray(d, SIZED) << endl; //звичайна функція
	cout << "Max = " << maxArray<char>(d, SIZED) << endl; //буде працювати функція на шаблоні

}

//void printArray(const double arr[], int size);
//{
//	for (int i = 0; i < size; i++)
//	{
//		cout << "\t" << arr[i];
//	}cout << endl;
//}



// Визначити шаблони функцій для пошуку мінімального з двох даних, з трьох даних, в одновимірному масиві та у двовимірному масиві
// Перевіритии роботу функцій для типів int, double, string, char