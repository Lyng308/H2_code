/*********************************************************
     
	 Program:			factkaltal
	 Date Created:		20200115
	 Date Last Edit:	20200115
	 Author:			/Lyng
	 Purpose:			udregner til factkaltal
	 
	 The main source for Your program. 
	 2017 August /PEFA
**********************************************************/
#include "Main.h"
double fact(int num1);//difiner en prototype
int main() {
	long int num; //difiner en varibal
	printf("skrive et nummer:\t"); //skriver i cmd
	scanf_s("%d", &num); //tager brugers input
	
	
	if (num <= 170) { //vis num er minder eller lige med 170 k�re den dette
		printf("det fakultet tal er %.0f\n", fact(num));//skriver i cmd
	}
	else { // vis num er h�jer ned 170 k�re den dette
		for (int i = 1; i <= 404; i++) { // laver en lykke
			printf("\tINF"); //skriver i cmd
		}
		printf("\nFaber er den beste"); //estereeg h�ber du s� den :)
	}
	 
	getch();
	return 0; /* Normal excution:		return 0
				 Abnormal execution:	return -something
				 /PEFA */

}
double fact(int num1) { //prototypen
	double fact = 1; //laver en varibal
	for (long int i = 1; i <= num1; i++) //laver en lykke
		fact = fact * i; //en udregning
	return(fact); //retunere fact
}