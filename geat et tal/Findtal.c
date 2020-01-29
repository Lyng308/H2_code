/*********************************************************
Function:		Findtal
Purpose:		Her laver vi en funktion som indeholder det "vindertal" som vi skal bruge til spillet.
				Dette tal bliver valgt imellen minTal og Maxtal, og funktionen Rand()
**********************************************************/
#include "Main.h"
#include <stdbool.h>

int findTal(int minTal, int maxTal)									//Vores minTal og maxTal
{
	static bool blnFirstTime = true;								//Static beholder værdien selv når funktionen er færdig.
	int randTal;													//Dette er variablen hvor computeren gemmer "vindertallet"

	if (blnFirstTime) {
		blnFirstTime = false;										//Her tjekker vi atfunktionen blnFirstTime kun køres 1 gang. 
		srand((unsigned)time(NULL));								//starter Rand() funktionen
	}
	do
	{
		randTal = rand() % maxTal;									//RandTal får et tilfældigt værdi tal imellem minTal og maxTal, som så bliver vindertallet.
	} while (randTal < minTal);
	return randTal;
}
