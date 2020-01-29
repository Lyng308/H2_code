/*********************************************************
Function:		Findtal
Purpose:		Her laver vi en funktion som indeholder det "vindertal" som vi skal bruge til spillet.
				Dette tal bliver valgt imellen minTal og Maxtal, og funktionen Rand()
**********************************************************/
#include "Main.h"
#include <stdbool.h>

int findTal(int minTal, int maxTal)									//Vores minTal og maxTal
{
	static bool blnFirstTime = true;								//Static beholder v�rdien selv n�r funktionen er f�rdig.
	int randTal;													//Dette er variablen hvor computeren gemmer "vindertallet"

	if (blnFirstTime) {
		blnFirstTime = false;										//Her tjekker vi atfunktionen blnFirstTime kun k�res 1 gang. 
		srand((unsigned)time(NULL));								//starter Rand() funktionen
	}
	do
	{
		randTal = rand() % maxTal;									//RandTal f�r et tilf�ldigt v�rdi tal imellem minTal og maxTal, som s� bliver vindertallet.
	} while (randTal < minTal);
	return randTal;
}
