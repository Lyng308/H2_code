/*********************************************************
Function:		about
Purpose:		Her f�r man informationer omkring personerne bag dette fantastiske program.
				Og den guddomlige l�re som best�vet hans visdom, ud over de stakkelse H2 elever.
**********************************************************/
#include "Main.h"
void about(void) {
	char menuChoice;
	do {
		menu2();
		menuChoice = toupper(getch());
		switch (menuChoice) {
		case 'F': weLoveFaber();
		}
	} while (toupper(getch()) != 'L'); {
		}
}

/*********************************************************
Function:		menu2
Purpose:		hvad man se i menu i about
**********************************************************/
void menu2(void) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	system("cls");
	printf("                      ___  _                 _   \n");
	printf("                     / _ \\| |               | |  \n");
	printf("                    / /_\\ \\ |__   ___  _   _| |_ \n");
	printf("                    |  _  | '_ \\ / _ \\| | | | __|\n");
	printf("                    | | | | |_) | (_) | |_| | |_ \n");
	printf("                    \\_| |_/_.__/ \\___/ \\__,_|\\__|\n");
	printf("\n            ========================================");
	printf("\n            |                                      |");
	printf("\n            |     This game was made to @PEFA      |");
	printf("\n            |     Company: Mercantec               |");
	printf("\n            |                                      |");
	printf("\n            |     This game was made by:           |");
	printf("\n            |        @JOE and @LYNG                |");
	printf("\n            |                                      |");
	printf("\n            | Tryk p� L for at g� til Main Menu    |");
	printf("\n            | Tryk p� F to see why we love PEFA    |");
	printf("\n            |                                      |");
	printf("\n            ========================================");
}

/*********************************************************
Function:		weLoveFaber
Purpose:		denne function er en easteregg til faber
**********************************************************/
void weLoveFaber(void) {
	FILE* faber;
	do {
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), random(1, 15));
		file_Reader(&faber, FILENAME);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		printf("\n\nTyrk alle andre taster end L for at se magien");
		printf("\n\neller Tryk p� L for at komme tilbage");
	}
	while (toupper(getch()) != 'L');
	{
	}
}

/*********************************************************
Function:		random
Purpose:		laver et random tal til at skift fave med i cmd
**********************************************************/

int random(int minTal, int maxTal) {								//Vores minTal og maxTal
	static bool blnFirstTime = true;								//Static beholder v�rdien selv n�r funktionen er f�rdig.
	int randTal;													//Dette er variablen hvor computeren gemmer "vindertallet"
	if (blnFirstTime) {
		blnFirstTime = false;										//Her tjekker vi atfunktionen blnFirstTime kun k�res 1 gang. 
		srand((unsigned)time(NULL));								//starter Rand() funktionen
	}
	do
	{
		randTal = rand() % maxTal;									//RandTal f�r et tilf�ldigt v�rdi tal imellem minTal og maxTal, som s� bliver vindertallet.
	} while (randTal < minTal);
	return randTal;
}
