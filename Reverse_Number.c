#include<stdio.h>

int Reverse(int);

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter a Number\n");
	scanf("%d",&iValue);
	
	iRet = Reverse(iValue);
	printf("Reversed number is : %d\n",iRet);
	
	return 0;
}

int Reverse(int iNo)
{
	int iDigit = 0;
	int iRev = 0;
	
	/*
		NOT REQURIED
	    -------------
		if(iNo < 0)		//UPDATER
		{
			iNo = -iNo;
		}
	*/
	
	while(iNo != 0)		//Also reverses without negative number
	{
		iDigit = iNo%10;
		iRev = (iRev * 10)+iDigit;
		iNo = iNo/10;
	}
	return iRev;
}