/*
 * Program that computes the dimensional weight of a box. 
 * (VERSION 2): Now allows for user input
 *
 *
 *
 */ 

//NOTE: volume is computed by L X W X H
//(Length * Width * Height)
#include <stdio.h>
#define INCHES_PER_POUND 166
// this is known as a constant or macro definition, since we rely on this throughout our 
// whole program it's good to intialize it so its easier for someone whos reading our code. 
// NOTE: this is also a preprocessor directive like the #include

int main(void) {

	int height, length, width, volume, weight; 

	printf("Enter height of box: ");
	scanf("%d", &height);
	printf("Enter length of box: ");
	scanf("%d", &length);
	printf("Enter width of box: ");
	scanf("%d", &width);

	printf("Dimensions: %dx%dx%d\n", length, width, height); 
	
	volume = height * length * width;
	weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND; 

	printf("Volume: (cubic inches): %d\n", volume); 
	printf("Dimensional weight (pounds): %d\n", weight); 


	return 0; 

}


