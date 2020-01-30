/*********************************************************
Function:		Spil
Purpose:		Her får vi inputs fra andre funktioner og sender det vidre til de funktioner der skal bruge det.
**********************************************************/
#include "Main.h" 
void spil(void) {
	int  minTal, maxTal, antalGeat = 0, maxGeat, comTal, scoreNr = 0;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	input(&minTal, &maxTal, &maxGeat);
	comTal = findTal(minTal, maxTal);
	printf("\n\nHvad for et tal gætter du på?: ");
	while (antalGeat < maxGeat) {
		int trueFalse = tester(comTal);

		if (trueFalse == 1) {					//Her sender vi inputs til funktionen outGaet
			antalGeat++;
			outGaet(true, antalGeat, maxGeat);
		}
		if (trueFalse == 0) {					//Her sender vi inputs til funktionen outHurra
			antalGeat++;
			outHurra(true, maxGeat, antalGeat, comTal);
		}
		if (trueFalse == -1) {					//Her sender vi inputs til funktionen outGaet
			antalGeat++;
			outGaet(false, antalGeat, maxGeat);
		}
		
	}
	if (antalGeat == maxGeat) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		system("cls");
		printf("   ______          _        _     _          _____       _ _ _      _   \n");
		printf("   |  _  \\        | |      | |   | |        /  ___|     (_| | |    | | \n");
		printf("   | | | |_   _   | |_ __ _| |__ | |_ ___   \\ `--. _ __  _| | | ___| |_ \n");
		printf("   | | | | | | |  | __/ _` | '_ \\| __/ _ \\   `--. | '_ \\| | | |/ _ | __|\n");
		printf("   | |/ /| |_| |  | || (_| | |_) | ||  __/  /\\__/ | |_) | | | |  __| |_ \n");
		printf("   |___/  \\__,_|   \\__\\__,_|_.__/ \\__\\___|  \\____/| .__/|_|_|_|\___|\\__|\n");
		printf("                                                  | |                   \n");
		printf("                                                  |_|                   \n");
		printf("\n\t\t\t   Beder hel næste gang :)");
	}
	score(antalGeat, maxGeat);
}