#pragma once
#include "Book.h"
class Library
{
	string name;
	Book* books;
	int countBook;
public:
	//default constructor
	//copy constructor
	Library() :name("no name"), books(nullptr), countBook(0) {}
	Library(string name) :name(name), books(nullptr), countBook(0) {}
	void AddBook(Book b);
	void ShowLibrary()const;
	Library(const Library& other);
	Library(Library&& other);
	Library& operator =(const Library& other);
	~Library()
	{
		if (books != nullptr)
			delete[]books;
	}
};

