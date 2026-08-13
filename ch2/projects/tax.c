/*
 *
 * Project: Write a prohram that asks the user to enter a dollar-and-cents amount, then displays 
 * the amount with 5% tax added:
 *
 * 100.00 with 5% tax added which is 0.05 should be:
 * 100.00 * 0.05 = $5 then just add that to the dollar amount which = 105.00!
 *
 *
 *
 */ 
#include <stdio.h>
#define MANDATORY_TAX 0.05

int main(void) {

	double amount; 
	printf("Enter an amount: ");
	
	scanf("%lf", &amount); 
	double tax = amount * MANDATORY_TAX;
	double amountAfterTax = amount + tax; 
	printf("With tax added: $%.2lf", amountAfterTax); 

	return 0; 

}
