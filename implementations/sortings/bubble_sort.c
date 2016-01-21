/* 	This is a C program to implement
	Bubble sort algorithm	*/

// Include header file
#include<stdio.h>
#define size 5 		// Define array length
int Arr[size],i,j;	// Array declararion
void bubble();		// Function prototype

void main()
{
	printf("Enter your array elements \n");
	for(i=0;i<size;i++)
		scanf("%d",&Arr[i]);
	printf("You have provided these values \n");
	for(i=0;i<size;i++)
		printf("\t%d",Arr[i]);
	bubble();	// Bubble sort function calling
	printf("\nResult after performing Bubble sort \n");
	for(i=0;i<size;i++)
		printf("\t%d",Arr[i]);
	printf("\n");
}
void bubble()
{
	for(i=0;i<size;i++)
	{
		for(j=0;j<(size-1)-i;j++)
		{
			if(Arr[j]>Arr[j+1])
			{
				Arr[j] = Arr[j] + Arr[j+1];
				Arr[j+1] = Arr[j] - Arr[j+1];
				Arr[j] = Arr[j] - Arr[j+1];
			}
			printf("\t");
		}
	}
}
