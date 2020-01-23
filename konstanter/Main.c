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
int main() {
	const int height = 100;/*int constant*/
	const float number = 3.14;/*Real constant*/
	const char letter = 'A';/*char constant*/
	const char letter_sequence[10] = "ABC"; /*string constant*/
	const char backslash_char = '\\';/*special char cnst*/
	printf("value of height\t\t\t : %d \n", height);
	printf("value of number\t\t\t : %f \n", number);
	printf("value of letter\t\t\t : %c \n", letter);
	printf("value of letter_sequence\t : %s \n", letter_sequence);
	printf("value of backslash_char\t\t : %c \n", backslash_char);
	getch();
	return 0; /* Normal excution:return 0
	Abnormal execution:return -something
	/*PEFA */
}