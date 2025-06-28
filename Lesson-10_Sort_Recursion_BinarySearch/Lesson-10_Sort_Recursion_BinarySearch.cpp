
#include <iostream>
using namespace std;

//selection sort сортування виробу
//bubble sort
//shaker sort
//сортування вставкою
// quick sort (recursion)




void Foo(int a)
{
    if (a < 1)
        return; // break
    cout << "Hello world " << a << endl;
    a--;
    Foo(a);
}


int SummaElements(int arr[], int size, int index)
{
    //int summa = 0;

    //for (int i = 0; i < size; i++)
    //{
    //    summa += arr[i];
    //}
    //return summa;

    if (index == size - 1)
    {
        return arr[index];
    }
    else
    {
        return arr[index] + SummaElements(arr, size, index + 1)
    }


}


void QuickSort(int arr[], int B, int E)
{
    int i = B, j = E;
    int temp, p;
    p = arr[(B + E) / 2];
    do
    {
        while (arr[i] < p) i++;
        while (arr[j] > p) j--;
        if (i <= j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    } while (i <= j);
    if (B < j)QuickSort(arr, B, j);
    if (i < E)QuickSort(arr,i, E)
}

void BinarySearch(int arr[], int size, int key)
{
    int B = 0, E = size - 1;
    while (true)
    {
        int p = (B + E) / 2;
        if (key > arr[p])
        {
            B = p + 1;
        }
        else if (key < arr[p])
        {
            E = p - 1;
        }
        else if (key == arr[p])
        {
            return p;
        }
        if (B > E)return -1;
    }
}



int main()
{
    Foo(10);

    QuickSort()



































}


