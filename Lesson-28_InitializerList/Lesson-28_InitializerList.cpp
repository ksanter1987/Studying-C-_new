
#include <iostream>
using namespace std;

class Array
{
   int* arr;
   int size;
public:
   Array()
   {
       arr = nullptr;
       size = 0;
   }
   Array(int size)
   {
       this->size = size;
       arr = new int[size] {}; // элементы инициализируются нулями
           /*for (int i = 0; i < size; i++)
            {
                arr[i] = 0;
            }*/
   }
   Array(const initializer_list<int> list)
   {
       this->size = list.size();
       arr = new int[size];
       /*for (int i = 0; i < size; i++)
       {
           arr[i] = list[i];
       }*/
       int i = 0;
       for (int elem : list)
       {
           arr[i++] = elem;
       }
   }

   void Fill(const initializer_list<int> list)
   {
       if (arr != nullptr)
       {
           delete[]arr;
       }
       this->size = list.size();
       arr = new int[size];
       int i = 0;
       for (int elem : list)
       {
           arr[i++] = elem;
       }
   }

   ~Array()
   {
       if (arr != nullptr)
       {
           delete[]arr;
       }
   }
   void Print() const
   {
       for (int i = 0; i < size; i++)
       {
           cout << arr[i] << " ";
       }
       cout << endl;
   }
};

int main()
{

    int static_arr[5] = {1,2,3,4,5};
    int* dynam_arr = new int[5] {10, 11, 12, 13, 14};


    Array arr(10);
    arr.Print();

    Array newArr({ 14, 15, 16, 17, 18, 19, 20,21,22,23,24 });
    newArr.Print();

    newArr.Fill({ 1,2,3 });
    newArr.Print();














}