//Program to open a file  (LB17.txt)

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>	//to read and write

int main()
{
	int fd = 0;
	char Fname[30];
	
	printf("Enter file name\n");
	scanf("%s",Fname);
	
	fd = open(Fname,O_RDWR);
	
	if(fd == -1)
	{
		printf("Unable to open file\n");
	}
	else
	{
		printf("File Sucessfully opend with FD : %d\n",fd);
	}
	
	return 0;
}