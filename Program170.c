//Program to access data randomly from the file

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd = 0;
	char Arr[10];
	
	fd = open("LB17.txt",O_RDWR);
	if(fd == -1)
	{
		printf("Unable to open file\n");
	}
	
	read(fd,Arr,5);
	
	printf("Data is :\n");
	
	write(1,Arr,5);
	
	close(fd);
	
	return 0;
}