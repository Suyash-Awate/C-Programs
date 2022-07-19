//Program to count white spaces in string

#include<stdio.h>

int CountSpace(char *str)
{
	int iCnt = 0;
	while(*str != '\0')
	{
		if(*str == ' ')		//<------------
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int main()
{
	char Arr[20];
	int iRet = 0;
	
	printf("Enter String\n");
	scanf("%[^'\n']s",Arr);
	
	iRet = CountSpace(Arr);
	printf("Number of Spaces are : %d\n",iRet);
	
	return 0;
}