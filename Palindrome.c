#include<stdio.h>
#include<stdbool.h>

bool ChkPalindrome(int);

int main()
{
	int iValue = 0;
	bool iRet = false;
	
	printf("Enter a Number\n");
	scanf("%d",&iValue);
	
	iRet = ChkPalindrome(iValue);
	if(iRet == true)
	{
		printf("It is a Palindrome Number\n");
	}
	else if(iRet == false)
	{
		printf("It is not a Palindrome Number\n");
	}
	
	return 0;
}

bool ChkPalindrome(int iNo)
{
	int iDigit = 0;
	int iRev = 0;
	int iTemp = iNo;
	
	while(iNo != 0)
	{
		iDigit = iNo%10;
		iRev = (iRev * 10)+iDigit;
		iNo = iNo/10;
	}
	if(iRev == iTemp)
	{
		return true;
	}
	else
	{
		return false;
	}
}