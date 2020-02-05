/*********************************************************

	 Program:			StandardC
	 Date Created:		20180103
	 Date Last Edit:	20180103
	 Author:			/PEFA
	 Purpose:			Template for G�T ET TAL Exercise 12

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
		}
	} while (toupper(getch()) != 'L');
	
	return 0; 
}

void menu(void){
	system("cls");
	printf("                    ___  ___                 \n");
	printf("                    |  \\/  |                \n");
	printf("                    | .  . | ___ _ __  _   _ \n");
	printf("                    | |\\/| |/ _ \\ '_ \\| | | |\n");
	printf("                    | |  | |  __/ | | | |_| |\n");
	printf("                    \\_|  |_/\\___|_| |_|\\__,_|\n");
	printf("\n              =====================================");
	printf("\n              |                                   |");
	printf("\n              |  Tryk på S for at starte spillet  |");
	printf("\n              |  Tryk på R for at se regler       |");
	printf("\n              |  Tryk på H for at se Highscore    |");
	printf("\n              |  Tryk på L for at Luk programmet  |");
	printf("\n              |                                   |");
	printf("\n              =====================================");
}
