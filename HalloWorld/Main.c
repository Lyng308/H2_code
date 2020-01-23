/*********************************************************
     
	 Program:			Standard
	 Date Created:		20200109	//YEAR/MM/DD
	 Date Last Edit:	20200109	//YEAR/MM/DD
	 Author:			/Lyng		Maker
	 Purpose:			Template for standard C
	 
	 The main source for Your program. 
	 2017 August /PEFA
**********************************************************/
#include "Main.h" //inkluder hovdeprogrammet 
#include <locale.h>	//inkluder loacle.h for at få "æøå"
//global variable == burget meget lidt
int main() {		//int main == hovdeprogrammet starter
	//{ == start på en kodeblock } == sluter på en kodeblock
	//lokal variable == bruget meget tit 
	setlocale(LC_ALL, "da-DK");		// 
	printf("hallo World!!!\n");
	printf("Navn:\t\tMathias Lyngoee.\n");
	printf("Fødlsedag:\t17 januar.\n");
	printf("Telefon:\t42345758.");

	return 0; /* Norma excution:		return 0
				 Abnormal execution:	return -something
				 /PEFA */

}