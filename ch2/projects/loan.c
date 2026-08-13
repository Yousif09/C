I/*
 *
 * Project: Write a program that calculates the remaining balance on a loan after the first, second *  and third monthly payments:
 * 
 * ex: enter amount of loan: 20000.00
 *     enter interest rate: 6.0
 *     enter monthly payment: 386.66
 *
 *     Balance remaining after first payment: $19713.34
 *     Balance remaining after second payment: $19425.25
 *     Balance remaining after third payment: $19135.71
 *
 *     Display each balance with two digits after the decimal point: Hint: each month, the 
 *     balance is decreased by the amount of the payment, but increased by the balance times the
 *     monthly interest rate. To find the monthly interest rate, convert the interest rate entered
 *     by the user to a percentage and divide it by 12
 */

#include <stdio.h>

//NOTE: still couldn't correctly calculate the monthly interest rate for some reason. 
int main(void) {

	double loan, interestRate, monthlyPayment; 

	printf("Enter amount of loan: ");
	scanf("%lf", &loan);
	
	printf("Enter interest rate: ");
	scanf("%lf", &interestRate);

	printf("Enter monthly payment: ");
	scanf("%lf", &monthlyPayment); 


	// note: do 6.0 x 100 = 600 then / 12 = 50, then use that to multiply to the first balance, I 19,613
	double loanCalc = loan - monthlyPayment;
	double increasedBalance = loanCalc * 1.005;
	double secondIncreased = (increasedBalance - monthlyPayment) * 1.005; 
	double thirdIncreased = (secondIncreased - monthlyPayment) * 1.005;
	

	printf("%.2lf\n", loanCalc); 
	

	printf("Balance remaining after first payment: %lf\n", increasedBalance); 
	printf("Balance remaining after second payment: %lf\n", secondIncreased); 
	printf("Balance remaining after third payment: %lf", thirdIncreased); 


	return 0; 

}
