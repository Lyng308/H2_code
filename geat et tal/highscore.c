#include "Main.h"
void highscore(void) {
	FILE* score;
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 06);
	system("cls");
	printf("                     _   _ _       _                            \n");
	printf("                    | | | (_)     | |                           \n");
	printf("                    | |_| |_  __ _| |__  ___  ___ ___  _ __ ___ \n");
	printf("                    |  _  | |/ _` | '_ \\/ __|/ __/ _ \\| '__/ _ \\\n");
	printf("                    | | | | | (_| | | | \\__ \\ (_| (_) | | |  __/\n");
	printf("                    \\_| |_/_|\\__, |_| |_|___/\\___\\___/|_|  \\___|\n");
	printf("                              __/ |                             \n");
	printf("                             |___/                              \n\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
	file_Reader(&score, FILENAME1);
	printf("\n\n\t\t tryk på taste for at komme tilbage til Main Menu");
}
