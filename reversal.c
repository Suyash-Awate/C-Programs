//Program to print numbers in reverse order

#include<stdio.h>

/////////////////////////////////////////
//Input  : 3
//Output : 3 2 1 
//
//Input  : 8
//Output : 8 7 6 5 4 3 2 1 
/////////////////////////////////////////

void Display(int);

int main()
{
	int iNo = 0;
	printf("Enter Number\n");
	scanf("%d",&iNo);
	Display(iNo);  //Function Call
	
	return 0;
}

void Display(int iValue)
{
	int i = 0;
	
	for(i=iValue; i>=1; i--)
	{
		printf("%d\n",i);
	}
}