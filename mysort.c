/*
 * mysort.c
 *
 *  Created on: Aug 28, 2015
 *      Author: Todd Twiggs
 */

#include <stdlib.h>
#include <stdio.h>
#include "mysort.h"

int i;
int myarr[100];

int main(void) {
	
	generateNums(myarr);
	sortNums(myarr);
	verifyOrder(myarr);
	return 0;
}
