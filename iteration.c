#include<stdio.h>

void Display()
{
	/*
	printf("1\n");
	printf("2\n");
	printf("3\n");         This is what we want to print
	printf("4\n");
	printf("5\n");
	*/
//-------------------------------------------------------------------------
	
	printf("Inside for loop\n");
	int iCnt = 0;
	
	//    1       2        3
	for(iCnt=1; iCnt<=5; iCnt++)
	{
		printf("%d\n",iCnt);  //4
	}
	
//-------------------------------------------------------------------------	
	
	printf("Inside While Loop");
	
	iCnt=0;  				  //1
	while(iCnt<=5)  		  //2
	{
		printf("%d\n",iCnt);  //4
		iCnt++;
	}
	
//---------------------------------------------------------------------------
    
	printf("Inside do-while loop\n");
	iCnt=1;                   //1
	do
	{
		printf("%d\n",iCnt);  //4
		iCnt++;  			  //3
	}while(iCnt<=5); 		  //2
}

//---------------------------------------------------------------------------	

int main()
{
	printf("Inside main\n");
	
	Display();
	
	return 0;
}
