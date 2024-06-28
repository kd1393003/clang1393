#include<stdio.h>
int td(int* p);
int tb2(int tb[]);
main()
{
	int a[] = {10,20,30,40,-999}, gokei;
	gokei = td(a);
	printf("goukei=%d\n",gokei);
	gokei = tb2(a);
	printf("goukei=%d\n",gokei);
}
int td(int* p)
{
	int gokei = 0, i = 0;
	while (*p != -999)
	{
		gokei += *p;
		p++;

	}
	return(gokei);
}

int tb2(int tb[])
{
	int gokei = 0, i = 0;
	while (tb[i] != -999)
	{
		gokei += tb[i];
		i++;

	}
	return(gokei);
}
