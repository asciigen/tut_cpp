// This is an example of commandline arguement

#include <stdio.h>
void main(int argc, char *argv[])
{
	if(argc <= 1)
		printf("No commandline arguement passed \n");
	else if(argc == 2)
		printf("You passed %s as commandline arguement \n",argv[1]);
	else
		printf("Too many command line arguements \n");
}
