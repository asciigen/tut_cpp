# include <stdio.h>
main()
{
	int dig = 9;
	float pi = 3.14543462563425;
	double res1, res2;

	res1 = dig + pi;
	res2 = (int) pi + dig;

	printf("Result after implicit type cast is %g \n",res1);
	printf("Resutl after explicit type cast is %g \n",res2);
}
