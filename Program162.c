//Program to open, read, the file  (LB17.txt)

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>	//to read and write

int main()
{
	int fd = 0, iRet = 0;
	char Fname[30];
	char Data[6];
	
	printf("Enter file name\n");
	scanf("%s",Fname);
	
	fd = open(Fname,O_RDWR);
	
	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;  //Return to OS
	}
	else
	{
		printf("File Sucessfully opend with FD : %d\n",fd);
	}
	
	iRet = read(fd,Data,6);
	
	printf("%d bytes gets sucessfully read from the file\n",iRet);
	
	printf("Data from the file is : %s\n",Data);
	
	return 0;
}