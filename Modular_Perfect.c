#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int);
int SumFactors(int);

int main()
{
	int iValue = 0;
	bool bRet = false;

	printf("Enter a number\n");
	scanf("%d",&iValue);

	bRet = CheckPerfect(iValue);
	if(bRet == true)
	{
		printf("It is a perfect number\n");
	}
	else
	{
		printf("It is not perfect number\n");
	}

}

bool CheckPerfect(int iNumber)
{
	int iRet = 0;
	if(iNumber < 0 )
	{
		iNumber = -iNumber;
	}
	
	iRet = SumFactors(iNumber);
	if(iRet == iNumber)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int SumFactors(int iNo)
{
	int iSum = 0;
	int iCnt = 0;

	if(iNo < 0)
	{
		iNo = -iNo;
	}

	for(iCnt=1; iCnt<=(iNo/2); iCnt++)
	{
		if((iNo%iCnt) == 0)
		{
			iSum = iSum + iCnt;
		}
	}
	return iSum;
}