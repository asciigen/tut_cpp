/* 	Swapping can also be done
	by using additional arithmetic operators
	like * and / ,
	which in background uses + and - arithmetics 	*/

// Include header files
#include<stdio.h>

// Main function starts
int main()
{
	// Variable declaration
	int x,y;

    	// Value assignment
	x = 2;
    	y = 3;

	// Print variable status before swapping
    	printf("Before swapping \t Value of x is %d and Value of y is %d \n",x,y);

    	// Swapping code
	y = y * x;
	x = y / x;
    	y = y / x;

    	// Print variable status after swapping
	printf("After swapping \t\t Value of x is %d and Value of y is %d \n",x,y);
}
