/*********************************************************
     
	 Program:			StandardC
	 Date Created:		20170802
	 Date Last Edit:	20170802
	 Author:			/PEFA
	 Purpose:			Template for standard C
	 
	 The main source for Your program. 
	 2017 August /PEFA
**********************************************************/
#include "Main.h"
#include <stdlib.h>

//Prototypes for the functions/procedures
//Funktionen skal bruges til indtastning af værdierne
void inputValues(int *myArray, int numberOfIntsInArray);
//Funktionen skal foretage selve sorteringen
void sortValues(int *myArray, int numberOfIntsInArray);
//Funktionen viser alle værdier i arrayet på en linje (skal bruges 2 gange)
void printValues(int *myArray, int numberOfIntsInArray);
//Funktionen ombytter indholdet af to variablevoid swap(int *x, int *y);

 int main() {
	int numberOfIntsInArray = 0;	printf("Velkommen til tal sorter\n");	printf("Hvor mange tal skal sorters? \t:");	scanf("%d", &numberOfIntsInArray);	int *myArray = (int *)malloc(numberOfIntsInArray * sizeof(int));
	inputValues(myArray, numberOfIntsInArray);
	printf("\n\nsorterer talene\n\n");
	sortValues(myArray, numberOfIntsInArray);
	printValues(myArray, numberOfIntsInArray);
	getch();
	
	return(0);
}
 void inputValues(int *myArray, int numberOfIntsInArray) {
	 for (int i = 0; i < numberOfIntsInArray; i++) {
		 printf("%d\t", (i + 1));
		 scanf("%d", myArray + i);
	 }
 }
 void sortValues(int *myArray, int numberOfIntsInArray) {
	// printf("Vælge sortering metode\n");  //slukker for at man kunne vælge fordi der var en fejl den kumnne ikke sorreter 
	// printf("1 = Low to high\n2 = High to low\n9 if you are peter\n");
	// int Q;
	// Q = getch();
	// if (Q == 1) {
		 for (int i = 0; i < numberOfIntsInArray; i++) {
			 for (int i = 0; i < numberOfIntsInArray - 1; i++) {
				 if (myArray[i] > myArray[i + 1]) {
					 swap(myArray + i, myArray + i + 1);
				 }
			 }
		 }
	// }
/*	 if (Q == 2) {
		 for (int i = 0; i < numberOfIntsInArray; i++) {
			 for (int m = 0; i < m; m++) {
				 if (myArray[i] < myArray[m]) {
					 swap(myArray + i, myArray + m);
				 }
			 }
		 }
	 }
	 if (Q == 9) {
		 peter(1);
	 }*/
 }

 void printValues(int *myArray, int numberOfIntsInArray) {
	 for (int i = 0; i < numberOfIntsInArray; i++)
		 printf("%d\t|\t%d\n", i+1, myArray[i]);
 }
 void swap(int *x, int *y) { //prototype
	int temp; //dininer en varibale
	temp = *x; //temp for samme værdi som x
	*x = *y;	//x for samme værdi som y
	*y = temp; //y for samme værdi som temp
}

