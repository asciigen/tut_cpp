/*	This program checks for whether given character
	is a digit or not		*/
//	This program also demonstrates usage of ternary operator ? :
# include <stdio.h>

//	Function prototype
int isdigit(int ch);
main ()
{
	char ch = '0';
	printf("%c is%s a digit \n",ch,isdigit(ch) ? "" : " not");
}

//	Function definition
int isdigit(int c)
{
	if (c>= '0' && c <= '9')
		return 1;
	else
		return 0;
}

