#include<stdio.h>
void d(int a);
main()
{
	int a;
	printf("deta");
	scanf("%d", &a);
	d(a);
}
void d(int a)
{

	printf("     %d    ", a);
	return;
}