#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
	int fd = 0; //3
	char Data[11] = "Marvellous";
	
	fd = open("Demo.txt",O_RDWR);
	//O_RDWR     Reading
	//O_WRONLY   Writting
	//O_RDWR     read and write
	//O_Append   to rewite
	
	write(fd,	//kashyat lihaycha
		  Data, //ky lihaycha to data
		  10);  //kiti lihaycha(size)
		  
		  
	close(fd);  //ji close karaychai ticha fd
}