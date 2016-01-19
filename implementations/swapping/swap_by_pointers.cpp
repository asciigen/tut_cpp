/*	This program is an example of swapping
	This program uses pointers
	for value assignment via indirection	*/

// Include header file
#include<stdio.h>

// Main definition
int main()
{
	// Data variables and pointer variable declaration
	int x,y,*p,*q;

	// Variable assignment
    	x = 2;
    	y = 3;

	// Print variable status before swapping
    	printf("Before swapping \t Value of x is %d and Value of y is %d \n",x,y);

	// Swapping code using pointers - Indirection
    	p = &x;
    	q = &y;
    	*p = y;
    	*q = x;

	// Print variable status after swapping
    	printf("After swapping \t\t Value of x is %d and Value of y is %d \n",x,y);

}
