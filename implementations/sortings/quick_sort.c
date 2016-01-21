/*	This C program implements
	Quick sort algorithm	*/

#include <stdio.h>
#define size 10

int A[size+1],i,j;
int partition(int[],int,int);
void quick(int[],int,int);

main()
{
	printf("Enter your array \n");
	for(i=1;i<=size;i++)
		scanf("%d",&A[i]);
	quick(A,1,size);
	printf("\nResult after performing Quick sort \n");
	for(i=1;i<=size;i++)
		printf("\t%d",A[i]);
	printf("\n");
}

int partition(int a[],int first, int last)
{
	int temp;
	i = first-1;
	for(j=first;j<=(last-1);j++)
	{
		if(a[j]<=a[last])
		{
			i = i + 1;
			temp = a[j];
			a[j] = a[i];
			a[i] = temp;
		}
	}
	temp = a[last];
	a[last] = a[i+1];
	a[i+1] = temp;
	return(i+1);
}
void quick(int a[],int first,int last)
{
	int pivot;
	if(first<last)
	{
		pivot = partition(a,first,last);
		quick(a,first,pivot-1);
		quick(a,pivot+1,last);
	}
}
