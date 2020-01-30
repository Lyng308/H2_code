/*********************************************************
Function:		about
Purpose:		Her får man informationer omkring personerne bag dette fantastiske program.
				Og den guddomlige lære som bestøvet hans visdom, ud over de stakkelse H2 elever.
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
	} while (toupper(getch()) != 'M'); {
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
	printf("\n            | Tryk på M for at gå til Main Menu    |");
	printf("\n            | Tryk på F to see why we love PEFA    |");
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
		printf("\n\nTyrk alle andre taster end M for at se magien");
		printf("\n\neller Tryk på M for at komme tilbage");
	}
	while (toupper(getch()) != 'M');
	{
	}
}

/*********************************************************
Function:		random
Purpose:		laver et random tal til at skift fave med i cmd
**********************************************************/

int random(int minTal, int maxTal) {								//Vores minTal og maxTal
	static bool blnFirstTime = true;								//Static beholder værdien selv når funktionen er færdig.
	int randTal;													//Dette er variablen hvor computeren gemmer "vindertallet"
	if (blnFirstTime) {
		blnFirstTime = false;										//Her tjekker vi atfunktionen blnFirstTime kun køres 1 gang. 
		srand((unsigned)time(NULL));								//starter Rand() funktionen
	}
	do
	{
		randTal = rand() % maxTal;									//RandTal får et tilfældigt værdi tal imellem minTal og maxTal, som så bliver vindertallet.
	} while (randTal < minTal);
	return randTal;
}
