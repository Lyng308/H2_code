﻿/*********************************************************

	 Program:			StandardC
	 Date Created:		20180103
	 Date Last Edit:	20180103
	 Author:			/PEFA
	 Purpose:			Template for G�T ET TAL Exercise 12

**********************************************************/
#include "Main.h"
//Prototypes for the functions the project MUST contain




int main() {

	char igen;
	int  minTal, maxTal, maxGeat;

	do
	{
		//Tell the user what to do
		

		//Input the numbers
		input(&minTal, &maxTal, &maxGeat);
		printf("\n\nhvad for et tal gætter du på?: ");
		tester(findtal(&minTal, &maxTal));
		//Tell the user which numbers have been input
		
		printf("\n %d = findtal(%3d, %3d) ", findtal(minTal, maxTal), minTal, maxTal);

		//Request user to stop or retry
		printf("\n\nVil du pr\233ve igen? Hvis nej tast S");
	} while (toupper(getch()) != 'S');

	return 0; /* Normal excution:		return 0
				 Abnormal execution:	return -something
				 /PEFA */

}