#include "Main.h"
int main() {
	setlocale(LC_ALL, "da-DK");
	//declare our "library"
	struct Books library[MAXBOOKS];
	char menuChoice;
	/* book 1 specification */
	/* Make a function to add these data*/
	strcpy(library[0].title, "C Programming");
	strcpy(library[0].author, "Nuha Ali");
	strcpy(library[0].subject, "C Programming Tutorial");
	library[0].book_price = 199.75;
	library[0].id = 0;
	do
	{
		menu();
		menuChoice = toupper(getch());
		switch (menuChoice)
		{
		case 'T': AddBook(&library[NumberOfBooks]); break;
		case 'S': /*DeleteBook()*/; break;
		case 'A': /*printAllBooks()*/; break;
		case 'P': printBook(&library[0]);
		}
	} while (menuChoice != 'E');
	return 0;
}
/*********************************************************
Function: printBook
Date Created: 20171219
Date Last Edit: 20171219
Author: /PEFA
Purpose: Print data from a book struct to screen
Arguments: Pointer to struct in library
Returns: void
**********************************************************/
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
Function:			AddBook
Date Created:		20200122
Date Last Edit:		20200122
Author:				/LYNG
Purpose:			To add a book
Arguments:			Void
Returns:			Void
**********************************************************/
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
	
	NumberOfBooks++;
	printf("\nTyrk en taste");
	getch();
}






/*********************************************************
Function: menu
Date Created: 20171219
Date Last Edit: 20171219
Author: /PEFA
Purpose: Write a menu to screen
Arguments: void
Returns: void
**********************************************************/
void menu(void)
{
	system("CLS");
	// 1 2 3 4 5 6 7 8
	// 012345678901234567890123456789012345678901234567890123456789012345678901234567890
	printf("\n Et demo program");
	printf("\n ");
	printf("\n Tilfoej bog tast T ");
	printf("\n Print bog tast P ");
	printf("\n Slet bog tast S ");
	printf("\n Udskrive Alle tast A ");
	printf("\n ");
	printf("\n Stoppe programmet tast E ");
}
