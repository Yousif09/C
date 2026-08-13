

#include <stdio.h> 

int main(void) {


	//float x = 43.3535053815; 

	printf("%6d, %4d\n", 86, 1040); 
	printf("%12.5e\n", 30.253); 
	printf("%.4f\n", 83.162);
	printf("%-6.2g", .0000009979); 


//	printf("%-8.1e", x); 
//	printf("%10.6f", x); 
//	printf("%-8.3f", x);
//	printf("%6.0f", x); 

//	int i, j;
//	float x; 

//	scanf("%d%f%d", &i, &x, &j); 
//	printf("%d %f %d", i, x, j); 

	float x, y;
	int i; 

	scanf("%f%d%f", &x, &i, &y); 
	printf("%f %d %f", x, i, y); 

	return 0; 
}
