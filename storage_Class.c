#include<stdio.h>

int no;  //Global variable and its storage class is extern

void  fun() //Funtion defination
{
   int i = 11;  //Local variable and its storage class is auto
   int j;       //Local variable and its storage class is auto
   auto int k;  //Local variable and its storage class is auto
   auto int l = 11;  //Local variable and its storage class is auto
}

void gun()
{
  register int x = 11;
  register int y;
}

int main()
{
   printf("Inside main\n");
   fun();  //Function call
   gun();  //Function call
   return 0;
}
  