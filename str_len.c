//Program to return length of string

#include<stdio.h>
typedef unsigned int UINT;

UINT strlenX(char*str)	// "strlen"  is the name of inbuilt function 
{
	int iCnt = 0;
	
	if(str == NULL)		//To avoid segmentation fault
	{
		return 0;
	}
	while(*str!='\0')
	{
			iCnt++;
			str++;
	}
	return iCnt;
}

int main()
{
	char Arr[20];
	int iRet = 0;
	
	printf("Enter your name\n");
	scanf("%[^'\n']s",Arr);
	
	iRet = strlenX(Arr);
	printf("Length of string is : %d\n",iRet);
	
	return 0;
}