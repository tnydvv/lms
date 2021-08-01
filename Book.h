
#ifndef BOOK_H
#define BOOK_H

#include "Author.h"
#include "Section.h"

#include <string>

using namespace std;

class Book
{
private:
	string title;
	// Author author;
	string author;
	bool isAvailable;// = true;
	string dept;

public:
	Book();
	//Book(string, string);
	// Book(string, Author);
	//Book(string, string, string);
	Book(string, string, string, bool);
	//~Book();

};
#endif
