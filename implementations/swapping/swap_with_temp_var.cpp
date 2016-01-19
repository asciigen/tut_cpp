/*	This is an another example of swapping
	here it is done by using temporary variable called 'temp'	*/

// Include header file
#include<stdio.h>

// Main function definition
int main()
{
	// Variable declaration
    	int x,y,temp;

	// Value assignment
    	x = 2;
    	y = 3;

	// Print variable values before swapping
    	printf("Before swapping \t Value of x is %d and Value of y is %d \n",x,y);

	// Swapping code
    	temp = x;
    	x = y;
    	y = temp;

	// Print variable values after swapping
    	printf("After swapping \t\t Value of x is %d and Value of y is %d \n",x,y);
}
