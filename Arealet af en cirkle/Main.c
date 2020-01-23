/*********************************************************
     
	 Program:			Regn en en cirkle
	 Date Created:		20200110
	 Date Last Edit:	20200110
	 Author:			/Lyng
	 Purpose:			udregn en arealet og omkreds af en cirkle
	 
**********************************************************/
#include "Main.h"
#include <locale.h>	//inkulder locale.h blibotek
int main() {
	setlocale(LC_ALL, "da-DK"); //setter s� jeg kan bruge de danske tegn
	float radius; //laver varibalen float
	float pi = 3.14159; //laver varibalen pi
	float omkreds; //laver varibalen omkreds
	float areal; //laver varibalen areal

	printf("Havd er radiusen p� cirklen i cm?\n"); //sriver ud p� cmd 
	printf("Angiv radius:"); //skriver angiv raduis p� cmd
	scanf("%f", &radius); //tager brugernes indput

	omkreds = 2*pi*radius; //her regnes omkredens
	areal= pi*radius*radius; //her regnes arealet
	printf("\n\nOmkreds af en cirkel med radius %f cm = %f cm", radius, omkreds); //her skriv den hvad om kredesen ud p� cmd
	printf("\nFormelen: 2*pi*Radius:\t 2*%f*%f", pi, radius); //her skrives formelen ud p� cmd
	printf("\n\nArealet af en cirkel med radius %f cm = %f kvadratcentimeter", radius, areal); //her skriv den hvad om arealet ud p� cmd
	printf("\nFormelen: pi*Radius^2:\t %f*%f^2", pi, radius); //her skrives formelen ud p� cmd

		
		getch();
	return 0; /* Normal excution:		return 0
				 Abnormal execution:	return -something
				 /PEFA */

}