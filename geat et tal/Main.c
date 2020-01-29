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
	char igen;
	

	do{

	runner();

		printf("\n\nVil du pr\233ve igen? Hvis nej tast S");
	} while (toupper(getch()) != 'S');
	
	return 0; 
}




