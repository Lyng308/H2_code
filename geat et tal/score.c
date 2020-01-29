/*********************************************************
Function:		Score
Purpose:		Denne funktion er til for at spiller kan skrive sig ind på en hi-score liste.
**********************************************************/
#include "Main.h" 
void score(int antalGeat, int maxGeat) {
	FILE* ptr = fopen("score.txt", "a");					//Her åbner vi filen "score.txt", eller vis den ikke er der laves der en ny fil.
	char navn[20];											//Max 20 bogstaver kan bruges til spillernavnet

	int playerPoints = (antalGeat * 1000) / maxGeat;		//Formlen der beregner hvor mange point en spiller får.

	printf("\n\nDit navn: ");
	scanf("%s", navn);
	fprintf(ptr, "\t\t\tName: %s \tPoints: %d\n\n", navn, playerPoints);
	fclose(ptr);
}
