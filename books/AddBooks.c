/*********************************************************
Function:			AddBook
Date Created:		20200122
Date Last Edit:		20200122
Author:				/LYNG
Purpose:			To add a book
Arguments:			Void
Returns:			Void
**********************************************************/
#include "Main.h"
extern NumberOfBooks;
void AddBook(struct Books *book) {
	system("cls||clear");
	printf("================== Menu: addbook ==================\n");
	printf("\tInput the title of the book: ");
	fgets(book[NumberOfBooks].title, MAXTITLE, stdin);
	printf("\tInput the name of the author: ");
	fgets(book[NumberOfBooks].author, MAXAUTHOR, stdin);
	printf("\tInput the subject: ");
	fgets(book[NumberOfBooks].subject, MAXSUBJECT, stdin);
	printf("\tInput the price of the book: ");
	scanf("%f", &book[NumberOfBooks].book_price);

	book[NumberOfBooks].id = NumberOfBooks;

	printf("\n\tYou have input the following details: \n");

	printBook(&book[NumberOfBooks]);
	//while (getchar() != '\n'); // rydder op efter scanf for eller lægger der en enter klar til næste gang man skal skrive nået

	NumberOfBooks++;
	printf("\nTryk en taste");
	getch();
}