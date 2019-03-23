// Lib.cpp : Defines the entry point for the console application.
//
#include "pch.h"
#include <iostream>
using namespace std;
#include "BookList.h"


int main(int argc, char* argv[]) {
	//----------------------------------------------------------------
	//  Creates a BookList object, adds several books to the list,
	//  then prints them.
	//----------------------------------------------------------------
	char list[LIST_LEN];
	BookList *books = new BookList();

	books->add(new Book("The Hitchhiker's Guide to the Galaxy"));
	books->add(new Book("Jonathan Livingston Seagull"));
	books->add(new Book("A Tale of Two Cities"));
	books->add(new Book("Java Software Solutions"));

	cout << books->getBookList(list, LIST_LEN) << endl;;
	return 0;
}


