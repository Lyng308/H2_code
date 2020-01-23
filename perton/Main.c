/*********************************************************
     
	 Program:			StandardC
	 Date Created:		20170802
	 Date Last Edit:	20170802
	 Author:			/PEFA
	 Purpose:			Template for standard C
	 
	 The main source for Your program. 
	 2017 August /PEFA
**********************************************************/
#include<stdio.h>
#include<conio.h>
int main(){
	int e_num;
	float e_wt;
	printf("Enter the Element No. and Weight of a Proton\n");
	scanf("%d %f", &e_num, &e_wt);
	printf("The Element No.is: %d\n", e_num);		
	printf("The Weight of a Proton is: %f\n", e_wt);
	getch();
	return 0; /* Normal excution:		return 0
				 Abnormal execution:	return -something
				 /PEFA */

}