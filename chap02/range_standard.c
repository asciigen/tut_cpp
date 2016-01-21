#include <stdio.h>
#include <limits.h>
#include <float.h>

main()
{
	// Range of integral types

	printf("\nRange of integral type variables is given below \n\n");
	printf("CHAR_BIT  = %15d \n",CHAR_BIT);
	printf("CHAR_MAX  = %15d \n",CHAR_MAX);
	printf("CHAR_MIN  = %15d \n",CHAR_MIN);
	printf("INT_MAX   = %15d \n",INT_MAX);
	printf("INT_MIN   = %15d \n",INT_MIN);
	printf("LONG_MAX  = %15ld \n",LONG_MAX);
	printf("LONG_MIN  = %15ld \n",LONG_MIN);
	printf("SCHAR_MAX = %15d \n",SCHAR_MAX);
	printf("SCHAR_MIN = %15d \n",SCHAR_MIN);
	printf("SHRT_MAX  = %15d \n",SHRT_MAX);
	printf("SHRT_MIN  = %15d \n",SHRT_MIN);
	printf("UCHAR_MAX = %15d \n",UCHAR_MAX);
	printf("UINT_MAX  = %15u \n",UINT_MAX);
	printf("ULONG_MAX = %15lu \n",ULONG_MAX);
	printf("USHRT_MAX = %15d \n",USHRT_MAX);

	// Range of float types

	printf("\nRange of floating point type variables is given below \n\n");
	printf("FLT_RADIX    = \t%d \n",FLT_RADIX);
	printf("FLT_ROUNDS   = \t%i \n",FLT_ROUNDS);
	printf("FLT_DIG      = \t%i \n",FLT_DIG);
	printf("FLT_EPSILON  = \t%E \n",FLT_EPSILON);
	printf("FLT_MANT_DIG = \t%i \n",FLT_MANT_DIG);
	printf("FLT_MAX      = \t%f or %E \n",FLT_MAX, FLT_MAX);
	printf("FLT_MAX_EXP  = \t%i \n",FLT_MAX_EXP);
	printf("FLT_MIN      = \t%f or %E \n",FLT_MIN, FLT_MIN);
	printf("FLT_MIN_EXP  = \t%i \n",FLT_MIN_EXP);
	printf("DBL_DIG      = \t%i \n",DBL_DIG);
	printf("DBL_EPSILON  = \t%E \n",DBL_EPSILON);
	printf("DBL_MANT_DIG = \t%i \n",DBL_MANT_DIG);
	printf("DBL_MAX      = \t%f or %E \n",DBL_MAX, DBL_MAX);
	printf("DBL_MAX_EXP  = \t%i \n",DBL_MAX_EXP);
	printf("DBL_MIN      = \t%f or %E \n",DBL_MIN, DBL_MIN);
	printf("DBL_MIN_EXP  = \t%i \n",DBL_MIN_EXP);
}
