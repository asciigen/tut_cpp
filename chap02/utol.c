# include <stdio.h>
int utol(int ch);
main ()
{
	char ch = 'J';
	printf(" %c is converted into %c \n",ch,utol(ch));
}
int utol(int c)
{
	if (c>= 'A' && c <= 'Z')
		return c + 'a' - 'A';
	else
		return c;
}

