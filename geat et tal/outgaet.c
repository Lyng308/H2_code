/*********************************************************
Function:		OutGaet
Purpose:		Her mondtager vi 3 inputs (lavt/h�jt og antal g�t) disse bruges til at fort�lle brugeren,
				Om de tal de har indtastet er for lavt eller for h�jt i forhold til vindertallet.
**********************************************************/
#include "Main.h" 
void outGaet(bool lavtHojt, int antalGaet, int maxGaet) {						//boolen indeholder den v�rdi vi skal bruge for at give brugeren den korrekte besked.
	if (lavtHojt == true) {
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		printf("tallet du g�tte p� var for H�jt		pr�v igen");
		printf("\n har %d tilbage", (maxGaet - antalGaet));
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		printf("\nhvad for et tal g�tter du p�?: ");
	}
	if (lavtHojt == false) {
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		printf("tallet du g�tte p� var for Lavt		pr�v igen");
		printf("\n har %d tilbage", (maxGaet - antalGaet));
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		printf("\nhvad for et tal g�tter du p�?: ");
		
	}
}