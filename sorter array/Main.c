/*********************************************************

	 Program:			StandardC
	 Date Created:		20200117
	 Date Last Edit:	20200119
	 Author:			Jørgen & Mathias
	 Purpose:			Use pointeres

	 This program uses pointers, and is made to show how pointers can be used in C.
**********************************************************/
#include "Main.h"
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

void inputValues(int *myArray, int numberOfIntsInArray);
void sortValues(int *myArray, int numberOfIntsInArray);
void sortvalues2(int *myArray, int numberOfIntsInArray);
void printValues(int *myArray, int numberOfIntsInArray);	
void swap(int *x, int *y);

int main() {
	int numberOfIntsInArray = 0;											/* The array is set to zero, later the user will change this */
	printf("Welcome to 'How to use Pointeres in C programming\n");
	printf("Press any key to get the instructions on what this program does.\n");
	getch();																/* This section below this, informs the user about the program */
	printf("\n=====================================================================================================================\n");
	printf("| This program will let you (the user) pick a number, and then create an array with that size \t\t\t    |\n");
	printf("| Then you will be asked to input different values, according to the number that you picked\t\t\t    |\n");
	printf("| so to sum it up, 1st number is the amount of elements you want to creath.\t\t\t\t\t    |\n");
	printf("| (1 to 100+, Note: that the higher the number you pick, the longer it takes to input the values in the 2nd choice) |\n");
	printf("| the 2nd choice is to input the values you want to be in each array element\t\t\t\t\t    |\n");
	printf("=====================================================================================================================\n");
	printf("\nPress any key to begin\n");
	getch();
	system("cls");															/* This clears the screen of the above messages */
	printf("=======================================================\n");
	printf("| Note: you can use both postive and negative numbers |\n");
	printf("| how large do you want the array to be ? \t      |\n");
	printf("=======================================================\n");
	printf("Please input the number now:");
	scanf(" %d", &numberOfIntsInArray);										/* User inputs a value that will change the size of the array */
	int *myArray = (int *)malloc(numberOfIntsInArray * sizeof(int));
	inputValues(myArray, numberOfIntsInArray);
	printf("\n\nYou have input the following values in this order:\n\n");
	printValues(myArray, numberOfIntsInArray);
	printf("Press 1 to start sorting the values (lowest to highest)\n");
	printf("Press 2 to start sorting the values (highest to lowest)\n");
	int Q;
	scanf("%d",&Q);
		if (Q == 1) {
			sortValues(myArray, numberOfIntsInArray);
		}
		if (Q == 2) {
		sortvalues2(myArray, numberOfIntsInArray);
		}
	printValues(myArray, numberOfIntsInArray);
	printf("The program is done, press any key to close it");
	getch();
	return(0);
}
void inputValues(int *myArray, int numberOfIntsInArray) {					/* Function that allows for input into the array */
	for (int i = 0; i < numberOfIntsInArray; i++) {
		printf("input the value you want in block:");
		printf("%d\t", (i + 1));
		scanf("%d", myArray + i);
	}
}
void sortValues(int *myArray, int numberOfIntsInArray) {					/* Function that sorts the values in the array (this is set from lowest to highest digits */
	for (int i = 0; i < numberOfIntsInArray; i++) {
		for (int i = 0; i < numberOfIntsInArray - 1; i++) {
			if (myArray[i] > myArray[i + 1]) {
				swap(myArray + i, myArray + i + 1);
			}		
		}
	}
}

void sortvalues2(int *myArray, int numberOfIntsInArray) {
	for (int i = 0; i < numberOfIntsInArray; i++) {
		for (int i = 0; i < numberOfIntsInArray - 1; i++) {
			if (myArray[i] < myArray[i + 1]) {
				swap(myArray + i, myArray + i + 1);
			}
		}
	}
}

void printValues(int *myArray, int numberOfIntsInArray) {					/* Function that prints the values of the array */
	for (int i = 0; i < numberOfIntsInArray; i++)
		printf("Slot%d:\tcontains\t%d\n", i + 1, myArray[i]);
}
void swap(int *x, int *y) {													/* Here we do the swapping of the values in the array */
	int temp; 
	temp = *x; 
	*x = *y;	
	*y = temp; 
}

