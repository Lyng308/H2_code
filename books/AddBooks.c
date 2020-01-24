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
	printf("Indtast Bogtitle: ");
	fgets(book[NumberOfBooks].title, MAXTITLE, stdin);

	printf("\nIndtast forfatter: ");
	fgets(book[NumberOfBooks].author, MAXAUTHOR, stdin);

	printf("\nIndtast Emne: ");
	fgets(book[NumberOfBooks].subject, MAXSUBJECT, stdin);

	printf("\nIndtast bogens pris i Dkk:");
	scanf("%f", &book[NumberOfBooks].book_price);

	book[NumberOfBooks].id = NumberOfBooks;

	system("cls||clear");

	printf("\nfærdig med at tilføje bogen\nsådan ser det ud :) ");
	printBook(&book[NumberOfBooks]);
	while (getchar() != '\n'); // rydder op efter scanf for eller lægger der en enter klar til næste gang man skal skrive nået

	NumberOfBooks++;
	printf("\nTryk en taste");
	getch();
}