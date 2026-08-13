/*
 *
 * Project: Write a program that asks the user to enter a U.S. dollar amount and then shows how to
 * pay that amount using the smallest number of $20, $10, $5, and $1 bills:
 *
 * ex: Enter a dollar amount: 93
 * $20 bills: 4
 * $10 bills: 1
 * $5 bills: 0
 * $1 bills: 3
 */

#include <stdio.h>

int main(void) {


	int dollar; 
	printf("Enter a dollar amount: "); 
	scanf("%d", &dollar);

	int twentyCalculation = (dollar / 20); 
	int dollarAfterTwenty = dollar - (twentyCalculation * 20);
	int tenCalculation = (dollarAfterTwenty / 10); 
	int dollarAfterTen = dollarAfterTwenty - (tenCalculation * 10); 
	int fiveCalculation = (dollarAfterTen / 5); // note: this stores 3 if we have 93 
	int dollarAfterFive = dollarAfterTen - (fiveCalculation * 5);
	int onesCalculation = (dollarAfterFive / 1); 


	printf("$20 bills: %d\n", twentyCalculation); 
	printf("$10 bills: %d\n", tenCalculation); 
	printf("$5 bills: %d\n", fiveCalculation); 
	printf("$1 bills: %d\n", onesCalculation); 
	


	return 0; 

}
