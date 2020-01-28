/*********************************************************
Function:			CreateFile
Date Created:		20200128
Date Last Edit:		20200128
Author:				/Lyng, Jao
Purpose:			To create a file call "fileName"
Returns:			if open return = 0 if not open return -1
**********************************************************/
#include "Main.h"
int CreateFile(FILE ** fileptr, char* fileName)
{
	*fileptr = fopen(fileName, "r");
	if (*fileptr == NULL)
		*fileptr = fopen(fileName, "w+");
	if (*fileptr == NULL)
		return(-1);
	fclose(*fileptr);
	return(0);
}

/*********************************************************
Function:			OpenFileReadWrite
Date Created:		20200128
Date Last Edit:		20200128
Author:				/Lyng, Jao
Purpose:			to open a file
Returns:			if open return = -1 if not open return 0
**********************************************************/
int OpenFileReadWrite(char *fileName, FILE ** fileptr)
{
	*fileptr = fopen(fileName, "r+");
	if (*fileptr == NULL)
		return(-1);
	return(0);
}