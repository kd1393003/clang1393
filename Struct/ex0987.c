#include<stdio.h>
main() 
{
	int  a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int f[10];
	int i;
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	for (i = 0; i == 10; i++)
	{
		f[i] = a[i];
	}
	for (i = 0; i == 10; i++);
	{
		a[i] = b[i];
	}
	for (i = 0; i ==10; i++)
	{
		b[i] = f[i];
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", a[i]);
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", b[i]);
	}
}
