//Program to swap charcter

#include<stdio.h>

void Swap(char *p, char *q)
{
	char temp;
	
	temp = *p;
	*p = *q;
	*q = temp;
}

int main()
{
	char ch1,ch2;
	
	printf("Enter 1st charcter\n");
	scanf("%c",&ch1);
	printf("Enter 2nd charcter\n");
	scanf("%c",&ch2);
	
	printf("Before swapping characters are : %c %c\n",ch1,ch2);
	
	Swap(&ch1,&ch2);  //Call by Address
	
	printf("After swapping characters are %c %c\n :",ch1,ch2);
	
	return 0;
}