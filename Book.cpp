
#include "Author.cpp"
#include "Book.h"

#include <iostream>
#include <string>
#include <iomanip>

Book::Book()
{
	title = "";
	author = "";
	dept = "";
	isAvailable = true;
}

Book::Book(string t, string a, string s, bool i)
{
	title = t;
	//author = Author(a, title);
	// section = Section(s);
	author = a;
	dept = s;
	isAvailable = i;
}

bool Book::getBookProps() {
	if (isAvailable == true) {
		cout << setw(20) << title << "\t\t" << setw(15) << author << "\t\t";
		cout << setw(11) << "Available" << endl;
	}
	return isAvailable;
}

void Book::checkOut() {
	isAvailable = false;
}

string Book::getTitle() {
	return title;
}

string Book::getAuthor() {
	return author;
}

void Book::setAvailability() {
	isAvailable = !isAvailable;
}

Book::~Book()
{
}


