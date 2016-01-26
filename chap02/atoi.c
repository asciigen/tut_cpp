# include <stdio.h>
int atoi(char s[]);
main ()
{
	char str[6] = "654123";
	printf("Integer value of given string is %d \n",atoi(str));
}
int atoi(char st[])
{
	int i,n;

	n = 0;
	for(i=0;st[i] >= '0' && st[i] <= '9'; ++i)
		n = 10 * n + (st[i] - '0');
	return n;
}

