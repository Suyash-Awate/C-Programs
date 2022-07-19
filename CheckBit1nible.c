//Program to check wether 1st 4 bit are ON or OFF

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
	UINT iMask = 0x0000000F; // 0000 0000 0000 0000 0000 0000 0000 1111
							 //   0    0    0    0    0    0    0   15
	UINT iResult = 0;
	
	iResult  = iNo & iMask;
	
	if(iResult == iMask)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	UINT iValue = 0;
	bool bRet = false;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	bRet = CheckBit(iValue);
	if(bRet == true)
	{
		printf("First 4 Bits are ON\n");
	}
	else
	{
		printf("First 4 Bits are OFF\n");
	}
	
	return 0;
}