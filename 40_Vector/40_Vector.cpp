

#include <iostream>
#include <vector>
using namespace std;

void Print(const vector<int>& v1)
{
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;
}


int main()
{
	vector<int> v; // empty vector size = 0
	vector<int> v1({1,2,3,4,5,6,7,8,9,10}); // size = 10
	vector<int> v2(20);
	vector<int> v3 = {22,83 };

	

	//for (int i = 0; i < v1.size(); i++)
	//{
	//	cout << v1[i] << " ";
	//}
	//cout << endl;


	v1[1] = 22;
	for (int item : v1)
	{
		cout << item << " ";
	}
	cout << endl;
	//delete element
	v1.erase(v1.begin());
	Print(v1);
	v1.erase(v1.begin() + 3);
	Print(v1);
	v1.erase(v1.begin() + 2, v1.end() - 2);
	Print(v1);
	v1.erase(v1.end() - 1);
	Print(v1);



	cout << "Size : " << v1.size() << endl;
	cout << "Capacity : " << v1.capacity() << endl;
	//insert
	v1.insert(v1.end(), 77);
	Print(v1);
	cout << "Size : " << v1.size() << endl;
	cout << "Capacity : " << v1.capacity() << endl;

	v1.insert(v1.begin(), {11,12,13,14,15});
	Print(v1);
	cout << "Size : " << v1.size() << endl;
	cout << "Capacity : " << v1.capacity() << endl;

	v1.insert(v1.begin()+4, 5, 88);
	Print(v1);
	cout << "Size : " << v1.size() << endl;
	cout << "Capacity : " << v1.capacity() << endl;

	v1.insert(v1.end(), v3.begin()+2, v3.end()-2);
	Print(v1);
	cout << "Size : " << v1.size() << endl;
	cout << "Capacity : " << v1.capacity() << endl;

	//add to the end
	v1.push_back(444);
	v1.push_back(444);
	v1.push_back(444);
	v1.push_back(444);
	Print(v1);

	//delete from the end
	v1.pop_back();
	v1.pop_back();

	Print(v1);
	Print(v3);
	/*v1.swap(v3);*/
	Print(v1);
	Print(v3);

	cout << "Front [first element] : " << v1.front() << endl;
	cout << "Back [back element] : " << v1.back() << endl;


	v1.resize(50, 5);
	Print(v1);

	v1.push_back(444);
	v1.push_back(444);
	Print(v1);

	v1.resize(10);
	Print(v1);
	cout << "Size : " << v1.size() << endl;
	cout << "Capacity : " << v1.capacity() << endl;

	v1.shrink_to_fit(); //capacity = size
	cout << "Size : " << v1.size() << endl;
	cout << "Capacity : " << v1.capacity() << endl;
}


