#include<iostream>
using namespace std;
// passes a pointer (called reference in java) to an integer
void swap1(int *p, int *q) { // :1
	int t;
	t = *p;
	*p = *q;
	*q = t;
}
// passes an integer
void swap2(int p,int q)
{ // :2
	int t;
	t = p;
	p = q;
	q = t;
}
// passes an integer by reference
void swap3(int* p, int* q)
{ // :3
	int* t;
	t = p;
	p = q;
	q = t;
}
// this is the java style of passing references. NULL is called "null" there.
void swap4(int *p, int *q)
{ // :4
	int t;
//	changes what p points to ("what p references" in java)
//	only changes the value of the parameter, but *not* of
//	the argument passed by the caller. thus it's pass-by-value:
    	t = *p;
	*p = *q;
	*q = t;
}
void swap5(int** p, int** q)
{
    int* t = *p;
    *p = *q;
    *q = t;
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
