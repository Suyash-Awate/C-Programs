//This program is about auto and static storage class

#include<stdio.h>

void  fun() //Funtion defination
{
   auto int i = 10;   //Auto storage
   i++;
   printf("Value of i from fun is : %d\n",i);
}

void gun()
{
  static int i = 10;  //Static storage
  i++;
  printf("Value of i from gun is :%d\n",i);
}

int main()
{
   printf("Inside main\n");
   
   fun();  //Function call
   fun();
   fun();
  
   
   gun();  //Function call
   gun();  //Previous value of function call gets stored in the variable
   gun();
   return 0;
}
  