#include "Main.h"

void about(void) {
	
	
	do 
	{
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		system("cls");
		
		printf("  ___  _                 _   \n");
		printf(" / _ \\| |               | |  \n");
		printf("/ /_\\ \\ |__   ___  _   _| |_ \n");
		printf("|  _  | '_ \\ / _ \\| | | | __|\n");
		printf("| | | | |_) | (_) | |_| | |_ \n");
		printf("\\_| |_/_.__/ \\___/ \\__,_|\\__|\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), random(0, 256));
		faber();
	

	
	} while (toupper(getch()) != 'S');
	{

	}
}	

void faber(void) {
	char faber[10000];
	int i = 0;
	int bytes;
	FILE* ptr1 = fopen("Faber_we_love_you.txt", "r");
	fseek(ptr1, 0, SEEK_SET);
	while (fread(faber + i, sizeof(char), 1, ptr1) != 0) {
		printf("%c", faber[i]);
		i++;
	}
	faber[i + 1] = '\0';

}

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
