//Program to convert from Capital to Small

#include<stdio.h>

char CapitalToSmall(char c)
{
	if((c>='A')&&(c<='Z'))
	{
		return c+32;	//<--------------
	}
}

int main()
{
	char ch = '\0';
	char cRet = '\0';
	
	printf("Enter character\n");
	scanf("%c",&ch);
	
	cRet = CapitalToSmall(ch);
	printf("Small letter is : %c\n",cRet);
	
	return 0;
}