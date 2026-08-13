/*
 * Program that computes the dimensional weight of a box. 
 * 
 *
 *
 *
 */ 

//NOTE: volume is computed by L X W X H
//(Length * Width * Height)
#include <stdio.h>

int main(void) {

	int height = 8, length = 12, width = 10; 
	int volume = height * length * width;
	int weight = (volume + 165) / 166; 

	printf("Dimensions: %dx%dx%d\n", length, width, height); 
	printf("Volume: (cubic inches): %d\n", volume); 
	printf("Dimensional weight (pounds): %d\n", weight); I


	scanf("%d", &i); //reads an integer; stores into i variable
	scanf("%f", &x); //reads a float value; stores it into x variable 

	return 0; 

}


