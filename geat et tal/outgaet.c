/*********************************************************
Function:		OutGaet
Purpose:		Her mondtager vi 3 inputs (lavt/højt og antal gæt) disse bruges til at fortælle brugeren,
				Om de tal de har indtastet er for lavt eller for højt i forhold til vindertallet.
**********************************************************/
#include "Main.h" 
void outGaet(bool lavtHojt, int antalGaet, int maxGaet) {						//boolen indeholder den værdi vi skal bruge for at give brugeren den korrekte besked.
	if (lavtHojt == true) {
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		printf("tallet du gætte på var for Højt		prøv igen");
		printf("\n har %d tilbage", (maxGaet - antalGaet));
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		printf("\nhvad for et tal gætter du på?: ");
	}
	if (lavtHojt == false) {
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		printf("tallet du gætte på var for Lavt		prøv igen");
		printf("\n har %d tilbage", (maxGaet - antalGaet));
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		printf("\nhvad for et tal gætter du på?: ");
		
	}
}