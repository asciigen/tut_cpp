# define MAXLEN	1000
# define OCTN '\37'
# define HEXN '\x1F'

# include <stdio.h>
main()
{
	enum boolean {NO, YES};
//	long const con = 09293;		// Compiler accepts it to be an octal number
	long const con = 9293;
//	NO = 3;				// This can't be done

	printf("NO is an enum constant, and its value is %d", NO);
	printf("\nValue of this long int constant is %li - It is a read only variable",con);
	printf("\nThis line is a string " "constant");
	printf("\nDecimal value %d is represented as \'\\37\' in octal number system ", OCTN);
	printf("\nDecimal value %d is represented as \'\\x1F\' in hexadecimal number \n", HEXN);

}
