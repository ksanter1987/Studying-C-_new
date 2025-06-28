
#include <iostream>
using namespace std;

int main()
{
    cout << "Hello world" << endl;
    char word[] = { 'C', 'a', 't', '!', '\0'};
	for (int i = 0; i < 4; i++)
	{
		cout << word[i];
	}
	cout << endl;


	//--------------------- C-Style ------------------------- 0-терміновані рядки, вкінці ставиться '\0'
	//--------------------- String -------------------------

	char mystring[] = "string";
	cout << mystring << " has " << sizeof(mystring) << " characters" << endl;
	for (int i = 0; i < sizeof(mystring); i++)
	{
		cout << static_cast<int>(mystring[i]) << " ";
	}
	cout << endl;


	mystring[1] = 'p';
	cout << mystring << endl;
	//int arr[] = { 1,2,3,4,5 };
	//arr[0] = 7;


	//char name[15] = "Max"; // 3 letter + \0
	//cout << "My name is " << name << endl;

	//char myname[255];
	//cout << "Enter your name ";
	////cin >> myname;
	//cin.getline(myname, 255);
	//cout << "You entered : " << myname << endl;

	//cout << "Sizeof : " << sizeof(myname) << endl;
	//cout << "strlen : " << strlen(myname) << endl;

	cout << "\n\n\n\n\n" << endl;
	char text[] = "Print this!";
	char copy[50];
	strcpy_s(copy, text);
	cout << copy  << endl;

	char arr[255] = "Returns the head of a list.";
	cout << arr << endl;
	_strupr_s(arr);
	cout << arr << endl;
	_strlwr_s(arr);
	cout << arr << endl;
	_strrev(arr);
	cout << arr << endl;
	_strrev(arr);
	cout << arr << endl;

	cout << "Copy array :" << endl;
	char arr2[255];
	strcpy_s(arr2, arr);
	cout << arr2 << endl;

	arr2[6] = '\0';
	cout << arr2 << endl;

	cout << "Add to array : " << endl;
	strcat_s(arr, ".........");
	cout << arr << endl;

	cout << "Enter text :" << endl;
	cin.getline(arr2, 255);
	strcat_s(arr, arr2);
	cout << arr << endl;































}


