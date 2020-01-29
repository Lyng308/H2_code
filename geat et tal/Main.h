#pragma once
#include <stdio.h>
#include <locale.h>		//setloacle (så vi kan bruge æøå)
#include <conio.h>		//getch()
#include <time.h>		//Time function for random //see findtal.c
#include <stdbool.h>	//Boolean definitions
#include <Windows.h>	 //SetConsoleTextAttribute // skifter faver

#define FILENAME "faber_we_love_you.txt"
#define FILENAME1 "score.txt"
void menu(void);
	void spil(void);
		int findtal(int minTal, int maxTal);
		void input(int *minTal, int *maxTal, int *maxGaet);
		int tester(compuTal);
		void outgaet(bool lavtHojt, int antalGaet, int maxGaet);
		void outhurra(bool rigtig, int maxGaet, int antalGaet, int compuTal);

	void score(int antalGeat, int maxGeat);
	void regler(void);
	void highscore(void);

void about(void); // husk at tjekke den har du ville elske det 
	void menu2(void);
	void weLoveFaber(void);
		int random(int minTal, int maxTal);
	
void file_Reader(void);

