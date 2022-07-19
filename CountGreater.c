//Program to print numbers which are greater than 10

#include<stdio.h>
#include<stdlib.h>

int CountGreater(int Arr[], int iSize)
{
	int iCnt=0, i=0;
	for(i=0; i<iSize; i++)
	{
		if(Arr[i] > 10)
		{
			iCnt++;
		}
	}
	return iCnt;
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

	iRet = CountGreater(ptr,iLength);
	printf("Number of elements greater then 10 are :%d\n",iRet);
	
	free(ptr);
	
	return 0;
}