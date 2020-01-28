/*********************************************************
Program:				StandardC
Date Created:			20200127
Date Last Edit:			20200128
Author:					/Lyng Joa
Purpose:				to read from at file and write to a file
**********************************************************/
#include "Main.h"
#define FILENAME "TheFile.txt"
#define FILENAME1 "Lorem Ipsum.txt"
int main() {
	FILE* ptr;
	FILE* ptr1;
	char inText[30000];
	printf("this program will read from the file %s and write it to the file %s\n\n", FILENAME, FILENAME1);
	printf("press to start the program");
	getch();
	system("cls");
	
	if (CreateFile(&ptr, FILENAME) == 0)
		if (OpenFileReadWrite(FILENAME1, &ptr1) != -1) {
			ReadFromFile(inText, ptr1);
			getch();

			if (OpenFileReadWrite(FILENAME, &ptr) != -1) {
				WriteToFile(inText, ptr);
			}
		}
		else
			printf("The file %s can not be found\n", FILENAME);
	getch();

	return 0;
	}

