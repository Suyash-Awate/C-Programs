//Program to check wether 12th and 7th bit is ON or OFF

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
	UINT iMask = 0x00000084; // 0000 0000 0000 0000 0000 0000 1000 0100
							 //   0    0    0    0    0    0    8    4
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
		printf("Bit is ON\n");
	}
	else
	{
		printf("Bit is OFF\n");
	}
	
	return 0;
}