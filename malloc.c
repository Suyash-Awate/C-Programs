#include<stdio.h>
#include<stdlib.h>
int main()    //Entry point function
{
	int iSize = 0;    // Local variable wich gets memory in Stack frame
	int *ptr = NULL;  //Pointer intialised with NULL, inside it gets stored as (void*) 
	
	// Step 1 : Ask the user about the size
	printf("How many elements?\n");
	scanf("%d",&iSize);
	
	// Step 2 : Allocate the memory 
	prt = (int *)malloc(iSize*sizeof(int));   //Dynamic Memory is created on heap for malloc() 
	
	//Step 3 : Use the memory 
	
	//Step 4 : Deallocate the memory 
	free(ptr);
	
	return 0;
}