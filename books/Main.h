#pragma once
#include <stdio.h> /* This is the include file for handling
					  standard input & output
					  2017 August PEFA                      */
#include <ctype.h>
#include <conio.h>
#include <locale.h>

#define MAXBOOKS	100
#define MAXTITLE	50
#define MAXAUTHOR	50
#define MAXSUBJECT	100

struct Books {
	char  title[MAXTITLE];
	char  author[MAXAUTHOR];
	char  subject[MAXSUBJECT];
	float book_price;
	int id;
};
int NumberOfBooks = 1;
void printBook(struct Books *book);
void menu(void);

void AddBook(struct Books *book);

void printAllBooks(struct Books *library);

void DeleteBook(struct Books *book);