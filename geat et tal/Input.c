#include "Main.h"
void input(int * minTal, int * maxTal, int * maxGaet) {
	int i = 0;
	system("cls");
	while (i == 0) {
		printf("Mininum Tal: ");
		scanf("%d", minTal);
		
		printf("\nMax Tal: ");
		scanf("%d", maxTal);
				
		if (*minTal > *maxTal) {
					system("cls");
					printf("pr�v igen din min tal var h�jer end max tal");
				}
				else i++;
	}
	
	printf("\nMax g�t: ");
	scanf("%d", maxGaet);
}