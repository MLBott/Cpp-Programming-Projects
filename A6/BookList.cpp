//********************************************************************
//  BookList.h
//
//  Represents a collection of books.
//*******************************************************************
#include "pch.h"
#include "BookList.h"

//----------------------------------------------------------------
//  Creates a new Book object and adds it to the end of
//  the linked list.
//----------------------------------------------------------------
void BookList::add(Book *newBook) {

	BookNode *node = new BookNode(newBook);
	BookNode *current;

	if (head == NULL)
		head = node;
	else {
		current = head;
		while (current->next != NULL)
			current = current->next;
		current->next = node;
	}
}

//----------------------------------------------------------------
//  Returns this list of books as a string.
//----------------------------------------------------------------
char *BookList::getBookList(char *list, size_t list_len) {

	list[0] = '\0';
	BookNode *current = head;

	while (current != NULL) {
		strcat_s(list, list_len, current->book->getBook());
		strcat_s(list, list_len, "\n");
		current = current->next;
	}

	return list;
}

