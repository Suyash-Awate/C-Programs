#include<stdio.h>

int AddDigit(int);

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet = AddDigit(iValue);
	printf("Addition of Digits is :%d\n", iRet);
	return 0;
}

int AddDigit(int iNo)
{
	int iDigit = 0;
	int iSum = 0;
	if(iNo < 0)		//Input Updater
	{
		iNo = -iNo;
	}
	
	while(iNo>0)
	{
		iDigit = iNo % 10;
		iSum = iSum + iDigit;
		iNo = iNo/10;
	}
	return iSum;
}