#include<stdio.h>

int main()
{
	enum Days {Mon=1,Tue,Wed,Thu,Fri,Sat,Sun};
	
	const int Mon = 1, Tue = 2, Wed = 3, Thu = 4, Fri = 5, Sat = 6, Sun = 7;
	printf("%d\n",Mon);
	printf("%d\n",Tue);
	printf("%d\n",Wed);
	printf("%d\n",Thu);
	
	enum Days obj = wed;
	
	printf("%d\n",obj);
	
	printf("size of enum object %d\n",sizeof(obj));
	return 0;
}