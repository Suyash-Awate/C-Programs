#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *p = NULL;
	int *q = NULL:
	
	p = (int*)malloc(Sizeof(int)*5);
	
	////////////
	///////
	/////////
	///////////////
	
	q = p;
	
	free(p);
	p = NULL;
	
	return 0;
}