#pragma once
#include <iostream>
using namespace std;
enum Genre {
	None,
	History,
	Roman,
	Novel,
	Story,
	FairyTale,
	Fantasy,
	Comedy,
	Programming,
	Political,
	ScienceFiction,
	Detective
};
class Book
{
private:
	string title;
	string author;
	int year;
	int pages;
	Genre genre;
public:
	Book(); //prototype
	Book(string t, string a, int y, int p, Genre g):title(t), author(a), year(y), pages(p), genre(g) {}
	void ShowInfo()const;
};

