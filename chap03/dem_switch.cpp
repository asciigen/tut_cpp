#include<iostream>
using namespace std;

int main()
{
	int x = 3;
	std::cout<<"Enter your choice from 1-3 \n";
	cin >> x;
	switch (x)
	{
	case 1:
		std::cout << "This is case 1 \n";
		break;
	case 2:
		std::cout << "This is case 2 \n";
	case 3:
		std::cout << "This is case 3 \n";
		break;
	default:
		std::cout << "Neither of 3 cases \n";
	}
}
