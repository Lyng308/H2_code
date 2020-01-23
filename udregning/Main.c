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
#include <stdio.h>
int main()
{
	int rownm, nrow, colnm;
	rownm = 1;
	colnm = 1;
	printf("Input number of rows for the table : ");
	scanf("%d", &nrow);
	do
	{
		colnm = 1;
		do
		{
			printf("%d\t", rownm*colnm);
			colnm++;
		} while (colnm <= nrow);
		rownm++;
		printf("\n");
	} while (rownm <= nrow);
	getch();
	return 0;


