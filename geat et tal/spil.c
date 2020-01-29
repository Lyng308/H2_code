/*********************************************************
Function:		spil
Purpose:		Her får vi inputs fra andre funktioner og sender det vidre til de funktioner der skal bruge det.
**********************************************************/
#include "Main.h"
void spil(void) {
	int  minTal, maxTal, antalGeat = 0, maxGeat, comtal, scorenr = 0;

	input(&minTal, &maxTal, &maxGeat);
	comtal = findtal(minTal, maxTal);
	printf("\n\nhvad for et tal gætter du på?: ");
	while (antalGeat < maxGeat) {
		int trueFalse = tester(comtal);

		if (trueFalse == 1) {					//her sender vi inputs til funktionen outGaet
			antalGeat++;
			outgaet(true, &antalGeat);
		}
		if (trueFalse == 0) {					//her sender vi inputs til funktionen outhurra
			antalGeat++;
			outhurra(true, maxGeat, antalGeat, comtal);
		}
		if (trueFalse == -1) {					//her sender vi inputs til funktionen outgaet
			antalGeat++;
			outgaet(false, &antalGeat);
		}
	}
	score(antalGeat, maxGeat);
}