#include<stdio.h>

int main()
{
	double a = 3.14;
	double *p 	= &a;
	printf("Inside main\n");
	printf("Size of pointer is :%d\n", sizeof(p));
	printf("Size of double is :%d\n", sizeof(a));
	printf("pointer returns value of a as:%f\n", *p);
	return 0;
}
