#include<stdio.h>
main()
{
	long nc;
	nc = 0;
	while(getchar() != EOF)
		++nc;
	printf("Total words in given line are : \t %ld \n",nc);
}
