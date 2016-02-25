/*
 * genNums.c
 *
 *  Created on: Aug 30, 2015
 *      Author: Todd Twiggs
 */
 
 int i;
 
 /*
 * generateNums function generates 100 random integers
 * in an array
 */
void generateNums(int *myarr) {
	printf("\nOriginal Array:\n\n");
	for (i = 0; i < 100; i++) {
		myarr[i] = (rand() % 100) + 1;
		printf("%i = %d\n", i+1, myarr[i]);
	}
	printf("\n");
}
