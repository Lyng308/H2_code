/*********************************************************
Function:			DeleteBookMenu
Date Created:		20200123
Date Last Edit:		20200123
Author:				/LYNG
Purpose:			to delete Books from array
Arguments:			Void
Returns:			Void
**********************************************************/
#include "Main.h"
extern NumberOfBooks;

void DeleteBookmenu(struct Books *book) {
	system("cls");
	printf("ID\t\t\t Book title\n");
	for (int i = 0; i < NumberOfBooks; i++)
	{
		printf("%d\t\t\t %s", book[i].id, book[i].title);
	}
	char deletemenuChoice;
	printf("Øsnker du at slette en bog Tryk S\n\n");
	printf("Home Tryk H");
	deletemenuChoice = toupper(getch());
	switch (deletemenuChoice)
		do
		{
	case 'S': DeleteBook(&book[NumberOfBooks]); break;
		} while (deletemenuChoice != 'H');
}

/*********************************************************
Function:			FunctionName
Date Created:		YYYYMMDD
Date Last Edit:		YYYYMMDD
Author:				/PEFA
Purpose:			PurposeOfTheFunction
Arguments:			Type Arg
Returns:			Type_ReturnValue
**********************************************************/
void DeleteBook(struct Books *book) {
	printf("\n\nskriv ID på den bog som skal slettes\tID Nummer: ");
	int delbook;
	scanf("%d", &delbook);
	getch();
	for (delbook < NumberOfBooks - 1; delbook++;)
	{
		book[delbook + 1] = book[delbook];
	}
	NumberOfBooks -= 1;
	getch();
}