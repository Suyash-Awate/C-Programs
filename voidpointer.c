#include<stdio.h>

int main ()  //Entry point function
{
	int no = 11;
	double d = 3.14;
	
	int *ip = &no;
	double *dp = &d;
	
	void *vp = &no;
	
	printf("Integer pointer is :%d\n",*ip);
    printf("Double pointer is :%d\n",*dp);	
	printf("void pointer is :%d\n",*(int *)vp);
	
	return 0;
}