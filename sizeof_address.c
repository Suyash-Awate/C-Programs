//program is about sizeof and adress(&) operator

#include<stdio.h>

void fun()
{
	int no = 11;
	printf("Integer value 11  %d\n");  //% d is format specifier which gives output 11
	printf("Size of 11 : %d\n",sizeof(no));  //sizeof operator gives size of 11 i.e 4
	printf("Address of 11 : %d\n",&no);
}

void gun()
{
	char ch = 'A';
	printf("Character value 'A' %c\n"); //% c is format specifier which gives output A
	printf("Size of A : %d\n",sizeof(ch));  //sizeof operator gives size of A i.e 1
	printf("Address of A : %d\n",&ch);
}

void run()
{
	double d = 3.14;
	printf("Float value 3.14: %f\n");  //% f is format specifier which gives output 3.14
	printf("Size of 3.14 is : %d\n",sizeof(d));  //sizeof operator gives size of 3.14 i.e 8
	printf("%Address of 3.14 is : d%\n",&d);
}

int main()
{ 
	printf("This Program gives size and address of:- \n");
	fun();
	gun();
	run();
	return 0;
}