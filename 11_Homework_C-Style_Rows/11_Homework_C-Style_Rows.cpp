
#include <iostream>
using namespace std;



int stringLength(const char str[])
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}

bool isVowel(char symbol)
{
    char vowels[] = "aeiou";
    symbol = tolower(symbol);
    for (int i = 0; vowels[i] != '\0'; i++)
    {
        if (symbol == vowels[i]) return true;
    }
    return false;
}

int main()
{
    /*1.Вводиться рядок.Яких букв у рядку більше ’а’ чи ’о’ ?*/

    //char str[256];
    //cout << "Enter string: ";
    //cin.getline(str, 256);
    //int count_a = 0, count_o = 0;
    //for (int i = 0; i < strlen(str); i++)
    //{
    //    if (str[i] == 'a' || str[i] == 'A') count_a++;
    //    if (str[i] == 'o' || str[i] == 'O') count_o++;
    //}

    //if (count_a > count_o)
    //    cout << "More letters 'a'\n";
    //else if (count_o > count_a)
    //    cout << "More letters 'o'\n";
    //else
    //    cout << "Equally\n";



    /*2.Вводиться рядок.Порахувати кількість латинських букв, цифр та пробілів у рядку.*/
   
    //char str2[256];
    //cout << "Enter string: ";
    //cin.getline(str2, 256);

    //int letters = 0, digits = 0, spaces = 0;

    //for (int i = 0; i < strlen(str2); i++)
    //{
    //    if (isalpha(str2[i]) && ((str2[i] >= 'A' && str2[i] <= 'Z') || (str2[i] >= 'a' && str2[i] <= 'z')))
    //        letters++;
    //    else if (isdigit(str2[i]))
    //        digits++;
    //    else if (isspace(str2[i]))
    //        spaces++;
    //}

    //cout << "Letters (latin) : " << letters << "\n";
    //cout << "Digits : " << digits << "\n";
    //cout << "Spaces : " << spaces << "\n";


    //3.Дано рядок.Замінити у рядку всі великі букви на малі і навпаки.

    //char str3[256];
    //cout << "Enter string: ";
    //cin.getline(str3, 256);
    //for (int i = 0; i < strlen(str3); i++)
    //{
    //    if (isupper(str3[i]))
    //        str3[i] = tolower(str3[i]);
    //    else if (islower(str3[i]))
    //        str3[i] = toupper(str3[i]);
    //}

    //cout << "Changed string : " << str3 << endl;


    //4.Написати функцію, яка отримує рядок і повертає довжину рядка.

    //char str4[256];
    //cout << "Enter string : ";
    //cin.getline(str4, 256);

    //cout << "String length : " << stringLength(str4) << endl;



    //5 * **.Дано рядок.Видалити із рядка заданий символ.Результат розмістити у новому рядку.

    //char str5[256], result[256];
    //char symbol;

    //cout << "Enter string : ";
    //cin.getline(str5, 256);

    //cout << "Enter symbol to delete : ";
    //cin >> symbol;
    //int i = 0, j = 0;
    //while (str5[i] != '\0')
    //{
    //    if (str5[i] != symbol)
    //    {
    //        result[j] = str5[i];
    //        j++;
    //    }
    //    i++;
    //}
    //result[j] = '\0';
    //cout << "Result : " << result << endl;


    //6 * **.Розробити програму, яка зчитує з екрану рядок, а потім видає статистику :
    //кількість пробільних символів(whitespaces), голосних, приголосних, знаків пунктуації.
    //    Введення передбачається англомовним.

    char str6[256];
    cout << "Enter string : ";
    cin.getline(str6, 256);
    int spaces = 0;
    int vowels = 0;
    int consonants = 0;
    int punctuation = 0;
    int i = 0;
    while (str6[i] != '\0')
    {
        char symbol = str6[i];
        if (isspace(symbol))
        {
            spaces++;
        }
        else if (isalpha(symbol))
        {
            if (isVowel(symbol))
                vowels++;
            else
                consonants++;
        }
        else if (ispunct(symbol))
        {
            punctuation++;
        }
        i++;
    }
    cout << "\n============== STAT =================\n";
    cout << "Spaces : " << spaces << endl;
    cout << "Vowels : " << vowels << endl;
    cout << "Consonants : " << consonants << endl;
    cout << "Punctuation marks : " << punctuation << endl;












}

