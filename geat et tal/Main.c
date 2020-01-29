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
		case 'R': Regler() ; break;
		case 'H': highscore() ; break;
		
		}
		printf("\n\nVil du pr\233ve igen? Hvis nej tast L");
	} while (toupper(getch()) != 'L');
	
	return 0; 
}

void menu(void){}


