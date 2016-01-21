/* This program is a demonstration of
sizeof operator and outputs the
range of variable data types */

#include <stdio.h>
#include <math.h>
main()
{
// Range of program starts working here

printf("Range of signed char variable is  \t\t%35.0f to %35.0f \n",((-(pow(2,sizeof(signed char)*8))/2)),(((pow(2,sizeof(signed char)*8))/2))-1);
printf("Range of unsigned char variable is \t\t%35.0f to %35.0f \n",0.0,(pow(2,sizeof(unsigned char)*8))-1);

printf("Range of signed short int variable is \t\t%35.0f to %35.0f \n",((-(pow(2,sizeof(signed short int)*8))/2)),(((pow(2,sizeof(signed short int)*8))/2))-1);
printf("Range of unsigned short int variable is \t%35.0f to %35.0f \n",0.0,(pow(2,sizeof(unsigned short int)*8))-1);

printf("Range of signed int variable is \t\t%35.0f to %35.0f \n",((-(pow(2,sizeof(signed int)*8))/2)),(((pow(2,sizeof(signed int)*8))/2))-1);
printf("Range of unsigned int variable is \t\t%35.0f to %35.0f \n",0.0,(pow(2,sizeof(unsigned int)*8))-1);

printf("Range of signed long int variable is \t\t%35.0f to %35.0f \n",((-(pow(2,sizeof(signed long int)*8))/2)),(((pow(2,sizeof(signed long int)*8))/2))-1);
printf("Range of unsigned long int variable is \t\t%35.0f to %35.0f \n",0.0,(pow(2,sizeof(unsigned long int)*8))-1);

printf("Range of signed long long int variable is \t%35.0f to %35.0f \n",((-(pow(2,sizeof(signed long long int)*8))/2)),(((pow(2,sizeof(signed long long int)*8))/2))-1);
printf("Range of unsigned long long int variable is \t\t%27.0f to %35.0f \n",0.0,(pow(2,sizeof(unsigned long long int)*8))-1);

printf("Range of float variable is \t\t\t%35.0f to %35.0f \n",((-(pow(2,sizeof(float)*8))/2)),(((pow(2,sizeof(float)*8))/2))-1);

printf("Range of double variable is \t\t\t%35.0f to %35.0f \n",((-(pow(2,sizeof(double)*8))/2)),(((pow(2,sizeof(double)*8))/2))-1);

printf("Range of long double variable is \t\t%35.0f to %35.0f \n",((-(pow(2,sizeof(long double)*8))/2)),(((pow(2,sizeof(long double)*8))/2))-1);
}
