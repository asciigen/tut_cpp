/* This program is a demonstration of
	sizeof operator and outputs the
	size of variable data types */

#include<stdio.h>
main()
{
	// sizeof starts working here

	printf("Size of character (signed or unsigned) variable is \t\t%d bytes \n",sizeof(char));
	printf("Size of short integer (signed or unsigned) variable is \t\t%d bytes \n",sizeof(short int));
	printf("Size of integer (signed or unsigned) variable is \t\t%d bytes \n",sizeof(int));
	printf("Size of long integer (signed or unsigned) variable is \t\t%d bytes \n",sizeof(long int));
	printf("Size of floating point (signed or unsigned) variable is \t%d bytes \n",sizeof(float));
	printf("Size of double (always signed) variable is \t\t\t%d bytes \n",sizeof(double));
	printf("Size of long double (always signed) variable is \t\t%d bytes \n",sizeof(long double));
}
