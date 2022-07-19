//Program to print factors of given number

#include<stdio.h>

void DisplayFactor(int);

int main()
{
	int iNo = 0;
	
	printf("Enter Number\n");
	scanf("%d",&iNo);
	
	DisplayFactor(iNo);
	
	return 0;
}

void DisplayFactor(int iValue)
{
	int iCnt = 0;
	
	if(iValue < 0)
	{
		iValue = -iValue;
	}
	
	for(iCnt=1; iCnt<=(iValue/2); iCnt++)    //O(N/2)
	{
		if((iValue % iCnt)== 0)  //iCnt is a factor
		{
			printf("%d\n",iCnt);
		}
	}
}