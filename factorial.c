//To print factorial of a number 

#include<stdio.h>

/////////////////////////////////////////
//Input  : 5
//Output : 120
//
//Input  : 3
//Output : 6
/////////////////////////////////////////

//typedef 1000Gram Kilo
typedef unsigned long int UINT;

UINT Factorial(int);

int main()
{
	int iNo = 0; unsigned long int iRet = 0;
	
	printf("Enter Number\n");
	scanf("%d",&iNo);
	
	iRet = Factorial(iNo);
	
	printf("Factorial is :%ld\n",iRet);
	return 0;
}

UINT Factorial(int iValue)
{
	UINT iFact = 1;
	int iCnt = 0;
	
	if(iValue < 0)		//Updater
	{
		iValue = -iValue;
	}

	for(iCnt=1; iCnt<=iValue; iCnt++)
	{
		iFact = iFact * iCnt;
	}
	
	return iFact;
}