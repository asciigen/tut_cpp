#include<iostream>
using namespace std;
// passes a pointer (called reference in java) to an integer
void swap1(int *p, int *q)
{
	int t;
	t = *p;
	*p = *q;
	*q = t;
	cout << "Swap1 function called -\t";
	cout << *p << "\t";
	cout << *q << "\n";
}
//	Swap 2
void swap2(int p,int q)
{
	int t;
	t = p;
	p = q;
	q = t;
	cout << "Swap2 function called -\t";
	cout << p << "\t";
	cout << q << "\n";
}
//	passes an integer by reference
void swap3(int* p, int* q)
{
//	Adress swapping
	int* t;
	t = p;
	p = q;
	q = t;
	cout << "Swap3 function called -\t";
	cout << *p << "\t";
	cout << *q << "\n";
}
//	this is the java style of passing references. NULL is called "null" there.
void swap4(int *p, int *q)
{
	int t;
	t = *p;
	*p = *q;
	*q = t;
	cout << "Swap4 function called -\t";
	cout << *p << "\t";
	cout << *q << "\n";
}
void swap5(int** p, int** q)
{
	int* t = *p;
	*p = *q;
	*q = t;
	cout << "Swap5 function called -\t";
	cout << **p << "\t";
	cout << **q << "\n";
    // they're swapped!
}
int main()
{
	int a = 10,b = 20;
	int * pa = &a, *pb = &b;

	swap1(&a,&b);
	swap2(a,b);
	swap3(pa,pb);
	swap4(pa,pb);
	swap5(&pa, &pb);
}
