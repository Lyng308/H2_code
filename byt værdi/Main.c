/*********************************************************
     
	 Program:			swap
	 Date Created:		20170802
	 Date Last Edit:	20170802
	 Author:			/PEFA
	 Purpose:			2 varibler bytter v�rdi
	 
	 The main source for Your program. 
	 2017 August /PEFA
**********************************************************/
#include "Main.h"
void swap(int *x, int *y);// difiner prototype
int main() {
	int tal1, tal2; //difiner to varibaler
	printf("skriv de to tal der skal bytte rund p�\ntal 1 : "); //skriver i cmd
	scanf("%d", &tal1); //tager bruger input
	printf("\ntal 2 : ");//skriver i cmd
	scanf("%d", &tal2); //tager bruger input
	swap(&tal1, &tal2); //kalder prototypen
	getch(); //venter p� et tryk
	printf("swap"); //skriver i cmd
	printf("Tal1 : %d\nTal2 : %d",tal1, tal2);//skriver i cmd
	getch(); //vente rp� en tryk
	return 0;/* Normal excution:		return 0
				 Abnormal execution:	return -something
				 /PEFA */

}
void swap(int *x, int *y) { //prototype
	int temp; //dininer en varibale
	temp = *x; //temp for samme v�rdi som x
	*x = *y;	//x for samme v�rdi som y
	*y = temp; //y for samme v�rdi som temp
}