/*********************************************************
Function:		outGaet
Purpose:		her mondtager vi 3 inputs (lavt/højt og antal gæt) disse bruges til at fortælle brugeren,
				Om de tal de har indtastet er for lavt eller for højt i forhold til vindertallet.
**********************************************************/
#include "Main.h"
void outgaet(bool lavtHojt, int antalGaet) {						//boolen indeholder den værdi vi skal bruge for at give brugeren den korrekte besked.
	if (lavtHojt == true) {
		system("cls");
		printf("tallet du gætte på var for Højt		prøv igen");
		printf("\nhvad for et tal gætter du på?: ");
	}
	if (lavtHojt == false) {
		system("cls");
		printf("tallet du gætte på var for Lavt		prøv igen");
		printf("\nhvad for et tal gætter du på?: ");
	}
}