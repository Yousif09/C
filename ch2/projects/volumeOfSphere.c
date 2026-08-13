/*
 * Project: write a program that computes the volume of a sphere with a 10-meter radius, using the
 * formula v = 4/3πr^3. Write the fraction 4/3 as 4.0f/3.0f. (Try writing it as 4/3 and see what 
 * happens if we were to do that instead). Hint: C does not have an exponentiation operator, so 
 * you'll need to multiply r by itself twice to compute r^3. 
 *
 *
 */ 

#include <stdio.h>
#define PI 3.14159f
// NOTE: pi is the ratio of a circle's circumference to its diameter

int main(void) {

	int r;
	
	printf("Enter the radius of the sphere: ");
	scanf("%d", &r); 

	float volOfSphere = (4.0f / 3.0f) * PI * r * r * r; 

	printf("volume of the sphere: %.2f", volOfSphere);


	return 0; 
}
