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
#include <locale.h>
float rektangel_areal(float rh, float rb);
float n, rh, rb;
int main() {
	setlocale(LC_ALL, "da-Dk");
	printf("find arealet og omkredsen af en rektangel\n");
	printf("Højten på rektangel:");
	scanf_s("%f", &rh);
	printf("\bredden på på rektangel i cm: ");
	scanf_s("%f", &rb);

	printf("arealet på rektangel er %f kvadratcentimeter", rektangel_areal(rh, rb));
	getch();
	return(0);
}

float rektangel_areal(float rh, float rb) {
	float n;
	n = rh * rb;
	return(n);
}