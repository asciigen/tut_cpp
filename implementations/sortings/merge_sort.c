#include<stdio.h>
#include<limits.h>
#define size 10

void merge(long [],long,long,long);
void merge_sort(long [],long,long);
long A[size+1],L[(size+1/2)+1],R[(size+1/2)+1];
long i,j,k,n1,n2,first=1,last=size;

void main()
{
	printf("Enter your array to peform Merge sort\n");
	for(i=1;i<=size;i++)
		scanf("%li",&A[i]);
	merge_sort(A,first,last);
	printf("\nArray after performing Merge sort is\n");
	for(i=1;i<=size;i++)
		printf("\t%li",A[i]);
	printf("\n");
}
void merge(long ar[],long first,long mid, long last)
{
	n1 = mid - first + 1;
	n2 = last - mid;
	for(i=1;i<=n1;i++)
		L[i] = ar[first+i-1];
	for(j=1;j<=n2;j++)
		R[j] = ar[mid+j];
	L[n1+1] = LONG_MAX;
	R[n2+1] = LONG_MAX;
	i = 1;
	j = 1;
	for(k=first;k<=last;k++)
	{
		if(L[i]<=R[j])
		{
			ar[k] = L[i];
			i = i + 1;
		}
		else
		{
			ar[k] = R[j];
			j = j + 1;
		}
	}
}
void merge_sort(long ar[],long first,long last )
{
	long mid;
	if(first<last)
	{
			mid = (first+last)/2;
			merge_sort(ar,first,mid);
			merge_sort(ar,mid+1,last);
			merge(ar,first,mid,last);
	}
}
