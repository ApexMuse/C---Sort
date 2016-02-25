/*
 * sortNums.c
 *
 *  Created on: Aug 30, 2015
 *      Author: Todd Twiggs
 */
 
 int i, j, temp;
 
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
}
