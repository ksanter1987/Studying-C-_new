
#include <iostream>
using namespace std;

struct Book {
    int id;
    char title[50];
    char author[50];
    char publisher[50];
    char genre[50];
    int year;
    float price;
};

void Show(Book b)
{
    cout << "ID : " << b.id << endl;
    cout << "Title : " << b.title << endl;
    cout << "Author : " << b.author << endl;
    cout << "Publisher : " << b.publisher << endl;
    cout << "Genre : " << b.genre << endl;
    cout << "Year : " << b.year << endl;
    cout << "Price : " << b.price << " $" << endl;
    cout << "===============================================================" << endl;
}

void ShowAllBooks(Book books[], int size)
{
    for (int i = 0; i < size; i++)
    {
        Show(books[i]);
    }
}


void searchByAuthor(Book books[], int size, char name[])
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(books[i].author, name) == 0)
            Show(books[i]);
    }
}

void searchByTitle(Book books[], int size, char name[])
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(books[i].title, name) == 0)
            Show(books[i]);
    }
}

void searchByPublisher(Book books[], int size, char name[])
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(books[i].publisher, name) == 0)
            Show(books[i]);
    }
}

void searchByGenre(Book books[], int size, char name[])
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(books[i].genre, name) == 0)
            Show(books[i]);
    }
}

void ChangeData(Book& b)
{
    cout << "Enter new title: "; cin.getline(b.title, 50);
    cout << "Enter new author: "; cin.getline(b.author, 50);
    cout << "Enter new publisher: "; cin.getline(b.publisher, 50);
    cout << "Enter new genre: "; cin.getline(b.genre, 50);
    cout << "Enter new year: "; cin >> b.year;
    cout << "Enter new price: "; cin >> b.price;
    cin.ignore();
}

int main()
{
    //Завдання 1. Розробіть програму «Бібліотека».Створіть
    //    структуру «Книга»(id, назва, автор, видавництво, жанр,
    //        рік видання, price).
    //    Створіть масив з 10 книг.Реалізуйте для нього такі
    //    можливості :
    //■ Редагувати книгу; (ChangeData)
    //    ■ Друк усіх книг; (Show);
    //■ Пошук книг за автором;
    //■ Пошук книги за назвою;
    //■ Пошук книги за видавництвом
    //    ■ Пошук книги за жанром



    const int size = 10;
    Book books[size] = {
        {1, "1984", "George Orwell", "Secker & Warburg", "Dystopian", 1949, 15.99},
        {2, "The Hobbit", "J.R.R. Tolkien", "Allen & Unwin", "Fantasy", 1937, 12.50},
        {3, "Pride and Prejudice", "Jane Austen", "T. Egerton", "Romance", 1813, 9.80},
        {4, "To Kill a Mockingbird", "Harper Lee", "J.B. Lippincott & Co.", "Classic", 1960, 14.60},
        {5, "The Great Gatsby", "F. Scott Fitzgerald", "Charles Scribner's Sons", "Tragedy", 1925, 10.20},
        {6, "Moby Dick", "Herman Melville", "Harper & Brothers", "Adventure", 1851, 13.75},
        {7, "The Catcher in the Rye", "J.D. Salinger", "Little, Brown", "Realism", 1951, 11.40},
        {8, "Brave New World", "Aldous Huxley", "Chatto & Windus", "Dystopian", 1932, 14.00},
        {9, "War and Peace", "Leo Tolstoy", "The Russian Messenger", "Historical", 1869, 18.00},
        {10, "Crime and Punishment", "Fyodor Dostoevsky", "The Russian Messenger", "Psychological", 1866, 16.50}
    };

    int choice;
    char input[50];

    do {
        cout << "\n======================== LIBRARY ==============================\n" << endl;
        cout << "Show all books________________________________________________[1]" << endl;
        cout << "Search by title_______________________________________________[2]" << endl;
        cout << "Search by author______________________________________________[3]" << endl;
        cout << "Search by publisher___________________________________________[4]" << endl;
        cout << "Search by genre_______________________________________________[5]" << endl;
        cout << "Edit book by ID_______________________________________________[6]" << endl;
        cout << "Exit__________________________________________________________[0]\n" << endl;
        cout << "Choose option: ";
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
        case 1:
            for (int i = 0; i < size; i++)
            {
                Show(books[i]);
            }
            break;
        case 2:
            cout << "Enter title: ";
            cin.getline(input, 50);
            searchByTitle(books, size, input);
            break;
        case 3:
            cout << "Enter author: ";
            cin.getline(input, 50);
            searchByAuthor(books, size, input);
            break;
        case 4:
            cout << "Enter publisher: ";
            cin.getline(input, 50);
            searchByPublisher(books, size, input);
            break;
        case 5:
            cout << "Enter genre: ";
            cin.getline(input, 50);
            searchByGenre(books, size, input);
            break;
        case 6:
            int id;
            cout << "Enter ID of the book to edit: ";
            cin >> id;
            cin.ignore();
            for (int i = 0; i < size; i++)
            {
                if (books[i].id == id)
                {
                    ChangeData(books[i]);
                    break;
                }
            }
            break;
        case 0:
            cout << "Goodbye!" << endl;
            break;
        default:
            cout << "ERROR" << endl;
        }

    } while (choice != 0);








}

