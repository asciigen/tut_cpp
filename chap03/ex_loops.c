/*	This is a demo of while, do while and for loop	*/

# include <stdio.h>

main()
{
	int i = 1,j = 0,k,lim = 10;

	while(i <= 10)
	{
		printf("While iteration no. %d \n",i);
		i++;
	}
	do
	{
		printf("This iteration will always be executed \n");
	}
	while( j!= 0);
	for(k = 0; k < lim ; k++)
		printf("For iteration no. %d \n",k);
}
