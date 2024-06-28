#include<stdio.h>
main()
{
	char deta[15] = "C language" ;
	char deta2[15];
	char *a, *b;
	a = deta;
	b = deta2;
	printf("deta[ ]=%s\n", a);
	while (*b++ = *a++);
	
	b = deta2;

	printf("deta2[ ]=%s\n", b);
	while (*b)
	{
		putchar(*b++);
	}
	putchar('\n');
}