/*	This demo program can convert
	a upper case character to lower case character	*/
# include <stdio.h>

//	Function prototype
int utol(int ch);
main ()
{
	char ch = 'J';
	printf(" %c is converted into %c \n",ch,utol(ch));
}

//	Function definition
int utol(int c)
{
	if (c>= 'A' && c <= 'Z')
		return c + 'a' - 'A';
	else
		return c;
}

