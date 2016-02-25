/*
 * myMain.c
 *
 *  Created on: Aug 30, 2015
 *      Author: Todd Twiggs
 */

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "genNums.c"
#include "sortNums.c"
#include "veriOrder.c"

int myarr[100];

int main(void) {
	generateNums(myarr);
	sortNums(myarr);
	verifyOrder(myarr);
	return 0;
}
