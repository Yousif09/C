/*
 *
 * Project: Write a program that breaks down an ISBN entered by the user:
 *
 * Enter ISBN: 978-0-393-97950-3
 * GS1 prefix: 978
 * Group identifier: 0 
 * Publisher code: 393
 * Item number: 97950 
 * Check digit: 3
 *
 * Note: the number of digits in each group may vary; you can't assume that groups have the 
 * length shown in this example. Test your program with actual ISBN values (usually found on 
 * the back cover of a book and on the copyright pages). 
 *
 * THe first group (GSI prefix) stands for the group identifier specifies the language or
 * country of origin. 
 *
 *
 *
 */ 

//NOTE: I couldn't figure out how to remove the hyphens out of some of the identifiers. Try to 
// fix it soon!

#include <stdio.h>

int main(void) {

	int GS1, groupIdentifier, publisherCode, itemNumber, checkDigit;   
	printf("Enter ISBN: ");
	scanf("%d", &GS1); 
	scanf("%d", &groupIdentifier); 
	scanf("%d", &publisherCode);
	scanf("%d", &itemNumber); 
	scanf("%d", &checkDigit); 

	printf("%d\n", GS1);
	printf("%d\b\n", groupIdentifier); 
	printf("%d\b\n", publisherCode); 
	printf("%d\n", itemNumber); 
	printf("%d\n", checkDigit);



	return 0; 

}
