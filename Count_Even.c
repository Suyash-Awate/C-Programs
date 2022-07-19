#include<stdio.h>

int CountEven(int iNo)
{
	int iDigit = 0;
	int iCount = 0;
	
	if(iNo == 0)	//Filter
	{
		return 1;
	}	
	
	if(iNo < 0)		//Updater
	{
		iNo = -iNo;
	}
	
	while(iNo > 0)	// O(N) Where N is number of digits
	{
		iDigit = iNo%10;
		if((iDigit%2)==0)
		{
			iCount++;
		}
		iNo = iNo/10;
	}
	return iCount;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet = CountEven(iValue);
	printf("Number of Even Digits are :%d\n", iRet);
		
	return 0;
}