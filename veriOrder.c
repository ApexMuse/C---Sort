/*
 * veriOrder.c
 *
 *  Created on: Aug 30, 2015
 *      Author: Todd Twiggs
 */
 
 int i;
 
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
