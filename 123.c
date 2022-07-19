#include<stdio.h>

int main()
{
	int x,y,z;
	
	x = y = z = 1;
	
	z = ++x || ++y && ++z;
	
	printf("%d,%d,%d\n",y,x,z);
	
	return 0;
}
	