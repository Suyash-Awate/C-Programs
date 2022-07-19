#include<stdio.h>

void timetable(int iStd)
{
	switch(iStd)
	{
		case 1:
			printf("Your exam is at : 11AM \n"); 
			break;
		
		case 2:
			printf("Your exam is at : 12PM \n"); 
			break;
		
		case 3:
			printf("Your exam is at : 1PM \n"); 
			break;
		
		case 4:
			printf("Your exam is at : 2PM \n"); 
			break;
		
		default:
			printf("Wrong Standard\n");
	}
}	

int main()
{
	int iValue = 0;
	
	printf("Enter Your Standard asa 1, 2, 3 or 4\n");
	scanf("%d", &iValue);
	
	timetable(iValue);
	
	return 0;
	
}