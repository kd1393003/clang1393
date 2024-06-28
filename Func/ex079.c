#include<stdio.h>
int td(int td[], int number);
main()
{
	int a[] = { 10,20,30,40,50 }, gpkei;
	gpkei = td(a, 5);
	printf("gokei=%d\n", gpkei);
}
int td(int td[], int number)
{
	int gokei=0;
	while (number>0)
	{
		gokei += td[number - 1];	
		number--;
	}
	return(gokei);
}