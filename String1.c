#include<stdio.h>

int main()
{
	char Arr[11] = "Marvellous";
	
	printf("%s\n",&Arr[0]); //Marvelloues
	printf("%s\n",&Arr[5]); //llous
	printf("%s\n",&Arr[9]); //s
	
	printf("%s\n",Arr);	  //Marvelloues 
	printf("%s\n",Arr+5); //llous
	printf("%s\n",Arr+9); //s
	return 0;
}