#include "Main.h"
int tester(compuTal) {
	int geat1 = 0;
	scanf("%d", &geat1);
	if (compuTal == geat1) //hvis geat er lige med computal = return -1
	return(-1);
	if (compuTal < geat1) //if guess is low
	return(1);
	if (compuTal > geat1)
		return(0);
}