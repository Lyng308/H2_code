#include "Main.h"
void outgaet(bool lavtHojt, int antalGaet) {
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