#include<stdio.h>
main()
{
	char deta[10] = "Orange";
	char* a;
	char* d = "Apple";

	a = deta;
	printf("deta[]=");
	while (*a)
	{
		putchar(*a++);
	}
	printf("\n*d=");
	while (*d)
	{
		putchar(*d++);
	}
	putchar('\n');
}

