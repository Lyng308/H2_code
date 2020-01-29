#include "Main.h"
void runner(void) {
	int  minTal, maxTal, antalGeat = 0, maxGeat, comtal, scorenr = 0;

	input(&minTal, &maxTal, &maxGeat);
	comtal = findtal(minTal, maxTal);
	printf("\n\nhvad for et tal gætter du på?: ");
	while (antalGeat < maxGeat) {
		int trueFalse = tester(comtal);

		if (trueFalse == 1) {
			antalGeat++;
			outgaet(true, &antalGeat);
		}
		if (trueFalse == 0) {
			antalGeat++;
			outhurra(true, maxGeat, antalGeat, comtal);
		}
		if (trueFalse == -1) {
			antalGeat++;
			outgaet(false, &antalGeat);
		}
	}
	score(antalGeat, maxGeat);
}