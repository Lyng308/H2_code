/*********************************************************
Function: printBook
Date Created: 20171219
Date Last Edit: 20171219
Author: /PEFA
Purpose: Print data from a book struct to screen
Arguments: Pointer to struct in library
Returns: void
**********************************************************/
#include "Main.h"
extern NumberOfBooks;

void printBook(struct Books *book) {
	system("CLS");
	//The -> is used when it's a pointer to a struct thats used
	printf("Book title : %s\n", book->title);
	printf("Book author : %s\n", book->author);
	printf("Book subject : %s\n", book->subject);
	printf("Book book_price : %f\n", book->book_price);
	printf("\nBook ID: %d", book->id);
	getch();
}


/*********************************************************
Function:			PrintAllbooks
Date Created:		20200123
Date Last Edit:		20200123
Author:				/LYNG
Purpose:			To view all the books
Arguments:			Void
Returns:			Void
**********************************************************/
void printAllBooks(struct Books *book) {
	system("cls");
	printf("ID\t\t\t Book title\n");
	for (int i = 0; i < NumberOfBooks; i++)
	{
		printf("%d\t\t\t %s", &book[i].id, &book[i].title);
	}
	getch();
}