/*********************************************************
Function:			WriteToFile
Date Created:		20200128
Date Last Edit:		20200128
Author:				/Lyng, Jao
Purpose:			to write somthink to a file
**********************************************************/
#include "Main.h"
int WriteToFile(char * dataToWrite, FILE * fileptr)
{
	int i = 0;
	fseek(fileptr, 0, SEEK_SET);
	while (1) {
		if (dataToWrite[i] != '\0') {
			fwrite(dataToWrite + i, sizeof(char), 1, fileptr);
			i++;
		}
		else
			break;
	}
	return 0;
}