// This is an example of parsing of an expression
// ----------------- Program starts ---------//

#include<stdio.h>
int main()
{
	int a=1,b=2,c=1,d=2,e=1,f=2,g=1,h=2,ex1,ex2,ex3,ex4;

	//	Following is wrong expression
        //      result = a+++++b;

	//	This is expression 1
	ex1 = a++ + b++;
	printf("Output for ex1 is :\t %d \n",ex1);

	// 	This is expression 2
	ex2 = ++c + ++d;
	printf("Output for ex2 is :\t %d \n",ex2);

        //      This is expression 3
        ex3 = e++ + ++f;
        printf("Output for ex3 is :\t %d \n",ex3);

        //      This is expression 4
        ex4 = ++g + h++;
        printf("Output for ex4 is :\t %d \n",ex4);

	return 0;
}
