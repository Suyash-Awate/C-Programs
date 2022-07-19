#include<stdio.h>

#pragma pack(1) //preprocessor to compiler to allocate memory in terms of 1 byte
struct Demo
{
	int no;
	char ch;
	float f;
	int d;
};

int main ()
{
	struct Demo obj1;
	
	obj1.no = 11;
	obj1.ch = 'M';
	obj1.f = 3.14;
	obj1.d = 51;
	
	printf("%d",sizeof(obj1));
	
	return 0;
} 
