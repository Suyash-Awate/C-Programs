//Program to search number in array
//Never Use return statement inside loop

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckNumber(int Arr[],int iSize, int iNo)
{
	int i=0;
	bool bAns = false;
	
	for(i=0; i<iSize; i++)
	{
		if(Arr[i] == iNo)
		{
			break;
		}
	}
	if(i == iSize)
	{
		return false;
	}
	else
	{
		return true;
	}
}

int main()
{
	int iLength = 0,i = 0,iRet = 0,iValue = 0;
	
	int *ptr = NULL;

	printf("Enter number of elements\n");
	scanf("%d",&iLength);
	
	ptr = (int*)malloc(sizeof(int)*iLength);
	
	printf("Enter elements\n");
	for(i=0; i<iLength; i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	printf("Enter number you want to search\n");
	scanf("%d",&iValue);
	
	iRet = CheckNumber(ptr,iLength,iValue);
	if(iRet == true)
	{
		printf("Number is Present\n");
	}
	else
	{
		printf("Number is not Present\n");
	}
	
	free(ptr);
	
	return 0;
}