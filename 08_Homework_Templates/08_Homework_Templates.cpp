#include <iostream>
#include <iomanip>
using namespace std;







//�������� 1
//�������� ������� ��� ������ �������, ��� ����� ����� �� ���������� ��� �� ��������� ������� ������(Selection Sort),
//������� �� �������� ��������� �������.
//���� �� ������� true, ���������� ��� �� ����������, ���� false � �� ���������.
//����� 2 ��������� ������� � �� ����� � ���� �����, ����� �������� �� ������������� ������� true.

template <typename T>
void selectionSort(T arr[], int size, bool direction = true)
{
    for (int i = 0; i < size - 1; i++)
    {
        int selected = i;
        for (int j = i + 1; j < size; j++)
        {
            if ((direction && arr[j] < arr[selected]) || (!direction && arr[j] > arr[selected]))
            {
                selected = j;
            }
        }
        T temp = arr[i];
        arr[i] = arr[selected];
        arr[selected] = temp;
    }
}

//�������� 2
//�������� ������� ��� ������ �������, ��� ����� ����� �������� ������ �� ���������, � ����� � �� ����������,
//�������������� �������� ��������� ��� ������.

template <typename T>
void bubbleSortHalf(T arr[], int size)
{
    int half = size / 2;
    for (int i = 0; i < half - 1; i++)
    {
        for (int j = 0; j < half - 1 - i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = half; i < size - 1; i++)
    {
        for (int j = half; j < size - 1 - (i - half); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

//�������� 3
//� ������� ���������� ����� ���������� ����� � ������� �� - 20 �� + 20.
//��������� ������ ������� ������ ��'����� �������� (��������� ��'������ �������� � ����������� ��'������ ��������) 
//� ����������� ��������, �� ����������� �� ����.
//
//��������� �������� ������� ������ ������� ��'������ (���������) �� ���������� ��'������(�����������) ��������.
//������� ���������� ������ ���������� ��'������ ��� -1 ��� ��������� ������. 
//����������� �� ������� ��� ������ ������ ��'����� �������� � �����.

int findFirstNegative(const int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0) return i;
    }
    return -1;
}

int findLastNegative(const int arr[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        if (arr[i] < 0) return i;
    }
    return -1;
}

void sortBetweenNegatives(int arr[], int size)
{
    int left = findFirstNegative(arr, size);
    int right = findLastNegative(arr, size);
    if (left != -1 && right != -1 && left < right)
    {
        for (int i = left + 1; i < right; i++)
        {
            for (int j = left + 1; j < right - (i - left - 1); j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
}


//��������� ��������.
//�������� 4
//�������� �������  �������  ��� ��������� ����� ������� :
//? ���������� ��������� ������� � ���������;
//? ���� ������� �� �����;
//? ���������� ������������� � ���������� ��������
//�� ������� ������� �������;
//? ���������� �������� �� ���������� ������ ���
//������� ����� �������.
//
//��������� ������ ������� ������� ��� ������� ������ ����(��������� int, double, char)

template <typename T>
void inputMatrix(T matrix[][5], int size)
{
    cout << "Enter matrix elements " << size << "x" << size << ":\n";
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            cin >> matrix[i][j];
}

template <typename T>
void printMatrix(T matrix[][5], int size)
{
    cout << "Matrix:\n";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << setw(5) << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

template <typename T>
void minMaxDiagonal(T matrix[][5], int size, T& minVal, T& maxVal)
{
    minVal = matrix[0][0];
    maxVal = matrix[0][0];
    for (int i = 1; i < size; i++)
    {
        if (matrix[i][i] < minVal) minVal = matrix[i][i];
        if (matrix[i][i] > maxVal) maxVal = matrix[i][i];
    }
}

template <typename T>
void sortRows(T matrix[][5], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            for (int k = 0; k < size - j - 1; k++)
            {
                if (matrix[i][k] > matrix[i][k + 1])
                {
                    T temp = matrix[i][k];
                    matrix[i][k] = matrix[i][k + 1];
                    matrix[i][k + 1] = temp;
                }
            }
        }
    }
}


int main()
{

    srand(time(0));
    
    //�������� 1
//�������� ������� ��� ������ �������, ��� ����� ����� �� ���������� ��� �� ��������� ������� ������(Selection Sort),
//������� �� �������� ��������� �������.
//���� �� ������� true, ���������� ��� �� ����������, ���� false � �� ���������.
//����� 2 ��������� ������� � �� ����� � ���� �����, ����� �������� �� ������������� ������� true.

    cout << "\n=== Task 1 ===\n";
    int arr1[10];
    for (int i = 0; i < 10; i++)
        arr1[i] = rand() % 100 - 50;
    cout << "Before sorting (selection): ";
    for (int i = 0; i < 10; i++) cout << arr1[i] << " ";
    cout << endl;
    selectionSort(arr1, 10, true);
    cout << "After sorting (increase): ";
    for (int i = 0; i < 10; i++) cout << arr1[i] << " ";
    cout << endl;


//�������� 2
//�������� ������� ��� ������ �������, ��� ����� ����� �������� ������ �� ���������, � ����� � �� ����������,
//�������������� �������� ��������� ��� ������.

    cout << "\n=== Task 2 2 ===\n";
    int arr2[10];
    for (int i = 0; i < 10; i++)
        arr2[i] = rand() % 100;
    cout << "Before sorting halfes: ";
    for (int i = 0; i < 10; i++) cout << arr2[i] << " ";
    cout << endl;
    bubbleSortHalf(arr2, 10);
    cout << "After sorting halfes: ";
    for (int i = 0; i < 10; i++) cout << arr2[i] << " ";
    cout << endl;


//�������� 3
//� ������� ���������� ����� ���������� ����� � ������� �� - 20 �� + 20.
//��������� ������ ������� ������ ��'����� �������� (��������� ��'������ �������� � ����������� ��'������ ��������) 
//� ����������� ��������, �� ����������� �� ����.
//
//��������� �������� ������� ������ ������� ��'������ (���������) �� ���������� ��'������(�����������) ��������.
//������� ���������� ������ ���������� ��'������ ��� -1 ��� ��������� ������. 
//����������� �� ������� ��� ������ ������ ��'����� �������� � �����.

    cout << "\n=== Task 3 ===\n";
    int arr3[10];
    for (int i = 0; i < 10; i++)
        arr3[i] = rand() % 41 - 20;
    cout << "Before sorting between negatives: ";
    for (int i = 0; i < 10; i++) cout << arr3[i] << " ";
    cout << endl;
    sortBetweenNegatives(arr3, 10);
    cout << "After sorting between negatives: ";
    for (int i = 0; i < 10; i++) cout << arr3[i] << " ";
    cout << endl;

//��������� ��������.
//�������� 4
//�������� �������  �������  ��� ��������� ����� ������� :
//? ���������� ��������� ������� � ���������;
//? ���� ������� �� �����;
//? ���������� ������������� � ���������� ��������
//�� ������� ������� �������;
//? ���������� �������� �� ���������� ������ ���
//������� ����� �������.
//
//��������� ������ ������� ������� ��� ������� ������ ����(��������� int, double, char)

    cout << "\n=== Task 4 ===\n";
    int matrix[5][5];
    inputMatrix(matrix, 5);
    cout << "Matrix before rows sorting:\n";
    printMatrix(matrix, 5);
    int minVal, maxVal;
    minMaxDiagonal(matrix, 5, minVal, maxVal);
    cout << "Min diagonal: " << minVal << ", Max diagonal: " << maxVal << endl;
    cout << endl;
    sortRows(matrix, 5);
    cout << "Matrix after rows sorting:\n";
    printMatrix(matrix, 5);


















}

