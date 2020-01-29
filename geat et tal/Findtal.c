#include "Main.h"
#include <stdbool.h>

int findtal(int minTal, int maxTal)
{
	static bool blnFirstTime = true;
	//Define varible to contain random selected number
	int randTal;

	if (blnFirstTime) {
		blnFirstTime = false; //'cause srand should only be calle once
		srand((unsigned)time(NULL)); // init Rand() function
	}
	do
	{
		randTal = rand() % maxTal;  // rand_tal get a random value between 0 and maxrand
	} while (randTal < minTal);
	return randTal;
}
