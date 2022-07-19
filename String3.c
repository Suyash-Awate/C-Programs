#include<stdio.h>

int main()
{
	char Arr[50];
	
	printf("Enter your name\n");
	scanf("%[^'\n']s",Arr);	 	//<-----Regular Expression
	
	printf("Your entered name is : %s\n",Arr);
	
	return 0;
}