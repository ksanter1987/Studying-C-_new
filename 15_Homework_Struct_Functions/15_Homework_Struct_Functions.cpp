
#include <iostream>
#include <string>
#include <fstream>
using namespace std;


struct Book
{
    string title;
    string author;
    string publisher;
    string genre;
    int year;
    double price;
};

void ShowBook(const Book& book)
{
    cout << "\n======================================\n";
    cout << "Title: " << book.title << endl;
    cout << "Author: " << book.author << endl;
    cout << "Publisher: " << book.publisher << endl;
    cout << "Genre: " << book.genre << endl;
    cout << "Year: " << book.year << endl;
    cout << "Price: $" << book.price << endl;
    cout << "\n======================================\n";
}

void ShowAllBooks(Book books[], int count)
{
    cout << "\n============== All Books ==============\n";
    for (int i = 0; i < count; i++)
    {
        cout << "[" << i + 1 << "]\n";
        ShowBook(books[i]);
    }
}

void ChangeData(Book& book)
{
    cout << "Enter new data for the book (leave empty to keep current):\n";

    string input;

    cout << "Title (" << book.title << "): ";
    getline(cin, input);
    if (!input.empty()) book.title = input;

    cout << "Author (" << book.author << "): ";
    getline(cin, input);
    if (!input.empty()) book.author = input;

    cout << "Publisher (" << book.publisher << "): ";
    getline(cin, input);
    if (!input.empty()) book.publisher = input;

    cout << "Genre (" << book.genre << "): ";
    getline(cin, input);
    if (!input.empty()) book.genre = input;

    cout << "Year (" << book.year << "): ";
    getline(cin, input);
    if (!input.empty()) book.year = stoi(input);

    cout << "Price (" << book.price << "): ";
    getline(cin, input);
    if (!input.empty()) book.price = stod(input);

    cout << "Book updated.\n";
}

void SearchByField(Book books[], int count, const string& field, const string& value)
{
    bool found = false;
    cout << "\nSearch results for " << field << ": " << value << "\n";
    for (int i = 0; i < count; i++)
    {
        if ((field == "author" && books[i].author == value) ||
            (field == "title" && books[i].title == value) ||
            (field == "publisher" && books[i].publisher == value) ||
            (field == "genre" && books[i].genre == value))
        {
            ShowBook(books[i]);
            found = true;
        }
    }
    if (!found) cout << "No books found with " << field << " = " << value << endl;
}

void AddNewBook(Book books[], int& count, int max_size)
{
    if (count >= max_size)
    {
        cout << "Library is full, cannot add new book.\n";
        return;
    }
    Book newBook;
    cout << "Enter title: ";
    getline(cin, newBook.title);
    cout << "Enter author: ";
    getline(cin, newBook.author);
    cout << "Enter publisher: ";
    getline(cin, newBook.publisher);
    cout << "Enter genre: ";
    getline(cin, newBook.genre);
    cout << "Enter year: ";
    cin >> newBook.year;
    cout << "Enter price: ";
    cin >> newBook.price;
    cin.ignore();

    books[count++] = newBook;
    cout << "New book added.\n";
}


void SaveToFile(const Book books[], int count, const string& filename)
{
    ofstream file(filename);
    if (!file)
    {
        cout << "Cannot open file for writing.\n";
        return;
    }
    for (int i = 0; i < count; i++)
    {
        file << books[i].title << '\n';
        file << books[i].author << '\n';
        file << books[i].publisher << '\n';
        file << books[i].genre << '\n';
        file << books[i].year << '\n';
        file << books[i].price << '\n';
    }
    cout << "Library saved to file " << filename << endl;
}


void LoadFromFile(Book books[], int& count, int max_size, const string& filename)
{
    ifstream file(filename);
    if (!file)
    {
        cout << "Cannot open file for reading.\n";
        return;
    }
    count = 0;
    while (!file.eof() && count < max_size)
    {
        Book b;
        if (!getline(file, b.title)) break;
        if (!getline(file, b.author)) break;
        if (!getline(file, b.publisher)) break;
        if (!getline(file, b.genre)) break;

        string line;
        if (!getline(file, line)) break;
        b.year = stoi(line);

        if (!getline(file, line)) break;
        b.price = stod(line);

        books[count++] = b;
    }
    cout << "Library loaded from file " << filename << ", total books: " << count << endl;
}


int main()
{
    //Завдання 1. Розробіть програму «Бібліотека».Створіть
    //    структуру «Книга»(назва, автор, видавництво, жанр,
    //        рік видання, price).
    //    Створіть масив з 10 книг.Реалізуйте для нього такі
    //    можливості :
    //■ Редагувати книгу; (ChangeData)
    //    ■ Друк усіх книг; (Show);
    //■ Пошук книг за автором;
    //■ Пошук книги за назвою;
    //■ Пошук книги за видавництвом
    //    ■ Пошук книги за жанром
    //    ■ Add new book
    //    ■ Save to File
    //    ■ Load from file


    const int MAX_BOOKS = 10;
    Book library[MAX_BOOKS];
    int bookCount = 0;

    library[0] = { "1984", "George Orwell", "Secker & Warburg", "Dystopia", 1949, 12.99 };
    library[1] = { "To Kill a Mockingbird", "Harper Lee", "J.B. Lippincott & Co.", "Drama", 1960, 15.50 };
    bookCount = 2;

    int choice;
    do
    {
        cout << "\nLibrary menu:\n";
        cout << "1. Show all books\n";
        cout << "2. Add new book\n";
        cout << "3. Edit book\n";
        cout << "4. Search by author\n";
        cout << "5. Search by title\n";
        cout << "6. Search by publisher\n";
        cout << "7. Search by genre\n";
        cout << "8. Save to file\n";
        cout << "9. Load from file\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore(); // очистка буфера після вводу числа

        switch (choice)
        {
        case 1:
            ShowAllBooks(library, bookCount);
            break;
        case 2:
            AddNewBook(library, bookCount, MAX_BOOKS);
            break;
        case 3:
        {
            cout << "Enter book number to edit (1-" << bookCount << "): ";
            int num;
            cin >> num;
            cin.ignore();
            if (num >= 1 && num <= bookCount)
            {
                ChangeData(library[num - 1]);
            }
            else
            {
                cout << "Invalid book number.\n";
            }
        }
        break;
        case 4:
        {
            cout << "Enter author to search: ";
            string val; getline(cin, val);
            SearchByField(library, bookCount, "author", val);
        }
        break;
        case 5:
        {
            cout << "Enter title to search: ";
            string val; getline(cin, val);
            SearchByField(library, bookCount, "title", val);
        }
        break;
        case 6:
        {
            cout << "Enter publisher to search: ";
            string val; getline(cin, val);
            SearchByField(library, bookCount, "publisher", val);
        }
        break;
        case 7:
        {
            cout << "Enter genre to search: ";
            string val; getline(cin, val);
            SearchByField(library, bookCount, "genre", val);
        }
        break;
        case 8:
            SaveToFile(library, bookCount, "library.txt");
            break;
        case 9:
            LoadFromFile(library, bookCount, MAX_BOOKS, "library.txt");
            break;
        case 0:
            cout << "Goodbye!\n";
            break;
        default:
            cout << "Invalid choice\n";
        }

    } while (choice != 0);





















}


