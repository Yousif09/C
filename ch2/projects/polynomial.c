/*
 *
 * Project: Write a program that asks the user to enter a value for x and then displays the value 
 * of the following polynomial: 3x^5 + 2x^4 – 5x^3 – x^2 + 7x – 6
 *
 *
 */

// NOTE: horners rule refers to a polynomial evaluation method. This allows evaluation of a 
// polynomial of degree with only n multiplications and n additions. 

#include <stdio.h> 
#include <math.h> // be sure to include -lm when compiling with the math library included

int main(void) {

	int x; 

	printf("We have the following polynomial: 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n"); 
	printf("Enter a value for x: "); 
	scanf("%d", &x); 

	int calculation = 3* pow(x, 5) + 2* pow(x, 4) - 5* pow(x, 3) - pow(x, 2) + 7*x - 6;
	int hornersRule = x * (x * (x * (x * (3*x+2)-5)-1)+7)-6;

	printf("value: %d\n", calculation); 
	printf("value using horners rule: %d", hornersRule); 

	return 0; 
}
