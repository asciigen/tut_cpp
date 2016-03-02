/*	This is a demo of if conditional structure
	Example of compound if statement using block with braces
	Also gives you multiple condition checking	*/

#include <stdio.h>
main()
{
//	Variable declaration and assignment
	int a=1,b=2,c=3,res;

//	Demo of if conditions with single and multiple condition checking
	if( a == 1)
		printf("Value of variable a is %d \n",a);
	if( b == 2 || c == 4 )
		printf("Either value of variable b is %d or variable c has value %d \n",b,c);
	if( a == 1 && c == 3)
		printf("Value of variable a is %d and value of variable c is %d \n",a,c);
	if( a == 1 && b == c || c == 3 )
	{
		printf("Either value of variable a is %d \n",a);
		printf("or \n");
		printf("Variable b is %d and variable c is %d \n",b,c);

	}
	if( a == 2)
		printf("Value of a is 2 \n");
	else
		printf("Value of a is not 2 \n");

//	This is a demo of else if condition
//	This block also demonstrates the logical not operation (!)
	if( a != 2 )
		printf("Value of a is not 2 it is %d \n",a);
	else if( a == 1)
		printf("Value of a is 1 \n");
	else
		printf("Value of a is neither 1 nor 2 \n");


//	This is a demo of nested if conditions
	if( a == 1)
		if( b == 2 )
			if( c == 3 )
				printf("Value of a is 1, Value of b is 2 and Value of c is 3 \n");











}
