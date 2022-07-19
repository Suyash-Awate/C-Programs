//Program to open, write the file  (LB17.txt)

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>	//to read and write

int main()
{
	int fd = 0, iRet = 0;
	char Fname[30];
	char Data[] = "Marvellous Infosystems";
	
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
	
	iRet = write(fd,Data,10);
	
	printf("%d bytes gets sucessfully written in the file\n",iRet);
	
	return 0;
}