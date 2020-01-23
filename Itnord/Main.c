/*********************************************************

	 Program:			udregning
	 Date Created:		20200110
	 Date Last Edit:	20200113
	 Author:			/Lyng
	 Purpose:			udregning af areal og omkreds i en rektangel og cirkle

**********************************************************/
#include "Main.h"

float cr, rh, rb, pi = 3.14159; //difiner variabler i kode 

int main() {
	setlocale(LC_ALL, "da-DK"); //s�tter det til det dansk bogstav bliblok 

	//rektangel
	printf("find arealet og omkredsen af en rektangel\n\n"); //skriver i cmd
	printf("H�jten p� rektangel i cm: "); //skriver i cmd
	scanf_s("%f", &rh); // tager bruger input fra cmd
	printf("\nbredden p� p� rektangel: "); //skriver i cmd
	scanf_s("%f", &rb);// tager bruger input fra cmd
	printf("\narealet p� rektangel med en h�jte p� %.2f og en bredde p� %.2f er %.2f kvadratcentimeter\n", rh, rb, rektangel_areal(rh, rb));// skriver i cmd
	printf("Formelen: H*B == %.2f*%.2f\n\n", rh, rb);// skriver i cmd
	printf("omkredsen p� rektangel med en h�jte p� %.2f og en bredde p� %.2f er %.2f cm\n", rh, rb, rektangel_omkreds(rh, rb));// skriver i cmd
	printf("Formelen: (H+B)*2 == (%.2f+%.2f)*2\n\n", rh, rb);// skriver i cmd
	
	//venter p� et tryk
	printf("Tryk p� en tast for at regn en cirkle");//skriver i cmd
	getch(); //venter p� en tryk fra keyboardet

	//clearscreen
	system("cls");//sletter alt i cmd

	//cirklen
	printf("find arealet og omkredsen af en cirkel\n\n");// skriver i cmd
	printf("Radiusen p� cirklen i cm:");// skriver i cmd
	scanf_s("%f", &cr);// tager bruger input fra cmd
	printf("\narealet p� cirklen med en radius p� %.2f er %.2f kvadratcentimeter\n", cr, cirkle_areal(cr));// skriver i cmd
	printf("Formelen: pi*radius*2 == %.2f*%.2f*2\n\n", pi, cr);// skriver i cmd
	printf("omkredsen p� cirkle med en radius %.2f cm har en omkreds p� er %.2f cm\n", cr, cirkle_omkreds(cr));// skriver i cmd
	printf("Formelen: 2*radiusen*pi == 2*%.2f*%.2f\n\n", cr, pi);// skriver i cmd
	getch(); //venter p� en tryk fra keyboardet

	return(0);
}
//rektangel
float rektangel_areal(float rh, float rb) { //prototypen
	float n; //difiner en varibal
	n = rh * rb; //udregning 
	return(n); //sender udregning return
}
float rektangel_omkreds(float rh, float rb) {
	float n; //difiner en varibal
	n = (rh + rb) * 2; //udregning 
	return(n); //sender udregning return
}


//cirklen
float cirkle_areal(float cr) {
	float n; //difiner en varibal
	n = pi * cr * 2; //udregning 
	return(n);//sender udregning return
}
float cirkle_omkreds(float cr) {
	float n; //difiner en varibal
	n = 2 * cr * pi;//udregning 
	return(n);//sender udregning return
}