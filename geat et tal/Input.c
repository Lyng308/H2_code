#include "Main.h"
void input(int * minTal, int * maxTal, int * maxGaet) {
	int i = 0;
	while (i == 0) {
		system("cls");
		printf("Mininum Tal: ");
		scanf("%d", minTal);
		printf("\nMax Tal: ");
		scanf("%d", maxTal);

		if(minTal < maxTal)
			printf("pr�v igen din min tal var h�jer end max tal");
		else i++;
	}
	printf("\nMax g�t: ");
	scanf("%d", maxGaet);
}