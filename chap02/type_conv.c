/*	This program is a demonstration of type casting
	It shows how implicit type cast casting works	*/
# include <stdio.h>
main()
{

//	Variable declaration
	int i;
	char c;

//	Variable assignment
	i = 'd';
	c = 2;

	printf("Before implicit type cast - Value of i is %d\n",i);
	printf("Before implicit type cast - Value of c is %d\n",c);

//	implicit type casting performed
	i = c;
	c = i;

        printf("After implicit type cast  - Value of i is %d\n",i);
        printf("After implicit type cast  - Value of c is %d - Unchanged\n",c);

}
