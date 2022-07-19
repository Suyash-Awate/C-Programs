#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
	int fd = 0; //3
	char Data[11] = {'\0'};
	
	fd = open("Demo.txt",O_RDWR);
	
	read(fd,	//kashatun read karaych tyacha fd
		  Data, //kashatla read karaych
		  5);  //kiti read karaych(size)
		  
	printf("Data is : %s\n",data);
	
	//write(1,Data,5); // printf()
	
	close(fd);  //ji close karaychai ticha fd
}