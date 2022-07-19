#include<stdio.h>
#include<stdbool.h>

int Reverse(int);
bool CheckPalindrome(int);

int main()
{
	int iValue = 0;
	bool bRet = false;
	
	printf("Enter a Number\n");
	scanf("%d",&iValue);
	
	iRet = CheckPalindrome(iValue);
	if(iRet == true)
	{
		printf("It is a Palindrome Number\n");
	}
	else
	{
		printf("It is not a Palindrome Number\n");
	}
	
	return 0;
}

bool CheckPalindrome(int iInput)
{
	int iNumber = 0;
	iNumber = Reverse(iInput);	//Calls Reverse Function
	if(iNumber == iInput)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int Reverse(int iNo)
{
	int iDigit = 0;
	int iRev = 0;

	while(iNo != 0)	
	{
		iDigit = iNo%10;
		iRev = (iRev * 10)+iDigit;
		iNo = iNo/10;
	}
	return iRev; 	//returns to CheckPalindrome
}
