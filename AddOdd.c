//Program to print Addition of Odd numbers

#include<stdio.h>
#include<stdlib.h>

int SumOdd(int Arr[], int iSize)
{
	int iSum=0, i=0;
	for(i=0; i<iSize; i++)
	{
		if((Arr[i]%2)!=0)
		{
			iSum = iSum + Arr[i];
		}
	}
	return iSum;
}	

int main()
{
	int iLength = 0,i = 0;
	int *ptr = NULL;
	int iRet = 0;
	
	printf("Enter number of elements\n");
	scanf("%d",&iLength);
	
	ptr = (int*)malloc(sizeof(int)*iLength);
	
	printf("Enter elements\n");
	for(i=0; i<iLength; i++)
	{
		scanf("%d",&ptr[i]);
	}

	iRet = SumOdd(ptr,iLength);
	printf("Addition of Odd elements is :%d\n",iRet);
	
	free(ptr);
	
	return 0;
}