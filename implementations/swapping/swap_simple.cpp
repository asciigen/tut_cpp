/* 	This is an example of swapping
	by using simple arithmetic varibles
	like + and - operators 	*/

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

	// Print variable values before swapping
    	printf("Before swapping \t Value of x is %d and Value of y is %d \n",x,y);

	// Swapping code
    	y = y + x;
    	x = y - x;
    	y = y - x;

	// Print variable values after swapping
    	printf("After swapping \t\t Value of x is %d and Value of y is %d \n",x,y);
}
