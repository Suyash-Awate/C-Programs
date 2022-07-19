#include<stdio.h>

int main()
{
	int arr[]={10,20,30,40,50};
	printf("0th element of arr is:%d\n", arr[0]);
	printf("1st element of arr is:%d\n", arr[1]);
	printf("2nd element of arr is:%d\n", arr[2]);
	printf("3rd element of arr is:%d\n", arr[3]);
	printf("4th element of arr is:%d\n", arr[4]);

	printf("0th element of arr is:%d\n", &arr[0]);
	printf("1st element of arr is:%d\n", &arr[1]);
	printf("2nd element of arr is:%d\n", &arr[2]);
	printf("3rd element of arr is:%d\n", &arr[3]);
	printf("4th element of arr is:%d\n", &arr[4]);
	
	return 0;
}
