# include <stdio.h>
int isdigit(int ch);
main ()
{
	char ch = '0';
	printf("%c is%s a digit \n",ch,isdigit(ch) ? "" : " not");
}
int isdigit(int c)
{
	if (c>= '0' && c <= '9')
		return 1;
	else
		return 0;
}

