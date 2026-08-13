/*
 *
 * Project: Write a program that asks the user to enter the numbers from 1 to 16
 * (in any order) and then displays the numbers in a 4 by 4 arrangement, followed by the sums of
 * the rows, columns, and diagonals: 
 *
 * Enter the numbers from 1 to 16 in any order: 16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
 * 16 3 2 13
 * 5 10 11 8
 * 9 6 7 12
 * 4 15 14 1
 *
 * Row sums: 34 34 34 34
 * Column sums: 34 34 34 34 
 * Diagonal sums: 34 34
 *
 *
 * Note: if the row, column, and diagonal sums are all the same (as they are in this example), the
 * numbers are said to form a magic square. The magic square shown here appears in a 1514 engraving
 * by artist and mathematician Albrecht Durer. (Note that the middle numbers in teh last row give
 * the date of the engraving
 *
 *
 */ 

//NOTE: there's definitely a better way to do this that i'm not doing but its okay. 

#include <stdio.h>

int main(void) {

	int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p; 
	printf("Enter the numbers from 1 to 16 in any order: "); 
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i , &j, &k, &l, &m, &n, &o, &p); 

	printf("%d  %d  %d  %d\n  %d  %d  %d  %d\n  %d  %d  %d  %d\n  %d  %d  %d  %d\n", a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p); 
	 
	int r1Sums = a+b+c+d;
	int r2Sums = e+f+g+h; 
	int r3Sums = i+j+k+l; 
	int r4Sums = m+n+o+p; 

	int c1Sums = a+e+i+m;
	int c2Sums = b+f+j+n;
	int c3Sums = i+j+k+l;
	int c4Sums = m+n+o+p; 

	int d1Sums = a+f+k+p;
	int d2Sums = d+g+j+m; 

	printf("Row sums: %d %d %d %d\n",r1Sums, r2Sums, r3Sums, r4Sums); 
	printf("Column sums: %d %d %d %d\n", c1Sums, c2Sums, c3Sums, c4Sums);
	printf("Diagonal sums: %d %d\n", d1Sums, d2Sums);


	return 0;


}
