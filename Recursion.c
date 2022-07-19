//Iteratoin with loops

#include<stdio.h>

//Using while loop
int PowerIW(int x , int y)
{
	int iMult = 1;
	
	while(y != 0)
	{
		iMult = iMult * x;
		y--;
	}
	return iMult;
}

//Using Recursion
int PowerR(int x, int y)
{
	static int iMult = 1;
	
	if(y != 0)
	{
		iMult = iMult * x;
		y--;
		PowerR(x,y);   //Recursive call
	}
	return iMult;
}

//Using for loop
int PowerIF(int x , int y)
{
	int iMult = 1, i = 0;
	
	for(i=1; i<=y; i++)
	{
		iMult = iMult * x;
	}
	return iMult;
}

int main()
{
	int no1 = 0, no2 = 0, iret = 0;
	
	printf("Enter base\n");
	scanf("%d",&no1);
	
	printf("Enter power\n");
	scanf("%d",&no2);
	
	printf("Using while loop\n");
	iret = PowerIW(no1,no2);
	printf("Result is : %d\n",iret);
	
	printf("\nUsing for loop\n");
	iret = PowerIF(no1,no2);
	printf("Result is : %d\n",iret);
	
	printf("\nUsing Recursion\n");
	iret = PowerR(no1,no2);
	printf("Result is : %d\n",iret);
	
	return 0;
}