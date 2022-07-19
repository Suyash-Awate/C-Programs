//Program to check whether string is Palindrome or not

#include<stdio.h>
#include<stdbool.h>

bool CheckPalindrome(char *str)
{
	char *start = NULL;
	char * end = NULL;
	bool flag = true;
	start = str;
	end = str;
	while(*end != '\0')
	{
		end++;
	}
	end--;
	
	while(start < end)
	{
		if(*start != *end)
		{
			flag = false;
			break;
		}
		start++;
		end--;
	}
	return flag;
}

int main()
{
	char Arr[30];
	bool bRet = false;
	
	printf("Enter a string\n");
	scanf("%[^'\n']s",Arr);
	
	bRet = CheckPalindrome(Arr);
	if(bRet == true)
	{
		printf("String is Palindrome\n");
	}
	else
	{
		printf("String is not Palindrome\n");
	}
	return 0;
}