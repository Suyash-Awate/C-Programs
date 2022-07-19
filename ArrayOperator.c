//Program is about use of operator in array

#include<stdio.h>

int main()
{
	int Arr[5] = {10,20,30,40,50};  //defination

	printf("1st element of Array : %d\n",Arr[1]); 
	printf("3rd element of Array : %d\n",Arr[3]); 
	printf("Address first element of given Array : %d\n",Arr);
	printf("Address of whole Array : %d\n",&Arr);
	printf("Address of 2nd element of Array : %d\n",&Arr[2]);
	printf("Size of whole array : %d\n",sizeof(Arr));
	printf("Size of 4th element of Array : %d\n",sizeof(Arr[4]));
	printf("Address of 2nd element of Array : %d\n",Arr+1);
	printf("Address of whole Array Shifted by one : %d\n",&Arr+1);
	
	return 0;
}