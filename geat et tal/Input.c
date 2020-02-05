/*********************************************************
Function:		Findtal
Purpose:		Her får vi brugeren til og indtaste et lavt tal og et højt tal.
				Hvorefter brugeren så skal indtaste hvor mange gæt de skal bruge,
				for at gætte vindertallet. (vindertallet bestemmes af computeren og er tilfældigt)
**********************************************************/
#include "Main.h"
void input(int * minTal, int * maxTal, int * maxGaet) {
	int i = 0;
	system("cls");
	while (i == 0) {
		printf("Skriv venligst det mindste tal: ");
		scanf("%d", minTal);

		printf("\nSkriv venligst det højste tal: ");
		scanf("%d", maxTal);

		if (*minTal > *maxTal) {
			system("cls");
			printf("Fejl: prøv igen - det mindste tal er højere end det højeste tal");
		}
		else i++;
	}

	printf("\nHvor mange gæt vil du have til og finde vindertallet?: ");
	scanf("%d", maxGaet);
}