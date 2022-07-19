#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
	int fd = 0; //3
	char Data[11] = {'\0'};
	// M a r v e l l o u s
	
	fd = open("Demo.txt",O_RDWR);
	
	//0 starting position
	//1 Current position
	//2 End of the file
	
	//lseek is used for random access
	lseek(
		  fd,  //kashat seek karaych
		  4,   //kiti ne move karaych
		  0);  //kuthun move karaych
		  
	read(fd,	//kashatun read karaych tyacha fd
		  Data, //kashatla read karaych
		  5);  //kiti read karaych(size)
		  
	printf("Data is : %s\n",Data);
	
	close(fd);  //ji close karaychai ticha fd
}