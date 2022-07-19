#include<stdio.h>

int maximum(int iNo1, int iNo2)
{
	if(iNo1 > iNo2)
	{ 
		return iNo1;
	}
	else
	{ 
		return iNo2;
	}
}
int main()
{ 
	auto int iValue1 = 0, iValue2 = 0, iRet = 0;
	
	printf("Enter first value\n");
	scanf("%d",&iValue1);
	
	printf("Enter the Second number\n");
	scanf("%d",&iValue2);
	
	iRet = maximum(iValue1,iValue2);
	printf("Maximum number is : %d\n",iRet);
	
	return 0;
}
