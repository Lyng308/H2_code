/*********************************************************
Function:			ReadFromFile
Date Created:		20200128
Date Last Edit:		20200128
Author:				/Lyng, Jao
Purpose:			To create a file call "fileName"
Returns:			if open return = 0 if not open return -1
**********************************************************/
#include "Main.h"
int ReadFromFile(char * dataRead, FILE *fileptr) {
	int i = 0;
	int bytes;
	fseek(fileptr, 0, SEEK_SET);
	while (fread(dataRead + i, sizeof(char), 1, fileptr) != 0) {
		printf("%c", dataRead[i]);
		i++;
	}
	dataRead[i + 1] = '\0';
	printf("\nther is %d characters\n\n", i);
	bytes = ftell(fileptr);
	printf("the file is %d bytes big", bytes);

}
