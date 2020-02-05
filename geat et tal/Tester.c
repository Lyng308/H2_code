/*********************************************************
Function:		Tester
Purpose:		Her tjekker vi om funktionen "gaet" er størrer, mindre eller ligmed funktionen "compuTal".
				Der efter sender vi en 0/1/-1 tilbage til main programmet.
**********************************************************/
#include "Main.h"
int tester(compuTal) {
	int gaet1 = 0;
	scanf("%d", &gaet1);
	if (compuTal == gaet1)	//hvis gaet er lige med compuTal, så skal return sende et 0
		return(0);
	if (compuTal > gaet1)	//hvis gaet er mindre end compuTal, så skal return sende et -1
		return(-1);
	if (compuTal < gaet1)	//hvis gaet er størrer end compuTal, så skal return sende et 1
		return(1);
}