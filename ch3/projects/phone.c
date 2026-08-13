/*
 *
 * Project: Write a program that prompts the user to enter a telephone number in the form 
 * (xxx) xxx-xxxx and then displays the number in the form xxx.xxx.xxxx:
 *
 *  Enter phone number [ (xxx) xxx-xxxx]: (402) 580-4091
 *  You entered 402.580.4091
 *
 *
 *
 */ 

//NOTE: completed but still can't figure out how to remove the hyphens from the scanf buffers.
// :( figure this out!!! 

#include <stdio.h> 

int main(void) {

	int first, second, third;
	printf("Enter a phone number [ (xxx) xxx-xxxx]: ");  
	scanf("(%d) %d%d", &first, &second, &third);

	printf("You entered %d.%d.%d", first, second, third); 


	return 0; 

}
