#pragma once
#include <stdio.h>
#include <locale.h>
#include <conio.h>		//getch()
#include <time.h>		//Time function for random
#include <stdbool.h>	//Boolean definitions
#include <Windows.h>					  //see findtal.c
#include <synchapi.h>

void menu(void);
void spil(void);
void regler(void);
void highscore(void);
void about(void); // husk at tjekke den har du ville elske det 
void faber(void);
int findtal(int minTal, int maxTal);
int random(int minTal, int maxTal);
//Function You MUST create
//function takes 3 pointers, why?
void input(int *minTal, int *maxTal, int *maxGaet);

//Function You MUST create
//
int tester(compuTal);

//Function You MUST create
//
void outgaet(bool lavtHojt, int antalGaet);

//Function You MUST create
//
void outhurra(bool rigtig, int maxGaet, int antalGaet, int compuTal);

void score(int antalGeat, int maxGeat);
