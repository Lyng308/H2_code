#pragma once
#include <stdio.h> 




int CreateFile(FILE **fileptr, char* fileName);
int OpenFileReadWrite(char * fileName, FILE ** fileptr);
int ReadFromFile(char * dataRead, FILE *fileptr);
int WriteToFile(char *dataToWrite, FILE *fileptr);
					