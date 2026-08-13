/*
 * A small program that converts fahrenheit to celsius
 *
 * Author: Yousif Alboufradi
 * Date: 2026-06-11
 * tempConversion.c
 *
 *
 */

#include <stdio.h> 

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (9.0f / 5.0f)

int main(void) {

	//NOTE: it might be better to first define your values like float fahrenheit, celsius at the top
	float fahrenheit; 

	printf("Enter fahrenheit temperature: ");
	scanf("%f", &fahrenheit); 

	float celsius = (fahrenheit - FREEZING_PT) / (SCALE_FACTOR); 

	printf("Celsius Equivalent: %.1f", celsius); 

	return 0; 
}
