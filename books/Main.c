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
		case 'S': DeleteBookmenu(&library); break;
		case 'A': printAllBooks(&library); break;
		case 'P': printBook(&library[0]);
		}
	} while (menuChoice != 'E');
	return 0;
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
