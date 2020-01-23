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
	int max = 0, min = 9999,size,;
	int tabel[10] = { 00, 55, 98, 33, 88, 11, 66, 77, 44, 22 };
	for (int i = 0; i < 10; i++) {
		if (tabel[i] > max) {
			max = tabel[i];
		}
		if (tabel[i] < min) {
			min = tabel[i];
		}
	}
	printf("%d\t%.2d", max, min);
	getch();

	return 0; /* Normal excution:		return 0
				 Abnormal execution:	return -something
				 /PEFA */

}