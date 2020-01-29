/*********************************************************
Function:		Input
Purpose:		Her f�r vi brugeren til og indtaste et lavt tal og et h�jt tal.
				Hvorefter brugeren s� skal indtaste hvor mange g�t de skal bruge,
				for at g�tte vindertallet. (vindertallet bestemmes af computeren og er tilf�ldigt)
**********************************************************/
#include "Main.h" 
void input(int * minTal, int * maxTal, int * maxGaet) {
	int i = 0;
	system("cls");
	while (i == 0) {
		printf("Skriv venligst det mindste tal: ");
		scanf("%d", minTal);

		printf("\nSkriv venligst det h�jste tal: ");
		scanf("%d", maxTal);

		if (*minTal > *maxTal) {
			system("cls");
			printf("Fejl: pr�v igen - det mindste tal er h�jere end det h�jeste tal");
		}
		else i++;
	}

	printf("\nHvor mange g�t vil du have til og finde vindertallet?: ");
	scanf("%d", maxGaet);
}