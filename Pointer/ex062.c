#include<stdio.h>
main()
{
	char* p = "peach";
	char deta1[10] = "banana", * a;
	char deta2[10], * b;

	a = deta1;
	b = deta2;

	while (*b++ = *a++);
	a = deta1;
	
	while (*a++ = *p++);
	
	
	printf("deta1=%s",deta1);
	
	a = deta1;
	b = deta2;

	putchar('\n');

	printf("deta2=%s",deta2);
	putchar('\n');
}