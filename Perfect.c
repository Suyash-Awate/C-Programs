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
	int iSum = 0;
	int iCnt = 0;
	
	if(iNumber < 0 )
	{
		iNumber = -iNumber;
	}
	
	for(iCnt=1; iCnt<=(iNumber/2); iCnt++)
	{
		if((iNumber%iCnt) == 0)
		{
			iSum = iSum + iCnt;
		}
	}
	if(iSum == iNumber)
	{
		return true;
	}
	else
	{
		return false;
	}
}