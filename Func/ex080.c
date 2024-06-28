#include<stdio.h>
#define TBL_END 5
int td(int *p);
main()
{
	int a[] = { 10,20,30,40,50 }, gpkei;
	gpkei = td(a);
	printf("gokei=%d\n", gpkei);
}
int td(int *p)
{
	int gokei=0,i=0;
	while (TBL_END>i)
	{
		gokei += *p++;	
		i++;
	}
	return(gokei);
}