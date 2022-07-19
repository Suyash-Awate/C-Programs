//Program to count Capital and Small letters in string

#include<stdio.h>

void Count(char *str)
{
	int Ccount = 0, Scount = 0;
	while(*str != '\0')
	{
		if((*str>='A')&&(*str<='Z'))
		{
			Ccount++;
		}
		else if((*str>='a')&&(*str<='z'))
		{
			Scount++;
		}	
		*str++;
	}
	printf("Number of small letters are : %d\n",Scount);
	printf("Number of Capital letters are : %d\n",Ccount);
}

int main()
{
	char Arr[20];
	
	printf("Enter String\n");
	scanf("%[^'\n']s",Arr);
	
	Count(Arr);
	
	return 0;
}