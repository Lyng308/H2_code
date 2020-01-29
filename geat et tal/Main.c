/*********************************************************

	 Program:			StandardC
	 Date Created:		20180103
	 Date Last Edit:	20180103
	 Author:			/PEFA
	 Purpose:			Template for G�T ET TAL Exercise 12

**********************************************************/
#include "Main.h"
int main() {

	char igen;
	int  minTal, maxTal, antalGeat = 0, maxGeat, comtal;

	do
	{
		input(&minTal, &maxTal, &maxGeat);
		comtal = findtal(minTal, maxTal);
		printf("\n\nhvad for et tal gætter du på?: ");
		while (antalGeat < maxGeat){
			int trueFalse = tester(comtal);
			
			if(trueFalse == 1) {
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
		
		printf("\n\nVil du pr\233ve igen? Hvis nej tast S");
	} while (toupper(getch()) != 'S');

	return 0; /* Normal excution:		return 0
			  Abnormal execution:	return -something
			  /PEFA */

}




