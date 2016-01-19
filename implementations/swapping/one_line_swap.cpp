/* 	This source code is a demonstration
	of how swapping can be done
	in just one line	*/

// Include header file
#include<stdio.h>

// Main function definition
int main()
{
	// Variable declaration
	int x,y;

	// Value assignment
	x = 2;
   	y = 3;

	// Print variable status before swapping
	printf("Before swapping \t Value of x is %d and Value of y is %d \n",x,y);

	// One line swapping
    	x = (x + y) - (y = x);

	// Print variable status after swapping
    	printf("After swapping \t\t Value of x is %d and Value of y is %d \n",x,y);

}
