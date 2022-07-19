#include<stdio.h>
#include<stdlib.h>	//For Dynamic Memory allocation

int Addition(int Brr[], int iSize)
{
	int iCnt=0, iSum = 0;
	
	for(iCnt=0; iCnt<iSize; iCnt++)
	{
		iSum = iSum + Brr[iCnt];
	}
	return iSum;
}

int main()
{
	int * Arr = NULL;
	int iRet=0;
	int iCnt=0;
	int iLength=0;
	
	printf("Enter Number Of Elements\n");
	scanf("%d",&iLength);
	
	Arr = (int*) malloc (sizeof(int) * iLength);  //Memory Allocation
	
	printf("Enter the Elements\n");
	for(iCnt=0; iCnt<iLength; iCnt++)
	{
		scanf("%d",&Arr[iCnt]);
	}
	
	iRet = Addition(Arr,iLength);
	printf("Addition is : %d\n", iRet);
	
	free(Arr);  //Memory Dealloction
	return 0;
}