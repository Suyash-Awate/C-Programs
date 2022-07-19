#include<stdio.h>
void Display()
{
	int i = 0;
	int j = 0;
	
	int iRow = 3;
	int iCol =4;
	
	//Intiailization  //condition  //Displacement
	for(i = 1; i<=iRow; i++)
	{
		for(j=1; j<=iCol; j++)
		{
			printf("*\t");
		}
	}
	printf("\n");
}

int main()
{
	Display(iValue);
	
	return 0;
}