//
// The digits 0 13800 15173 5 represent a barcode from a package of Stouffer's French Bread Pizza
//
// To compute the check digit use this: 0 + 3 + 0 + 1 + 1 + 3 = 8 is the first sum,
// then 1 + 8 + 0 + 5 + 7 = 21 for the second sum and then multiplying the first sum by 3 and adding the second yields 45. Subtracting 1 gives 44. Remainder upon dividing by 10 is 4. and then when the remainder is subtracted from 9, the result is 5. 




/*
 * Program: write a program that calculates the check digit for an arbritrary UPC. First ask the 
 * user to enter the first 11 digits of the UPC, then we'll display the corresponding check digit.
 * To avoid confusion, we'll ask the user to enter the number in three parts: the single digit at 
 * the left, the first group of five digits, and the second group of five digits. A session example
 * will look something like this: 
 *
 *
 * Enter the first (single) digit: 0
 * Enter the first group of five digits: 13800
 * Enter the second group of five figits: 15137
 * Check digit: 5
 *
 */

#include <stdio.h>

int main(void) {


	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, 
	    firstSum, secondSum, total; 

	printf("Enter the first (single) digit: "); 
	scanf("%d", &d); 
	printf("Enter the first group of five digits: "); 
	scanf("%d%d%d%d%d", &i1, &i2, &i3, &i4, &i5); 
	printf("Enter the second group of five digits: "); 
	scanf("%d%d%d%d%d", &j1, &j2, &j3, &j4, &j5);

	firstSum = d + i2 + i4 + j1 + j3 + j5;
	secondSum = i1 + i3 + i5 + j2 + j4;
	total = firstSum * 3 + secondSum

	printf("Check Digit: %d\n", 9 - ((total - 1) % 10));  






	return 0; 

}
