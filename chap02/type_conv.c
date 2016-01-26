# include <stdio.h>
main()
{
	int i;
	char c;

	i = 'd';
	c = 2;

	printf("Before implicit type cast - Value of i is %d\n",i);
	printf("Before implicit type cast - Value of c is %d\n",c);

	i = c;
	c = i;

        printf("After implicit type cast  - Value of i is %d\n",i);
        printf("After implicit type cast  - Value of c is %d - Unchanged\n",c);

}
