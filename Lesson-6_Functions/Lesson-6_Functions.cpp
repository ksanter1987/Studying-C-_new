

#include <iostream>
using namespace std;

void hello(string name = "everyone") // void - ������� ����� �� ������� � ������� ���
{
    // ���� �������
    cout << "Hello!\n" << name << "!\n";
    

}

void drawLine(int length = 80, char symbol = '_')
{
    for (int i = 0; i < length; i++)
    {
        cout << symbol;
    }
    cout << endl;
    
}


int main()
{
    void hello(string name = "everyone"); //�������� ��� ���������� �������
    hello("Oleg");
    hello();


    drawLine(); // 80
    drawLine(70, '.');
    drawLine(40, '_');
    string name;
    cout << "Enter name : ";
    cin >> name;
    hello(name);
    return 0;
}

// ���������� �������
void hello(string name = "everyone") // void - ������� ����� �� ������� � ������� ���
{
    // ���� �������
    cout << "Hello!\n" << name << "!\n";


}
