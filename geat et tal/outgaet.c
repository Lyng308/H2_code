/*********************************************************
Function:		outGaet
Purpose:		her mondtager vi 3 inputs (lavt/h�jt og antal g�t) disse bruges til at fort�lle brugeren,
				Om de tal de har indtastet er for lavt eller for h�jt i forhold til vindertallet.
**********************************************************/
#include "Main.h"
void outgaet(bool lavtHojt, int antalGaet) {						//boolen indeholder den v�rdi vi skal bruge for at give brugeren den korrekte besked.
	if (lavtHojt == true) {
		system("cls");
		printf("tallet du g�tte p� var for H�jt		pr�v igen");
		printf("\nhvad for et tal g�tter du p�?: ");
	}
	if (lavtHojt == false) {
		system("cls");
		printf("tallet du g�tte p� var for Lavt		pr�v igen");
		printf("\nhvad for et tal g�tter du p�?: ");
	}
}