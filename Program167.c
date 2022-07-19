//Program to copy contents of one file into another file

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fdsrc = 0;
	char Fname1[30];
	
	char Fname2[30];
	int fddest = 0;
	
	char Buffer[1024];  //Mug
	int	iRet = 0;
	
	printf("Enter source file name\n");
	scanf("%s",Fname1);
	
	fdsrc = open(Fname1,O_RDONLY);  //Only to read the file 
	
	if(fdsrc == -1)
	{
		printf("Unable to open file\n");
		return -1;  //Return to OS
	}
	else
	{
		printf("File Sucessfully opend with FD : %d\n",fdsrc);
	}
//-------------------------------------------------------------------------	
	printf("\nEnter Destination file name\n");
	scanf("%s",Fname2);
	
	fddest = creat(Fname2,0777);
//--------------------------------------------------------------------------	
	
	while((iRet = read(fdsrc,Buffer,sizeof(Buffer))) != 0)
	{
		write(fddest,Buffer,iRet);
	}
	
	close(fdsrc);
	close(fddest);
	
	return 0;
}