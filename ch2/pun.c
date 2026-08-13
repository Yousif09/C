
/*
 * name: pun.c
 * AUthor: Yousif Alboufradi
 * Date: 2026-06-10
 * Purpose: Writing some bad puns to the console :) 
 *
 */
#include <stdio.h> // C's standard input/output library
//NOTE: anything with a # is called a directive and is handed off to the preprocessor for it to read

int main(void) {

	int height = 8; 
	int length = 12; 
	int width = 10; 

	printf("Height: %d Length: %d\n", height, length); // %d is only for integer variables
	

	int volume = height * length * width;

	float profit;
	profit = 2156.04f; // make sure to add the f at the end 
	printf("Profit: $%.2f\n", profit); // floats by default print out 6 decimal places. 
	// to display to the value shown we would add .2f indicating "go out 2 decimal places"


	printf("To C, or not to C: that is the question.\n");
	printf("Brevity is the soul of wit.\n   --Shakespeare\n"); 
	return 0; //termination of the program when we return 0. 

}
