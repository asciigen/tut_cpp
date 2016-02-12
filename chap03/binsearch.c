/*	This is a program that implements
	binary search algorithm using else if ladders		*/

#include <stdio.h>

int binsearch(int, int [], int);
int binsearch(int x, int v[], int n)
{
	int low, high, mid;
	low = 0;
	high = n - 1;

	while (low <= high)	{
		mid = (low + high) / 2;
		if ( x < v[mid])
			high = mid -1;
		else if (x > v[mid])
			low = mid + 1;
		else	//	found match
			return mid;
	}
	return -1;
}
main()
{
	int arr[] = {0,1,2,3,4,5,6,7,8,9};
	int a = binsearch(5,arr,10);
	printf("Value %d found \n",a);
}
