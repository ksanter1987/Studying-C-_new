
#include <iostream>
using namespace std;

struct Movie
{
    int id;
    char name[50];
    char director[50];
    char genre[50];
    float rating;
    float price;
};

void Show(Movie m)
{
    cout << "Id : " << m.id << endl;
    cout << "Name : " << m.name << endl;
    cout << "Director : " << m.director << endl;
    cout << "Genre : " << m.genre << endl;
    cout << "Rating : " << m.rating << endl;
    cout << "Price : " << m.price << endl;
    cout << endl;
}

void searchByName(Movie movies[], int size, char name[])
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(movies[i].name, name) == 0) {
            Show(movies[i]); cout << endl;
        }
    }
}

void searchByGenre(Movie movies[], int size, char name[])
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(movies[i].genre, name) == 0) {
            Show(movies[i]); cout << endl;
        }
    }
}

void searchByDirector(Movie movies[], int size, char name[])
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(movies[i].director, name) == 0) {
            Show(movies[i]); cout << endl;
        }
    }
}

void TheMostPopular(Movie movies[], int size, char name[])
{
    int max = 0;
    int maxIndex = 0;
    for (int i = 0; i < size; i++)
    {
        if (strcmp(movies[i].genre, name) == 0) {
            if (movies[i].rating > max)
            {
                max = movies[i].rating;
                maxIndex = i;
            }
        }
    }
    Show(movies[maxIndex]);
}

int main()
{
    int choice;
    char name[50];
    const int size = 5;
    Movie movies[size]{
        {1,"Harry Potter", "Alfonso Cuaron", "Fantasy",3.72,150.49},
        {2,"Spider-Man", "Sam Raine", "Fantasy",4.5,100},
        {3,"Rambo", "Ted", "Detective",3.2,78.55},
        {4,"Venom", "Ruben ", "Action",4.3,170.33},
        {5,"The hungers games", "Gary Ross", "Fantasy",4.8,190.36}
    };

    do
    {
        cout << "============================ MENU =========================" << endl;
        cout << "Show all movies                                         [1]" << endl;
        cout << "Show by name                                            [2]" << endl;
        cout << "Show by genre                                           [3]" << endl;
        cout << "Show by director                                        [4]" << endl;
        cout << "The most popular movie                                  [5]" << endl;
        cout << "Exit                                                    [0]" << endl;
        cin >> choice;
        cin.ignore();
        switch (choice)
        {
        case 1:
            for (int i = 0; i < size; i++)
            {
                Show(movies[i]); cout << endl;
            }
            break;
        case 2:
            cout << "Enter movie name : ";
            cin.getline(name, 50); //>> name;
            searchByName(movies, size, name);
            break;
        case 3:
            cout << "Enter movie genre : ";
            cin.getline(name, 50); //>> name;
            searchByGenre(movies, size, name);
            break;
        case 4:
            cout << "Enter movie director : ";
            cin.getline(name, 50); //>> name;
            searchByDirector(movies, size, name);
            break;
        case 5:
            cout << "Enter movie genre : ";
            cin.getline(name, 50); //>> name;
            TheMostPopular(movies, size, name);
            break;
        case 0:
            cout << "Good Buy!!!" << endl;
            exit(0);
        default:
            break;

        }



    } while (choice != 0);





































}

