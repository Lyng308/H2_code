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
void swap(int *x, int *y);
int main() {
	int numberOfIntsInArray = 0;
	int *myArray = (int *)malloc(numberOfIntsInArray * sizeof(int));	printf("Velkommen til tal sorter");	printf("Hvor mange tal skal sorters?\tminium 10:");	scanf("%d", &numberOfIntsInArray);	for (int i = 0; i < numberOfIntsInArray; i++) {
		scanf("%d", myArray + i);
	}
	for (int i = 0; i < numberOfIntsInArray; i++) {
		if (myArray[i] < myArray[i + 1]) {
			swap(myArray[i], myArray[i + 1]);
		}
	}

	return 0;

	void swap(int *x, int *y) { //prototype
		int temp; //dininer en varibale
		temp = *x; //temp for samme værdi som x
		*x = *y;	//x for samme værdi som y
		*y = temp; //y for samme værdi som temp
	}