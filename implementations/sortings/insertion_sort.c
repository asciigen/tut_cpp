/*	This is a C program that implements
	Insertion sort algorithm	*/

//	Include header file
#include<stdio.h>

//	define array length
#define num 5

// 	Defined a global array and other variables
int Arr[num],i,j,key;

//	Function prototype for insertion sort
void insert();

void main()
{
	printf("Enter your array Elements \n");
	for(i=0;i<num;i++)
		scanf("%d",&Arr[i]);
	printf("You have provided these values \n");
	for(i=0;i<num;i++)
		printf("\t%d",Arr[i]);
//	Callingf of inserton sort function
	insert();
	printf("\nResult after performing insertion Sort\n");
	for(i=0;i<num;i++)
		printf("\t%d",Arr[i]);
	printf("\n");
}
void insert()
{
	for(j=0;j<num;j++)
	{
		key = Arr[j];
		i = j - 1;
		while(i>=0 && Arr[i]>key)
		{
			Arr[i+1] = Arr[i];
			i = i - 1;
		}
		Arr[i+1] = key;
	}
}
