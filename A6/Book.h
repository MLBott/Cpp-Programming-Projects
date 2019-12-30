#include <cstring>
#define TITLE_LEN 81

//********************************************************************
//  Book.cpp
//
//  Represents a single book.
//*******************************************************************

class Book {

public:
	Book(const char *newTitle) {
		strcpy_s(title, TITLE_LEN, newTitle);
	}

	char *getBook() {
		return title;
	}

private:
	char title[TITLE_LEN];

};

