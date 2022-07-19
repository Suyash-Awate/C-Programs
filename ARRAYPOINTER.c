#include<stdio.h>

int Addition(int*Brr) //<--- Brr is a pointer which holds address of Arr
//int Addition(int Brr[])
{
	int iCnt=0, iSum = 0;
	
	for(iCnt=0; iCnt<5; iCnt++)
	{
		iSum = iSum + Brr[iCnt];
	}
	return iSum;
}

int main()
{
	int Arr[5];
	int iRet = 0;
	int	iCnt = 0;
	
	printf("Enter numbers\n");
	for(iCnt=0; iCnt<5; iCnt++)
	{
		scanf("%d",&Arr[iCnt]);
	}
	
	iRet = Addition(Arr);	//Addition(100)<---Passes Base address of Arr i.e 100
	printf("Addition is : %d\n", iRet);
	
	return 0;
}