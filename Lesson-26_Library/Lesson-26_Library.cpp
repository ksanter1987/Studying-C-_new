#include "Book.h"
#include "Library.h"


Library TestLibrary(Library& lib)    // copy constructor
{
    Library temp = lib; 
    //some cod
    return lib;
}



int main()
{
   /* Book b;
    b.ShowInfo();*/
    
    Book book1("C++ for Begginers", "Stiven Prata", 2000, 1500, ScienceFiction);
   /* Book book2("Harry Potter", "J.K.Rowling", 1997, 800, Fantasy);
    Book book3("Sherlock Holmes", "Arthur Conan Doyle", 1887, 2000, Genre::Detective);
    Book book4("Java for kids", "Morgan Nick", 2015, 408, ScienceFiction);
    Book book5("Mowgli", "Pantera", 1893, 500, Genre::Fantasy);
    Book book6("Financier", "Dreiser Theodore", 1911, 377, Genre::ScienceFiction);*/

    //book6.ShowInfo();


    Library lib("Library Rivne");
    lib.AddBook(book1);
    lib.AddBook(Book("Harry Potter", "J.K.Rowling", 1997, 800, Fantasy));
    lib.AddBook(Book("Sherlock Holmes", "Arthur Conan Doyle", 1887, 2000, Genre::Detective));
    lib.AddBook(Book("Java for kids", "Morgan Nick", 2015, 408, ScienceFiction));
    lib.AddBook(Book("Mowgli", "Pantera", 1893, 500, Genre::Fantasy));
    lib.AddBook(Book("Financier", "Dreiser Theodore", 1911, 377, Genre::ScienceFiction));
    lib.ShowLibrary();

  /*  Library copy(lib);
    cout << "Copy library : " << endl;
    copy.ShowLibrary();


    TestLibrary(lib);

    Library l*/

    cout << "New library Copy : " << endl;
    Library newLib(lib);
    newLib.ShowLibrary();
    newLib = lib;

    cout << "New library operator = : " << endl;
    newLib.ShowLibrary();

    Library new2; //default c-tor
    new2 = newLib;

    int a = 1, b = 2, c = 3;
    a = b = c; // < ----------------
    cout << a << b << c << endl;

    new2 = newLib = lib;






















}


