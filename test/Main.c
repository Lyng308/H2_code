#include "Main.h"
int main() {
	//J, F, M, A, M, J, J, A, S, O, N, D
	const int days[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int index;
	//Use sizeof(days)/sizeof(days[0]) to count elements in array. Sizeof is in bytes
	for (index = 0; index < (sizeof(days) / sizeof(days[0])); index++)
		printf("Month %2d has %d days. \n", index + 1, days[index]);
	getch();
	return 0; /* Normal excution:return 0
	Abnormal execution:return -something
	/PEFA */
}