#include "Book.h"

Book::Book()
{
	title = "no title";
	author = "no author";
	year = 0;
	pages = 0;
	genre = None;
}

void Book::ShowInfo() const
{
	cout << "Title : " << title << endl;
	cout << "Author : " << author << endl;
	cout << "Year : " << year << endl;
	cout << "Pages : " << pages << endl;
	cout << "Genre : ";
	switch (genre)
	{
	case None:cout << "None" << endl;break;
	case History:cout << "History" << endl;break;
	case Roman:cout << "Roman" << endl;break;
	case Novel:cout << "Novel" << endl;break;
	case Story:cout << "Story" << endl;break;
	case FairyTale:cout << "FairyTale" << endl;break;
	case Fantasy:cout << "Fantasy" << endl;break;
	case Comedy:cout << "Comedy" << endl;break;
	case Programming:cout << "Programming" << endl;break;
	case Political:cout << "Political" << endl;break;
	case ScienceFiction:cout << "ScienceFiction" << endl;break;
	case Detective:cout << "Detective" << endl;break;

	}
	cout << "==========================================================\n";
}
