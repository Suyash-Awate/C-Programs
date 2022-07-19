#include<stdio.h>

void Display(int); //Declaration

/////////////////////////////////////////
//Input  : 5
//Output : 1 2 3 4 5 
//
//Input  : 8
//Output : 1 2 3 4 5 6 7 8  
/////////////////////////////////////////

int main()
{
	int iNo = 0;
	printf("Enter Number\n");
	scanf("%d",&iNo);
	Display(iNo);  //Function Call
	
	return 0;
}

void Display(int iValue)
{
	int i = 0;
	
	if(iValue == 0)    //Filter
	{
		printf("Your Entered number is 0\n");
		return;
	}
	if(iValue < 0)   //Input Updater
	{
		iValue = -iValue;
	}
	
	for(i=1; i<=iValue; i++)
	{
		printf("%d\n",i);
	}
}