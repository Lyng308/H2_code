/*********************************************************
     
	 Program:			StandardC
	 Date Created:		20200109
	 Date Last Edit:	20200109
	 Author:			/Lyng
	 Purpose:			Template for standard C
	 
**********************************************************/
#include "Main.h"
int main() {
	int h = 7, b = 5;	//difiner varibalen jeg Højten (h) og breden (b)
	int areal = (h*b);	//her regner jeg arealet og difiner det som en varibale
		printf("\t%d\n",b);	//her skrevet "varibalen b" over rektangel
		printf("*****************\n*\t\t*\n*\t\t* %d\n*\t\t*\n*****************\n",h); // her laver jeg en kasse i cmd og skriver "varibalen h" ud for side
		printf("Arealet af et rektangel med siderne %d cm og %d cm = %d kvadratcentimeter\n",h, b, areal); //her skriver jeg "variblen arealet" ud på cmd
	int omkreds = (2*(h+b));	//her ud regner jeg omkredesen og definer den som en varibale
		printf("Omkreds af et rektangel med siderne %d cm og %d cm = %d cm",h, b, omkreds); //her skriver jeg "varibalen omkreds" ud på cmd
	getch();	//her venter den den på at der blev trykket på en tast 
	

	return 0; /* Normal excution:		return 0
				 Abnormal execution:	return -something
				 /PEFA */

}