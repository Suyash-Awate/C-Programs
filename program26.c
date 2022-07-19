//Header file inclusion
#include<stdio.h>

//Function Declaration
void Display();

//Entry point function
int main()
{
	int iValue = 0;
	printf("Enter a number\n");
	scanf("%d",iValue);
	Display(iValue);

	return 0;
}

//Function Defination
void Display(int iNo)
{ 
	//Local Variables
	int iDigit = 0;

	while(iNo != 0)
	{
		iDigit = iNo % 10;
		printf("%d\n",iDigit);
		iNo = iNo/10;
	}
}



	/*iDigit = iNo % 10;		//1
	printf("%d\n",iDigit);  //1
	iNo = iNo/10;			//752

	iDigit = iNo %10;		//2
	printf("%d\n",iDigit);  //2
	iNo = iNo/10;			//75

	iDigit = iNo % 10;		//5
	printf("%d\n", iDigit); //5
	iNo = iNo/10;			//7

	iDigit = iNo % 10;		//7
	printf("%d\n",iDigit);  //7
	iNo = iNo/10;			//0  <- terminating condition 
	*/