//Program to search Last occurence number 

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int LastOccurence(int Arr[],int iSize, int iNo)
{
	int i = 0;
	int iAns = -1;	//<-----------
	
	//Travel Loop Forward
	for(i=0; i<=iSize; i++)
	{ 
		if(Arr[i] == iNo)
		{
			iAns = i;
		}
	}
	return iAns;
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
	
	iRet = LastOccurence(ptr,iLength,iValue);
	if(iRet == -1)
	{
		printf("There is no such number\n");
	}
	else
	{
		printf("Number is at index : %d\n",iRet);
	}
	
	free(ptr);
	
	return 0;
}