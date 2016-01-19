#include<stdio.h>
main()
{
	double nc;
	for(nc=0; getchar() != EOF; ++nc)
		;
	printf("Total words in given line are : \t %.0f \n",nc);
}
