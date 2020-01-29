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
					printf("prøv igen din min tal var højer end max tal");
				}
				else i++;
	}
	
	printf("\nMax gæt: ");
	scanf("%d", maxGaet);
}