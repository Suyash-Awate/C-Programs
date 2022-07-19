//Program to Display Smallest number

#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iSize)
{
	int iCnt=0, i=0;
	int iMin = Arr[0];  //<--------------
	
	for(i=0; i<iSize; i++)
	{
		if(Arr[i]<iMax)
		{
			iMin = Arr[i];
		}
	}
	return iMin;
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

	iRet = Minimum(ptr,iLength);
	printf("Smallest number is : %d\n",iRet);
	
	free(ptr);
	
	return 0;
}