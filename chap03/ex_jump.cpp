using namespace std;
#include<iostream>

int main()
{
	void exit(int exitcode);
	int i = 0, n = 10;
	while(i < n)
	{
		i++;
		if(i == 7)
			break;
	}
	exit(5);
	i = 0;
	while(i < n)
	{
		i++;
		if( i == 7)
			continue;
	}

	i = 0;
	loop:
	cout <<"Go to iteration no. " << i <<" \n";
	i++;
	if(i < n)
	goto loop;

}
