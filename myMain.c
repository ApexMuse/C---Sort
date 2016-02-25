/*
 * myMain.c
 *
 *  Created on: Aug 30, 2015
 *      Author: Todd Twiggs
 */

#include <stdlib.h>
#include <stdio.h>

#define max(x, y) (x > y ? x : y)

int main(void) {
	int num1, num2;
	printf("\nEnter an integer: ");
	scanf("%i", &num1);
	printf("Enter another integer: ");
	scanf("%i", &num2);
	int largest = max(num1, num2);
	printf("\nThe larger of the two integers is %i.\n\n", largest);
	return 0;
}
