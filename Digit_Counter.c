#include<stdio.h>

int CountDigit(int);

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet = CountDigit(iValue);
	printf("Number of Digits are :%d\n", iRet);
	return 0;
}

int CountDigit(int iNo)
{
	//int iDigit = 0;
	int iCnt = 0;
	
	if(iNo == 0)	//Filter
	{
		printf("Number of Digits are : 1\n");
		return 1;
	}
	
	if(iNo < 0)		//Input Updater
	{
		iNo = -iNo;
	}
	
	while(iNo>0)
	{
		//iDigit = iNo % 10; Not needed
		iCnt = iCnt + 1;  //OR iCnt++;
		iNo = iNo/10;
	}
	return iCnt;
}