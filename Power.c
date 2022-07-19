#include<stdio.h>

int Power(int,int);

int main()
{
	int iValue1 = 0;
	int iValue2 = 0;
	int iRet = 0;

	printf("Enter base number\n");
	scanf("%d",&iValue1);
	printf("Enter power number\n");
	scanf("%d",&iValue2);
	
	iRet = Power(iValue1,iValue2);
	printf("Answer is %d\n", iRet);
	
	return 0;
}

int Power(int iNo1, int iNo2)	//O(N)  Where N is the value of iNo2
{
	int iCnt = 0;
	int iMult = 1;
//---------------------------------------------
	if(iNo1 < 0)
	{
		iNo1 = -iNo1;
	}
	if(iNo2 < 0)
	{
		iNo2 = -iNo2;			//UPDATRES
	}
	if((iNo1 == 0) && (iNo2 == 0))
	{
		return 0;
	}
//----------------------------------------------	
	for(iCnt = 1; iCnt<=iNo2; iCnt++)
	{
		iMult = iMult * iNo1;
	}
	
	return iMult;
	
}