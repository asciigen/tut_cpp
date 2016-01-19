/* 	Following example demonstrates,
	How postfix and prefix increment/decrement works
*/

//--------------------- Program starts --------//

#include <stdio.h>
int main()
{
	int a=5,b=5,c=5,d=5;
	printf("Value of ++a is %d \n",++a);
	printf("Value of a++ is %d \n",a++);
        printf("Value of --b is %d \n",--b);
        printf("Value of b-- is %d \n",b--);
        printf("Value of c-- is %d \n",c--);
        printf("Value of --c is %d \n",--c);
        printf("Value of --d is %d \n",--d);
        printf("Value of d++ is %d \n",d++);
}

