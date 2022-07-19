//Program to print ASCII Table

#include<stdio.h>

void DisplayTable()
{
	int i = 0;
	printf("ASCII Table is \n");
	printf("*************************************\n");
	printf("Decimal\t  Hexadecimal\t 	Octal\t  character\n");
	
	for(i=0; i<127; i++)
	{
		printf("%d \t %x \t %o \t	%c\n",i,i,i,i);
	}
	printf("**************************************\n");
}

int main()
{
	DisplayTable();
	
	return 0;
}