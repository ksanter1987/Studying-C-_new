
#include <iostream>
using namespace std;

//int GetMax(int* arr, int size)
//{
//    int max = arr[0];
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] > max)max= arr[i];
//	}
//	return max;
//}
//
//short GetMax(short* arr, int size)
//{
//	short max = arr[0];
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] > max)max = arr[i];
//	}
//	return max;
//}

template<typename T>
T GetMax(T* arr, int size)
{
	T max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}



//template<typename T_coll, typename T_value>
template<class T_coll, class T_value>
class MyClass
{
	T_coll* collection;
	int size;
	T_value point; //default c-tor
public:
	MyClass()
	{
		collection = nullptr;
		size = 0;
		//point = 0;
	}
	MyClass(T_coll* col, T_value value) : collection(col), point(value) { size = 5; }
	~MyClass()
	{
		if (collection != nullptr)
			delete[]collection;
	}
	void setCollection(T_coll* coll);
	void setPoint(T_value value);
	
	void Print()const
	{
		cout << "Collection : " << collection << endl;
		for (int i = 0; i < size; i++)
		{
			cout << collection[i] << " ";
		}
		cout << endl;
		cout << "Value : " << point << endl;
	}
};

template<class T_coll, class T_value>
inline void MyClass<T_coll, T_value>::setCollection(T_coll* coll) //address
{
	collection = coll;
}

template<class T_coll, class T_value>
void MyClass<T_coll, T_value>::setPoint(T_value value)
{
	point = value;
}

template<typename T_coord>
class Point
{
private:
	T_coord x;
	T_coord y;
public:
	Point() :x(0), y(0) {}
	Point(T_coord value) :x(value), y(value) {}
	Point(T_coord x, T_coord y) :x(x), y(y) {}
	void Print()
	{
		cout << "X : " << x << ". Y : " << y << endl;
	}
	void SetCoords(T_coord newX, T_coord newY)
	{
		x = newX;
		y = newY;
	}
};

template<typename T_X, typename T_Y>
class NewPoint
{
private:
	T_X x;
	T_Y y;
public:
	NewPoint() :x(0), y(0) {}
	NewPoint(T_X x, T_Y y) :x(x), y(y) {}
	void Print()
	{
		cout << "X : " << x << ". Y : " << y << endl;
	}
	void SetCoords(T_X newX, T_Y newY)
	{
		x = newX;
		y = newY;
	}
};



#include <vector>
int main()
{
	vector<int> v1 = { 1,2,3,4,5,6 };
	vector<Point<int >> points;
	
	NewPoint<int, float> p1(45, 3.33);
	p1.Print();

	NewPoint<double, float> p2(1.2222222222222222222222, 5.45);
	p2.Print();


	Point< float> point(4.33, 6.02);
	point.Print();
	point.SetCoords(100, 200);
	point.Print();


	Point< int> point1(4, 6);
	point1.Print();
	point1.SetCoords(100, 200);
	point1.Print();


	long* long_arr = new long[5];
	for (int i = 0; i < 5; i++)
	{
		long_arr[i] = i + 1; 
		cout << long_arr[i] << endl;
	}
	cout << endl;

	char* char_arr = new char[5];
	for (int i = 0; i < 5; i++)
	{
		char_arr[i] = 'a' + i;
		cout << char_arr[i] << endl;
	}
	cout << endl;

	MyClass<long, string> cl1(long_arr, "C;ass with long arr");
	MyClass<char, string> cl2(char_arr, "C;ass with char arr");
	cl1.Print();
	cl2.Print();



	/*delete[] long_arr;
	delete[] char_arr;*/




























	/*const int size = 10;
	long numbers[size] = { 1,3,4,5,7,45,65,232,23,4 };
	cout << " Max element : " << GetMax(numbers, size) << endl;

	int numbers1[size] = { 1,3,4,5,7,45,65,232,23,4 };
	cout << " Max element : " << GetMax(numbers1, size) << endl;

	int numbers2[size] = { 1,3,4,5,7,45,65,232,23,4 };
	cout << " Max element : " << GetMax(numbers2, size) << endl;


	string colors[5] = { "red", "green", "yellow", "white", "black" };
	cout << " Max element : " << GetMax(colors, 5) << endl;

	string names[5] = { "Andriy", "Mykola", "Oleksandr", "Yura", "Vlad" };
	cout << " Max element : " << GetMax(names, 5) << endl;

	string names1[5] = { "A", "AA", "AAA", "AAAA", "AAAAA" };
	cout << " Max element : " << GetMax(names1, 5) << endl;*/

}


