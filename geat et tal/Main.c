/*********************************************************

	 Program:			Gæt et tal
	 Date Created:		20200128
	 Date Last Edit:	20200129
	 Author:			/JOE & LYNG
	 Purpose:			en spil hvor man skal gætte det righte tal

**********************************************************/
#include "Main.h"
int main() {
	setlocale(LC_ALL, "da-DK");
	char igen, menuChoice;
	do {
		menu();
		menuChoice = toupper(getch());
		switch (menuChoice)
		{
		case 'S': spil(); break;
		case 'R': regler() ; break;
		case 'H': highscore() ; break;
		case 'A': about(); break;
		}
	} while (toupper(getch()) != 'L');
	
	return 0; 
}
/*********************************************************
Function:		menu
Purpose:		det som skal skrive i menu
**********************************************************/
void menu(void){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	system("cls");
	printf("                    ___  ___                 \n");
	printf("                    |  \\/  |                \n");
	printf("                    | .  . | ___ _ __  _   _ \n");
	printf("                    | |\\/| |/ _ \\ '_ \\| | | |\n");
	printf("                    | |  | |  __/ | | | |_| |\n");
	printf("                    \\_|  |_/\\___|_| |_|\\__,_|\n");
	printf("\n            ========================================");
	printf("\n            |                                      |");
	printf("\n            |  Tryk på S for at starte spillet     |");
	printf("\n            |  Tryk på R for at se regler          |");
	printf("\n            |  Tryk på H for at se Highscore       |");
	printf("\n            |  Tryk på A for at se About the game  |");
	printf("\n            |  Tryk på L for at luk programmet     |");
	printf("\n            |                                      |");
	printf("\n            ========================================");
}
/*********************************************************
Function:		file_Reader
Purpose:		til at loade en fil og skrive det som er i file i cmd
**********************************************************/
void file_Reader(FILE ** prt1, char* file) {
	char faber[10000];
	int i = 0;
	int bytes;
	FILE* ptr1 = fopen(file, "r");
	fseek(ptr1, 0, SEEK_SET);
	while (fread(faber + i, sizeof(char), 1, ptr1) != 0) {
		printf("%c", faber[i]);
		i++;
	}
	faber[i + 1] = '\0';
	fclose(ptr1);
}