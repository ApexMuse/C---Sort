/*
 * mysort.h
 *
 *  Created on: Aug 28, 2015
 *      Author: toddtwiggs
 */
 
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdbool.h>

int i, j, temp;

/*
 * generateNums function generates 100 random integers
 * in an array
 */
void generateNums(int *myarr) {
	printf("\nOriginal Array:\n\n");
	time_t t;
	
	/* Intializes random number generator */
    srand((unsigned) time(&t));
   
	for (i = 0; i < 100; i++) {
		myarr[i] = (rand() % 100) + 1;
		printf("%i = %d\n", i+1, myarr[i]);
	}
	printf("\n");
} /* End of generateNums */


/*
 *  sortNums function sorts them into ascending order 
 */
void sortNums(int *myarr){
	printf("\nSorted Array:\n\n");
	for (i = 0; i < 100; i++) {
		for (j = 0; j < 99; j++) {
			if (myarr[j] > myarr[j+1]) {
				temp = myarr[j];
				myarr[j] = myarr[j+1];
				myarr[j+1] = temp;
			}
		}
	}
	for (i = 0; i < 100; i++) {
		printf("%i = %d\n", i+1, myarr[i]);
	}
} /* End of sortNums */


/*
 *  verifyOrder uses code to validate that the array 
 *  is sorted as intended
 */
void verifyOrder(int *myarr) {
	printf("\n\nSort verification:\n");
	bool sorted = true;
	int index;
	for (i = 0; i < 99; i++) {
		if (myarr[i] > myarr[i+1]) {
			index = i;
			sorted = false;
			break;
		}
	}
	if (sorted) {
		printf("The array is properly sorted.\n\n");
	}
	else {
		printf("The array is improperly sorted at index %i.\n\n", i);
	}
} /* verifyOrder */
