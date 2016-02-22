using namespace std;
#include<iostream>
#include<stdlib.h>

int main()
{
	int i = 0, n = 10;
	while(i < n)
	{
		i++;
		if(i == 7)
			break;
		cout <<"While iteration with break " << i <<" \n";
	}
	i = 0;
	while(i < n)
	{
		i++;
		if( i == 7)
			continue;
		cout <<"While iteration with continue "<< i << " \n";
	}

	i = 0;
	loop:
	cout <<"Go to iteration no. " << i <<" \n";
	i++;
	if(i < n)
	goto loop;
	exit(EXIT_FAILURE);
}
