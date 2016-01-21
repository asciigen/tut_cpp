#include<stdio.h>
#define size 5
void selection();
int findmin(int []);
int i,j,Arr[size],min;
void main()
{
	printf("Enter your elements now \n");
	for(i=0;i<size;i++)
		scanf("%d",&Arr[i]);
	printf("You have provided this data \n");
	for(i=0;i<size;i++)
		printf("\t%d",Arr[i]);
	selection();
	printf("\nResult after performing selection sort\n");
	for(i=0;i<size;i++)
		printf("\t%d",Arr[i]);
	printf("\n");
}
void selection()
{
	for(i=0;i<(size-1);i++)
	{
		j = findmin(Arr);
		if(Arr[i]>Arr[j])
		{
			Arr[i] = Arr[i] + Arr[j];
			Arr[j] = Arr[i] - Arr[j];
			Arr[i] = Arr[i] - Arr[j];
		}
	}
}
int findmin(int a[])
{
	min = i;
	for(j=i+1;j<size;j++)
	{
		if(a[j]<a[min])
			min = j;
	}
	return(min);
}
