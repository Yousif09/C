

#include <stdio.h>


int main(void) {



	//pre-increment example:
	int i = 1;
	printf("i is %d\n", ++i); 
	printf("i is %d\n", i);


	//post-increment example: 
	int j = 1; 
	printf("j is %d\n", j++); 
	printf("j is %d\n", j); 

	/*
	 * what is the difference? 
	 * the pre-increment is incremented immediately, while i++ (post-incre-
	 * ment) means use the old value of i for now, but increment i later?
	 * How much later exactly though? The C standard doesn't specify a 
	 * precise time, but it's safe to assume that i will be incremented 
	 * before the next statement is executed.
	 */ 


	// decrement examples:
	int k = 1;
	printf("k is %d\n", --k);
	printf("k is %d\n", k); 

	int g = 1; 
	printf("g is %d\n", g--); 
	printf("g is %d\n", g); 


	// when ++ or -- is used more than once in the same expression, the
	// result can be hard to undertand, so consider this example:
	i = 1;
	j = 2; 
	k = ++i + j++; 
	printf("k is: %d\n", k); // this holds the value 4. 
	
	/* explanation: since i is incremented before its value is used, but
	 * j is incremented after it is used, the last statement is equivalent
	 * to:
	 *
	 * i = i + 1; 
	 * k = i + j;
	 * j = j + 1; 
	 *
	 * so the final values of i, j, and k are 2, 3 and 4, respectively. 
	 * In contrast, executing the statements:
	 *
	 * i = 1; 
	 * j = 2; 
	 * k = i++ + j++; 
	 *
	 *
	 * /




	return 0;

}
