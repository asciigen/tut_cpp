/*	This source code provides a demo program
	to convert string into its integer value	*/
# include <stdio.h>

//	Function prototype
int atoi(char s[]);
main ()
{
	char str[6] = "a";
	printf("Integer value of given string is %d \n",atoi(str));
}
//	Function definition
int atoi(char st[])
{
	int i,n;
//	Program conversion logic
	n = 0;
	for(i=0;st[i] >= '0' && st[i] <= '9'; ++i)
		n = 10 * n + (st[i] - '0');
	return n;
}

