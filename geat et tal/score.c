#include "Main.h"
void score(int antalGeat, int maxGeat) {
	FILE* ptr = fopen("score.txt", "a");
	char navn[20];

	int playerPoints = (antalGeat * 1000) / maxGeat;

	printf("\n\nDit navn: ");
	scanf("%s", navn);
	fprintf(ptr, "Name: %s \tPoints: %d\n\n", navn, playerPoints);
	fclose(ptr);
}
